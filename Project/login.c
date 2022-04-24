#include<stdio.h>
#include<string.h>

int main()
{
    char uName[25],siginUpPasword[20],signUpConfirmPassword[20],email[30],loginEmail[30],loginPassword[20];
    int choice,checkEmail,CheckPassword;

// sigin up complete then level called
login:
    printf("******************************\n****** welcome to programming*********\n*************************\n");
    printf("1.Login.\n2.Sign Up\n");
    scanf("%d",&choice);


    // login part
    if(choice==1)
    {
// if user press 1 then comming here
        printf("******** Login *********\n");
againLogin:
        printf("enter your email\n");
        scanf("%s",&loginEmail);

// user take incorrect password so level called try again.

        printf("enter your password\n");
        scanf("%s",&loginPassword);

        checkEmail = strcmp(loginEmail,email);
        CheckPassword= strcmp(loginPassword,siginUpPasword);

        if(checkEmail==0)
        {
            if(CheckPassword==0)
            {
                printf("******** welcome login successful**********\n");
                printf("your user name is: %s\n",uName);
                printf("your email is: %s\n",email);
                printf("your password is: %s\n",siginUpPasword);
                printf("your confrim password is: %s\n",signUpConfirmPassword);
            }
            else
            {
                printf("incorrect email or password\n");
                goto againLogin;
            }

        }
        else
        {
            printf("incorrect email or password\n");
            goto againLogin;
        }


    }




// sign up part.
    else if(choice==2)
    {
        // if user choic 2 so coming here.
        printf("******** Sign Up *********\n");

        printf("enter user Name\n");
        scanf("%s",&uName);

        printf("enter your email\n");
        scanf("%s",&email);

again:

        printf("enter your password\n");
        scanf("%s",&siginUpPasword);

        printf("enter your confirm password\n");
        scanf("%s",&signUpConfirmPassword);

// if password and confrim password same then goto login level
        int cpcheck = strcmp(siginUpPasword,signUpConfirmPassword);

        if(cpcheck==0)
        {
            goto login;
        }

        // if not match then again take input password and confirm password( goto to again level)
        else
        {
            printf("can't match password. try again\n");
            goto again;
        }


    }
    // if user choic wrong option then show this message
    else
        printf("invalid option\n");

}