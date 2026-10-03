// [utility.swap]

    template<class T> void swap(T& a, T& b) noexcept;
        is_nothrow_move_constructible<T>::value &&
        is_nothrow_moveassignable<T>::value

    template<class T, size-t N>
    void swap(T (&ka)[N], T(&b)[N]) noexcept(noexcept(swap(*a, *b)));
        swap_ranges(a, a + N, b)

    // !  ctrl+shift+P (Insp)ect Editor Tokens and Scopes