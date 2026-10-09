// File: /courses/_cpp training/1project/src/copy.cpp

template<class InputIt, class OutputIt>
OutputIt copy(InputIt first, InputIt last, OutputIt d_first)   
{
    for(; first != last; (void)++first, (void) ++d_first)
    {
        *d_first = *first;
    }
    return d_first;
}