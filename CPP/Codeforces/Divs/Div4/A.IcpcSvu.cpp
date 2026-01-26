#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define endl '\n'

/*
    Tetrahedron. Tetrahedron has 4 triangular faces.
    Cube. Cube has 6 square faces.
    Octahedron. Octahedron has 8 triangular faces.
    Dodecahedron. Dodecahedron has 12 pentagonal faces.
    Icosahedron. Icosahedron has 20 triangular faces. */

int GetFaces(string Shape)
{

    if (Shape == "Tetrahedron")
    {
        return 4;
    }
    else if (Shape == "Cube")
    {
        return 6;
    }
    else if (Shape == "Octahedron")
    {
        return 8;
    }
    else if (Shape == "Dodecahedron")
    {
        return 12;
    }
    else if (Shape == "Icosahedron")
    {
        return 20;
    }
    else
    {
        return 0;
    }
}

int CalculateFaces(int ShapesNumber)
{

    int SumFaces = 0;
    string Shape;

    while (ShapesNumber--)
    {
        cin >> Shape;
        SumFaces += GetFaces(Shape);
    }
    return SumFaces;
}

void Solve()
{
    int Shapes = 0;
    cin >> Shapes;
    cout << CalculateFaces(Shapes) << endl;
}


void SpeedCode()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void CheckTestCases()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        Solve();
    }
}
int main()
{
    SpeedCode();

    Solve();

    return 0;
}
