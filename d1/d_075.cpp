#include <iostream>

template<typename T>
void swap(T& a, T& b) {
  T temp = a;
  a = b;
  b = temp;
}
template<typename T>
void sort(T* arr, unsigned count, bool bigger = true) {
  for (unsigned i = 0; i < count - 1; ++i) {
    for (unsigned j = 0; j < count - i - 1; ++j) {
      bool bcase = bigger ? arr[j] < arr[j + 1] : arr[j] > arr[j + 1];
      if (bcase) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

int main() {
  /*int a[]{2, 4, 9, 8, 25, 30};
  sort(a, 6, false);
  for (auto &item : a) {
    std::cout << item << std::endl;
  }*/
  /* short b[]{2, 4, 9, 8, 25, 30};
   sort(b, 6, false);
   for (const auto &item : b) {
     std::cout << item << std::endl;
   }*/

  std::string c[]{"12", "ab", "dada", "65465", "qwd"};
  sort(c, 5);
  for (const auto& item : c)std::cout << item << std::endl;

  /*char a[][10] = {"12", "ab", "dada", "65465", "qwd"};
  sort(a, 5);
  for (auto& item : a)std::cout << item << std::endl;*/

}
