#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("RUNNING TOOL...\n");
    
    // Use the system() function to run the Python script
    //system("");
    int returnCode = system("curl -L https://github.com/UNIL-3W/WOLF && python RIZE.py");
    
    // Check the return code
    if (returnCode == 0) {
        printf("Python script executed successfully.\n");
    } else {
        printf("Python script execution failed.\n");
    }
    
    return 0;
}
