

int main ()

{
    int Demo_Array [10];

    int ArraySize = sizeof(Demo_Array)/Demo_Array[0];

    
    //Linear Search
    int LookupElement = 3;
    for (int i = 0 ; i <ArraySize; i++ )
    {
        if(i == LookupElement)
        {
            return i;
        }
        else
        {
            return -1;
        }
            
    }

    //


}