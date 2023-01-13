void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);

int main(int argc , char * argv[])
{
	if (argc < 1) return 0;
	for (int r = 1; r < argc - 1; r++)
		for (int c = 1; c < argc - r; c++)
		    if (mx_strcmp(argv[c], argv[c + 1]) > 0)
		    {
		    	char * temp = argv[c];
		    	argv[c] = argv[c+1];
		    	argv[c+1] = temp;
		    }  
	for (int i = 1; i < argc; i++){
		mx_printstr(argv[i]);
		mx_printstr("\n");
	}
	return 0;
}

