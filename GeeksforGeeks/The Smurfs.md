# Medium

A geek once visited a magical island where he found a special creature. He named it as Smurf. He noticed a very strange thing there. The smurfs resembled the primary colors of light. To make it more clear, the primary colors of light are Red(R), Green(G), and Blue(B). He talked to one of the smurfs. The smurfs came to know that he is a good programmer. The smurfs suggested a deal that they will ask him one question and if he is able to answer that question, they will allow the geek to take anything from the island.

The question is as follows:

The smurfs possess a very magical property. When two smurfs of different colors meet with other, they gets converted into a smurf of the third color. How many minimum number of smurfs will be remaining after this transformation? The question looked simple to geek. However, the smurfs put another constraint to make the geek think more. The two smurfs must be adjacent to each other to make the transformation take place. There are $n$ smurfs the colors of which are given in an array $a$.

```cpp
class Solution{
public:
    int findMin(int n, char a[]){
        map<char, int> hit;
        
        for (int i = 0; i < n; ++i)
            ++ hit[a[i]];
            
        if (hit.size() == 1)
            return n;
            
        int odd = 0;
        int even = 0;
        
        for (auto& h : hit)
            if ((h.second & 1) == 0)
                ++ even;
            
        return (even==1 || even==2) ? 1 : 2;
    }
};
```
