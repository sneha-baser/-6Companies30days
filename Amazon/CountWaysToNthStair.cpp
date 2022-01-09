long long countWays(int m)
    {
        // your code here
        int ways[m+1],i;
    ways[0]=1;
    ways[1]=1;
    for(i=2;i<=m;i++)
        ways[i]=1+ways[i-2];
    return ways[m];
    }
