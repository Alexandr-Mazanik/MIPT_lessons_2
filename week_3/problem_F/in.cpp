int* my_slightly_dumb_reallocation(int* source, unsigned int n_old, unsigned int n_new)
{
    if (n_new == 0)
        return NULL;
    else
    {
        int* b = new int [n_new];
        for (int j=0; j < n_new && j < n_old && source != NULL; j++)
        {
            b[j] = source[j];
        }

        delete [] source;

        return b;   
    }
}
