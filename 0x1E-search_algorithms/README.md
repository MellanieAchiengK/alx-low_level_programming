## 0x1E. C - Search Algorithms

## Learning Objectives
What is a search algorithm
What is a linear search
What is a binary search
What is the best search algorithm to use depending on your needs

## **Files:**
0. Linear search | function that searches for a value in an array of integers using the Linear search algorithm
1. Binary search | function that searches for a value in a sorted array of integers using the Binary search algorithm
2. Big O #0 | time complexity (worst case) of a linear search in an array of size n
3. Big O #1 | space complexity (worst case) of an iterative linear search algorithm in an array of size n
4. Big O #2 | time complexity (worst case) of a binary search in an array of size n
5. Big O #3 | space complexity (worst case) of a binary search in an array of size n
6. Big O #4 | space complexity of given function / algorithm

int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
