from sys import setrecursionlimit
setrecursionlimit(10 ** 9)

import collections
class graph:
    def goodnodes(self,roads,good,n):
        king=collections.defaultdict(list)
        for u,v in roads:
            if good[u-1]==1 and good[v-1]==1:
                king[u].append(v)
                king[v].append(u)
        def dfs(node,visited,te):
            if visited[node]==0:
                visited[node]=1
                te.append(node)
                if node in king:
                    for nei in king[node]:
                        if visited[nei]==0:
                            dfs(nei,visited,te)
            return te
        visited=[0]*(n+1)
        fina=[]
        for j in range(n):
            if  good[j]==1 and visited[j+1]!=1:
                te=[]
                fina.append(dfs(j+1,visited,te))
        return fina
                
t=int(input())
for i in range(t):
    n,m=map(int,input().split())
    a=[int(v) for v in input().split()]
    b=[int(v) for v in input().split()]
    roads=[]
    for j in range(m):
        tem=[int(v) for v in input().split()]
        roads.append(tem)
    c=[]
    ma=0
    for j in range(n):
        c.append(a[j]/b[j])
        ma=max(a[j]/b[j],ma)
    good=[0]*(n)
    for j in range(n):
        if c[j]==ma:
            good[j]=1
            x=j+1
    g=graph()
    fin=[]
    final=g.goodnodes(roads,good,n)
    maxi=1
    if final==[]:
        print(1)
        print(x)
    else:
        maxi=0
        for v in final:
            if len(v)>maxi:
                fin=v[:]
                maxi=len(v)
        print(maxi)
        print(' '.join(map(str,fin)))
       
                
    
    
