//Problem statement
//Sam is researching on Alpha-Triangles. So, he needs to create them for different integers ‘N’.
//
//An Alpha-Triangle is represented by the triangular pattern of alphabets in reverse order.
//
//For every value of ‘N’, help sam to print the corresponding Alpha-Triangle.
//
//Example:
//Input: ‘N’ = 3
//
//Output: 
//C
//C B 
//C B A

def alphaTriangle(n: int):
    if n>=1 and n<=25:
        for i in range(n):
            new=n-1
            for j in range(0,i+1):
                char=65+n-1
                char-=j
                print(chr(char),end=" ")
            print()

