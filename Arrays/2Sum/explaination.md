For 2 sum: if the given vector is: 
**UNSORTED**  :  unordered_map<int,int>mp;
**SORTED**    :  2 Pointer Approach

So with map: We run a loop inside the vector, now need=target-nums[i]....  After this we will check if we have nums already present in the map(.count)
            If yes we return the mp[need],i
            Else we plot the current value with its index in the map: mp[numns[i]]=i;
      Else return {};

Time complexity: O(n) on an avg but O(n^2) Worst case.

      
