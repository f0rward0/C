#include <stdio.h>
#include <stdlib.h>

int main() {
  /*
   * To change this license header, choose License Headers in Project
   * Properties. To change this template file, choose Tools | Templates and open
   * the template in the editor.
   */

  /*
   * File:   PrintCompanyInformation.c
   * Author: Velkata
   *
   * Created on 21 �������� 2015, 14:15
   */

#include <stdio.h>
#include <stdlib.h>

  /*
   *
   */
  int main(int argc, char **argv) {
    char companyName[1024], CompanyAddress[1024], CompanyNumber[1024],
        CFaxNumber[1024], CwebSite[1024];

    char MFname[1024], MLname[1024], Mage[1024], Mphone[1024];
    printf("\nCompany name: ");
    scanf_s("%s", companyName, sizeof(companyName));
    printf("\nCompany address: ");
    scanf_s("%s", CompanyAddress, sizeof(CompanyAddress));
    printf("\nPhone number: ");
    scanf_s("%s", CompanyNumber, sizeof(CompanyNumber));
    printf("\nFax number: ");
    scanf_s("%s", CFaxNumber, sizeof(CFaxNumber));
    printf("\nWeb site: ");
    scanf_s("%s", CwebSite, sizeof(CwebSite));
    printf("\nManager first name: ");
    scanf_s("%s", MFname, sizeof(MFname));
    printf("\nManager last name: ");
    scanf_s("%s", MLname, sizeof(MLname));
    printf("\nManager age: ");
    scanf_s("%s", Mage, sizeof(Mage));
    printf("\nManager phone: ");
    scanf_s("%s", Mphone, sizeof(Mphone));

    printf("%s\nAddress: %s\nTel: %s\nFax: %s\n", companyName, CompanyAddress,
           CompanyNumber, CFaxNumber);

    printf("Manager: %s %s (age %s,tel: %s)", MFname, MLname, Mage, Mphone);

    return (EXIT_SUCCESS);
  }
