# Medium

In a given cartesian plane, there are **N** points. We need to find the Number of Pairs of  points **(A, B)** such that

- Point **A** and Point **B** do not coincide.
- **Manhattan Distance** and the **Euclidean Distance** between the points should be equal.

```cpp
class Solution {
  public:
    int numOfPairs(int X[], int Y[], int N) {
        map<pair<int, int>, int> ss;
        map<int, int> xx, yy;
        int cx = 0;
        int cy = 0;
        int cxy = 0;
            
        for (int i = 0; i < N; ++i)
        {
            if (xx[X[i]])
                cx += xx[X[i]];
                
            if (yy[Y[i]])
                cy += yy[Y[i]];
                
            if (ss[{X[i], Y[i]}])
                cxy += ss[{X[i], Y[i]}];
                
            ++ xx[X[i]];
            ++ yy[Y[i]];
            ++ ss[{X[i], Y[i]}];
        }
        
        return cx + cy - 2 * cxy;
    }
};
```
