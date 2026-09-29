template<class T> void swap(T& a, T& b) noexcept;
    is_nothrow_move_constructible<T>::value &&
    is_nothrow_moveassignable<T>::value