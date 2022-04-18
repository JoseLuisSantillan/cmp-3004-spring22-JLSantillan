double absoluteValue(int *a, int *b){
    int x = *a;
    int y = *b;
    int result = x-y;
    if(result<0){
    	return result * -1;
    }
    return result;
}


