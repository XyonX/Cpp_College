


int Linear_Search ()
{
    int Demo_Array [10];

    int ArraySize = sizeof(Demo_Array)/Demo_Array[0];

    
    //Linear Search
    int key = 3;
    for (int i = 0 ; i <ArraySize; i++ )
    {
        if(i == key)
        {
            return i;
        }
            
    }
    return -1;
    //best - O(1) , Worst - O (n)
    
}

int Binary_Search ()
{
    int key ;
    int l,h,mid;

    while (l<=h)
    {
        mid = l+h/2;

        if(key==mid)
        {
            return mid;
        }
        else if ( key < mid)
        {
            h = mid-1;
        }
        else
        {
            l = mid+1;
        }
        
    }
    
}

int main ()

{


    //Binary Search


}