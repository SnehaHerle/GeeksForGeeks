// Learning from the code given in the editorial.
// https://www.geeksforgeeks.org/check-given-four-points-form-square/
// https://practice.geeksforgeeks.org/problems/is-square/0
// Using a structure is a good practice which did not come to my mind. No issue. Good to learn.
// I had thought of calculating each distance separately as there are only 4 points. A function is a better reusable OOP way.  
// A C++ program to check if four given points form a square or not. 

#include <iostream> 
using namespace std; 

struct Point                   // Structure of a point in 2D space
{ 
	int x, y;   
}; 

int distSq(Point p, Point q)       // A utility function to find square of distance from point 'p' to point 'q'. Better to find square.
{ 
	return (p.x - q.x) * (p.x - q.x) + (p.y - q.y) * (p.y - q.y); 
} 

bool isSquare(Point p1, Point p2, Point p3, Point p4)     // This function returns true if (p1, p2, p3, p4) form a square, otherwise false 
{ 
	int d2 = distSq(p1, p2); // from p1 to p2 
	int d3 = distSq(p1, p3); // from p1 to p3 
	int d4 = distSq(p1, p4); // from p1 to p4 

	// If lengths of (p1, p2) and (p1, p3) are same, then 
	// following conditions must met to form a square. 
	// 1) Square of length of (p1, p4) is same as twice 
	// the square of (p1, p2) 
	// 2) Square of length of (p2, p3) is same 
	// as twice the square of (p2, p4) 

	if (d2 == d3 && 2 * d2 == d4 && 2 * distSq(p2, p4) == distSq(p2, p3)) 
	{ 
		return true; 
	} 

	// The below two cases are similar to above case, where we are considering the 3 possible cases like (d2,d3,d4) = (100,100,2*100) or (100,2*100,100) or (2*100,100,100)
	if (d3 == d4 && 2 * d3 == d2 && 2 * distSq(p3, p2) == distSq(p3, p4)) 
	{ 
		return true; 
	} 
	if (d2 == d4 && 2 * d2 == d3 && 2 * distSq(p2, p3) == distSq(p2, p4)) 
	{ 
		return true; 
	} 

	return false; 
} 

// Driver program to test above function. Hmm, so it is called the driver program. 
int main() 
{ 
	int t, x1, y1, x2, y2, x3, y3, x4, y4;
	cin>>t;
	while(t--)
	{
	    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	    if (x1==0 && x2==0 && x3==0 && x4==0 && y1==0 && y2==0 && y3==0 && y4==0)
	    {
	        cout<<"No"<<endl;
	        continue;
	    }
	    Point p1 = {x1,y1}, p2 = {x2,y2}, p3 = {x3,y3}, p4 = {x4,y4};
	    isSquare(p1, p2, p3, p4) ? cout << "Yes" : cout << "No"; 
	    cout<<endl;
	}
	return 0; 
} 
