#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct EmployeeData {
    int empId;
    int ssn;
    char firstName[50];
    char lastName[50];
    char title[50];
};

struct Employees {
    struct EmployeeData employeeOne;
    struct EmployeeData employeeTwo;
} employees;

void


int main(void) {
    struct Employees employees;

    // Employee one data.
    printf("[*] Please input the following data for the employee:\n");
    printf("\t-> What is the employee's first name? ");
    scanf("%s", employees.employeeOne.firstName);
//    printf("[DEBUG] -> employee.firstName is: %s", employees.employeeOne.firstName);
    printf("\t-> What is the employee's last name? ");
    scanf("%s", employees.employeeOne.lastName);
    printf("\t-> What is the employee's SSN (last 4)? ");
    scanf("%d", &employees.employeeOne.ssn);
    printf("\t-> What is the employee's employee number? ");
    scanf("%d", &employees.employeeOne.empId);
    printf("\t-> What is the employee's title? ");
    scanf("%s", employees.employeeOne.title);

    printf("[*] Please input the following data for the employee:\n");
    printf("\t-> What is the employee's first name? ");
    scanf("%s", employees.employeeTwo.firstName);
//    printf("[DEBUG] -> employee.firstName is: %s", employees.employeeOne.firstName);
    printf("\t-> What is the employee's last name? ");
    scanf("%s", employees.employeeTwo.lastName);
    printf("\t-> What is the employee's SSN (last 4)? ");
    scanf("%d", &employees.employeeTwo.ssn);
    printf("\t-> What is the employee's employee number? ");
    scanf("%d", &employees.employeeTwo.empId);
    printf("\t-> What is the employee's title? ");
    scanf("%s", employees.employeeTwo.title);

    printf("\n[-] EMPLOYEE DATA FOR %s %s:\n", employees.employeeOne.firstName, employees.employeeOne.lastName);
    printf("\t* Title: %s\n", employees.employeeOne.title);
    printf("\t* Employee ID: %d\n", employees.employeeOne.empId);
    printf("\t* Employee SSN: %d\n", employees.employeeOne.ssn);

    printf("\n[-] EMPLOYEE DATA FOR %s %s:\n", employees.employeeTwo.firstName, employees.employeeTwo.lastName);
    printf("\t* Title: %s\n", employees.employeeTwo.title);
    printf("\t* Employee ID: %d\n", employees.employeeTwo.empId);
    printf("\t* Employee SSN: %d\n", employees.employeeTwo.ssn);
}