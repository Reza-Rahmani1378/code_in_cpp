1)
```
c, e, f, h, i, j
```
2) 
```  
b. strcpy(*s1,s2);
c. *s1 = new char[strlen(s2)];
   strcpy(*s1,s2);
   ```
   
3) 
```
a. 1
b. 1
c. 1,2
```

4) 
a.
```cpp
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int intArray[] = {1, 2, 3}, *p = intArray;
  int arraySize = sizeof(intArray) / sizeof(intArray[0]);
  int counter = 0;
  int sum = 0;
  while (counter < arraySize) {
    sum += *p++;
    counter++;
  }
  //  for (int i = 0; i < arraySize; i++) {
  //    sum += *p++;
  //  }
  std::cout << "sum: " << sum << std::endl;
  return 0;
}
``` 
b.
```cpp
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int intArray[] = {1, 2, 3, 5, 7, 9, 10, 12}, *p = intArray, *q = intArray;
  int arraySize = sizeof(intArray) / sizeof(intArray[0]);

  for (int i = 0; i < arraySize; i++) {
    std::cout << *p++ << std::endl;
  }
  std::cout << "------------------------------------------------" << std::endl;

  p = intArray;
  for (int i = 0; i < arraySize; i++) {
    if (*p % 2 != 0) {
      *p = -1;
    } else {
      *q++ = *p;
    }
    *p++;
  }
  while (q != p) {
    *q++ = 0;
  }

  p = intArray;
  for (int i = 0; i < arraySize; i++) {
    std::cout << *p++ << std::endl;
    return 0;
  }
}
```

5)
a.
```cpp
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

  char s[100] = "mohammad reza", *p = s;
  int count = 0;
  int arraySize = sizeof(s) / sizeof(*p);

  for (int i = 0; i < arraySize; i++) {
    if (*p++ != '\0')
      count++;
    else
      break;
  }

  std::cout << count << std::endl;

  return 0;
}
```
b.
```cpp
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

  char s2[20] = "cd", *q = s2;
  char s1[20] = "ab", *p = s1;
  int s1Size = sizeof(s1) / sizeof(*p);
  int s2Size = sizeof(s2) / sizeof(*q);
  int counter = (s1Size < s2Size) ? s1Size : s2Size;
  int result = 0;

  for (int i = 0; i < counter; i++) {
    if (*p < *q) {
      result = -1;
      break;
    } else if (*p++ > *q++) {
      result = 1;
      break;
    }
    *p++;
    *q++;
  }

  std::cout << result << std::endl;

  return 0;
}
```
c.
```cpp
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

  char s2[20] = "cd", *q = s2;
  char s1[20] = "ab", *p = s1;
  int s1Size = sizeof(s1) / sizeof(*p);
  int s2Size = sizeof(s2) / sizeof(*q);
  char cat[s1Size + s2Size], *z = cat;

  for (int i = 0; i < s1Size; i++) {
    if (*p != '\0')
      *z++ = *p++;
    else
      break;
  }

  for (int i = 0; i < s2Size; i++) {
    if (*q != '\0')
      *z++ = *q++;
    else
      break;
  }

  z = cat;
  for (int i = 0; i < 40; i++)
    std::cout << *z++;

  return 0;
}
```
d.
```cpp
#include <iostream>
using namespace std;
char *_strchr(char *str, char character) {
  char *p = NULL;
  while (*str++ != '\0') {
    if (*str == character)
      p = str;
  }
  return p;
};

int main(int argc, char *argv[]) {

  char *str = (char *)"mohammad reza";
  char *p = _strchr(str, 'r');

  std::cout << *p << std::endl;

  return 0;
}
```

6) ```if (p==q)```  compares the address that stored in p and q but ````if (*p==*q)```` compares the value stored in those addresses.

7)

8) 
```public``` visible to everyone  
```protected``` visible to subclass  
```private``` visible just for class itself

9) Constractors and distructors do not have any type.

10)
	
