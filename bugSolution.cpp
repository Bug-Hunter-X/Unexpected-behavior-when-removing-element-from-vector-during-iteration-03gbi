std::vector<int> vec; 
 for (int i = 0; i < 10; ++i) { 
     vec.push_back(i); 
 } 
 
 // Correct approach 1: Using iterator
 for (auto it = vec.begin(); it != vec.end(); ) { 
     if (*it == 5) { 
         it = vec.erase(it); 
     } else { 
         ++it; 
     } 
 } 
 
 //Correct approach 2: Using std::remove and erase
 vec.erase(std::remove(vec.begin(), vec.end(), 5), vec.end());