void test() {
    
    // base vectors
    std::vector<int> test_vect1 = {1, 2, 3};
    sed::vector<int> test_production_item = {1, 2 };
    sed::vector<std::vector<int>> test_production;
    test_production.push_back(test_production_item);
    test_production.push_back(test_production_item);
    test_production.push_back(test_production_item);
    
    //pointers
    std::vector<int> *pointer_to_test_vect1;
    int *pointer_to_int_in_test_vect1;
    std::vector<std::vector<int>> *pointer_to_test_production;
    
    // looping
    size_t v1;
    size_t v1_size = 10;
    size_t v2;
    size_t v2_size;
    size_t v3;
    size_t v3_size;
    
    pointer_to_test_vect1 = &test_vect1;
    v1_size = pointer_to_test_vect1->size();
    
    std::cout << 
    }
    
    // ...