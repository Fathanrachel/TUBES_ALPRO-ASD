#include <iostream>
using namespace std;

struct fathan_node
{
	int fathan_info;
	struct fathan_node *fathan_next;
};
	
class fathan_stack
{
	struct fathan_node *fathan_top;
public:
	fathan_stack();
	void fathan_push(int);
	int fathan_pop();
	bool fathan_isEmpty();
	void fathan_display();
};

fathan_stack::fathan_stack()
{
	fathan_top = NULL;
}

void fathan_stack::fathan_push(int fathan_data)
{
	fathan_node *p;
	if ((p = (fathan_node*)malloc(sizeof(fathan_node))) == NULL)
	{
		cout << "Memori Penuh";
		exit(0);
	}
	p = new fathan_node;
	p->fathan_info = fathan_data;
	p->fathan_next = NULL;
	if (fathan_top != NULL)
	{
		p->fathan_next = fathan_top;
	}
	fathan_top = p;
}

int fathan_stack::fathan_pop()
{
	struct fathan_node *fathan_temp;
	int fathan_value;
	if (fathan_top == NULL)
	{
		cout << "Stack Kosong" << endl;
	}
	else
	{
		fathan_temp = fathan_top;
		fathan_top = fathan_top->fathan_next;
		fathan_value = fathan_temp->fathan_info;
		delete fathan_temp;
	}
	return fathan_value;
}

bool fathan_stack::fathan_isEmpty()
{
	return (fathan_top == NULL);
}

void fathan_stack::fathan_display()
{
	struct fathan_node *p = fathan_top;
	if (fathan_top == NULL)
	{
		cout << "Tidak ada tampilan " << endl;
	}
	else
	{
		cout << "Isi Stack: ";
		while (p != NULL)
		{
			cout << p->fathan_info << " ";
			p = p->fathan_next;
		}
		cout << endl;
	}
}

class fathan_Graph
{
private:
	int n;
	int **A;
public:
	fathan_Graph(int fathan_size = 2);
	~fathan_Graph();
	bool fathan_isConnected(int, int);
	void fathan_addEdge(int x, int y);
	void fathan_DFS(int x, int fathan_required);
};

fathan_Graph::fathan_Graph(int fathan_size)
{
	int i, j;
	if (fathan_size < 2)
		n = 2;
	else
		n = fathan_size;
	A = new int *[n];
	for (i = 0; i < n; ++i)
		A[i] = new int[n];
	for (i = 0; i < n; ++i)
		for (j = 0; j < n; ++j)
			A[i][j] = 0;
}

fathan_Graph::~fathan_Graph()
{
	for (int i = 0; i < n; ++i)
		delete[] A[i];
	delete[] A;
}

bool fathan_Graph::fathan_isConnected(int x, int y)
{
	return (A[x - 1][y - 1] == 1);
}

void fathan_Graph::fathan_addEdge(int x, int y)
{
	A[x - 1][y - 1] = A[y - 1][x - 1] = 1;
}

void fathan_Graph::fathan_DFS(int x, int fathan_required)
{
	fathan_stack s;
	bool *fathan_visited = new bool[n + 1];
	int i;
	for (i = 0; i <= n; i++)
		fathan_visited[i] = false;
	s.fathan_push(x);
	fathan_visited[x] = true;
	if (x == fathan_required)
		return;
	cout << "Depth First Search - DFS - Awal Vertex = " << x << endl;
	while (!s.fathan_isEmpty())
	{
		int k = s.fathan_pop();
		if (k == fathan_required)
			break;
		cout << k << " ";
		for (i = n; i >= 1; --i)
			if (fathan_isConnected(k, i) && !fathan_visited[i])
			{
				s.fathan_push(i);
				fathan_visited[i] = true;
			}
	}
	cout << endl;
	delete[] fathan_visited;
}

int main()
{
	fathan_Graph g(8);
	g.fathan_addEdge(1, 2);
	g.fathan_addEdge(1, 3);
	g.fathan_addEdge(1, 4);
	g.fathan_addEdge(2, 5);
	g.fathan_addEdge(3, 6);
	g.fathan_addEdge(4, 7);
	g.fathan_addEdge(4, 8);
	g.fathan_DFS(1, 8);
	return 0;
}