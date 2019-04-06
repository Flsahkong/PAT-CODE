## string转化为int的方法

#### [参考的链接](https://www.geeksforgeeks.org/converting-strings-numbers-cc/)

- #### 比较方便的方法

  使用**stoi**或者**atoi**函数直接转化。

  **stoi**函数其实是一个系列，包含在iostream文件里面，以一个string或者字符数组，字符串指针作为输入都可（经过测试没有问题），除了**stoi**之外还有**stod**，**stof**，**stolf**等等方法，分别对应了不同的转化，转化为int，double，float等。  

  ```c++
  #include <iostream>
  #include <string>
  using namespace std;
  
  int main()
  {
      char  str1[3] = "45";
      char* str2 = "3.14159";
      string str3 = "31337";
  
  
      int myint1 = stoi(str1);
      int myint2 = stoi(str2);
      int myint3 = stoi(str3);
  
      cout << "stoi(\"" << str1 << "\") is "
           << myint1 << '\n';
      cout << "stoi(\"" << str2 << "\") is "
           << myint2 << '\n';
      cout << "stoi(\"" << str3 << "\") is "
           << myint3 << '\n';
  
      return 0;
  }
  ```

  输出结果：

  ```
  stoi("45") is 45
  stoi("3.14159") is 3
  stoi("31337") is 31337
  ```

  **atoi**是包含在stdlib.h头文件里面，这个函数需要接受一个**字符串的指针**作为输入。但是这个系列没有**atod**这个函数，因为**atof**这个函数返回的结果就是double类型。

  ```
  #include <iostream> 
  #include <cstdlib> 
  using namespace std; 
     
  int main() 
  { 
      const char *str1 = "42"; 
      const char *str2 = "3.14159"; 
      const char *str3 = "31337 geek"; 
       
      int num1 = atoi(str1); 
      int num2 = atoi(str2); 
      int num3 = atoi(str3); 
      
      cout << "atoi(\"" << str1  
                << "\") is " << num1 << '\n'; 
      cout << "atoi(\"" << str2  
                << "\") is " << num2 << '\n'; 
      cout << "atoi(\"" << str3  
                << "\") is " << num3 << '\n'; 
       
     return 0; 
  } 
  ```

- #### 稍微麻烦一点的方法

  使用**stringstream**类来实现：

  ```C++
  #include <iostream> 
  #include <sstream> 
  using namespace std; 
    
  int main() 
  { 
      string s = "12345"; 
    
      // object from the class stringstream 
      stringstream geek(s); 
    
      // The object has the value 12345 and stream 
      // it to the integer x 
      int x = 0; 
      geek >> x; 
    
      // Now the variable x holds the value 12345 
      cout << "Value of x : " << x; 
    
      return 0; 
  }
  ```

  上面的在声明geek的时候也可以不通过s来进行，下面的代码有相同的效果：

  ```C++
  stringstream geek;
  geek<<s;
  ```

  另外可以使用sscanf来处理转化：

  ```
  
  #include<stdio.h> 
  int main() 
  { 
      const char *str = "12345"; 
      int x; 
      sscanf(str, "%d", &x); 
      printf("\nThe value of x : %d", x); 
      return 0; 
  }
  ```

  **sscanf**是一个很深奥的东西，可以用来进行简单的字符串的匹配。这个匹配 稍微比正则表达式简单一些，但是够用了，需要好好学习一下：

  [**学习链接**](https://www.cnblogs.com/lyq105/archive/2009/11/28/1612677.html)
