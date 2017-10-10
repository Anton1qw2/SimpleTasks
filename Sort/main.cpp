#include <QCoreApplication>
#include <iostream>


template <typename T>
void print (T &a){
    for (typename T::size_type i = 0; i < a.size(); i++){
        std::cout << a[i] <<" ";
    }
    std::cout << std::endl;
}

template <typename T>
void sort(T &a){
    for (int i = 0; i<a.size()-1; i++){
        for (int j=i; j+1>0; j--){
            if (a[i]< a[j]){
                std::swap(a[i], a[j]);
            }
        }
    }
    return;
}

template <typename T>
void qsort(T &a, int start, int end){
    int cur = start;
    if (start>= end){
        return;
    }
    for (int i =start; i <end; i++){
        if (a[i]< a[end]){
            std::swap(a[i],a[cur]);
            cur++;
            std::cout << cur << std::endl;
        }
    }
    std::swap(a[cur], a[end]);
    qsort(a, start, cur-1);
    qsort(a, cur+1, end);
    return;
}

int main(int argc, char *argv[])
{
   std::vector <int> z = {2,3,5,6,7,4,34,44};
   print (z);
   std::cout << z.size() << std::endl;
   qsort(z, 0, z.size()-1);
   print(z);
    return 0;
}
