// src/swap.cpp

#include <utility>
#include <type_traits>

template<class T>
void swap(T& a, T& b) noexcept(
    std::is_nothrow_move_constructible<T>::value &&
    std::is_nothrow_move_assignable<T>::value)
{
    T temp = std::move(a);
    a = std::move(b);
    b = std::move(temp);
}

template<class T, std::size_t N>
void swap(T (&a)[N], T (&b)[N]) noexcept(noexcept(swap(a[0], b[0])))
{
    for (std::size_t i = 0; i < N; ++i) {
        swap(a[i], b[i]);
    }
}