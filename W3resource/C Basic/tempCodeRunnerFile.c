
    printf("Input number of lines: ");
    if(getting_input() == false){
        format_error();
        return 1;
    }else if(bigger_than_one() == false){
        printf("I can not print anything. Enter different value!");
        return 2;
    }else{
        three_in_a_row_printer();
    }
}