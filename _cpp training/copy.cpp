// copy
    template<class InputIt, class OutputIt>
    OutputIt copy(  InputIt first, InputIt last,
                    OutputItet d_first    )   
    {
        for(; first  != last; (void)++first, (void) ++d_first)
    }


