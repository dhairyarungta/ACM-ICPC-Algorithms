//Optimised version of basic for less modulo and division operations

int l,r;
//get l,r from user input

int c_l = l/len, c_r = r/len;
int sum =0;

if(c_l == c_r){
    for (int i =l;i<=r;i++)
        sum +=a[i];
}
else {
    for (int i =l;i<((c_l+1)*len)-1;i++){
        sum+=a[i];
    }
    for (int i = c_l+1;i<=c_r-1;i++){
        sum+=b[i];
    }
    for (int i = c_r*len;i<=r;i++){
        sum+=a[i];
    }
}

