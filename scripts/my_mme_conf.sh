#!/bin/bash

MME_CONF[@MME_S6A_IP_ADDR@]="172.16.110.111"
MME_CONF[@INSTANCE@]=$INSTANCE
MME_CONF[@PREFIX@]=$PREFIX
MME_CONF[@REALM@]='ng4T.com'
MME_CONF[@PID_DIRECTORY@]='/var/run'
MME_CONF[@MME_FQDN@]="mme.${MME_CONF[@REALM@]}"
MME_CONF[@HSS_HOSTNAME@]='hss'
MME_CONF[@HSS_FQDN@]="${MME_CONF[@HSS_HOSTNAME@]}.${MME_CONF[@REALM@]}"
MME_CONF[@HSS_IP_ADDR@]='172.16.110.113'
MME_CONF[@MCC@]='262'
MME_CONF[@MNC@]='79'
MME_CONF[@MME_GID@]='32768'
MME_CONF[@MME_CODE@]='3'
MME_CONF[@TAC_0@]='600'
MME_CONF[@TAC_1@]='601'
MME_CONF[@TAC_2@]='602'
MME_CONF[@MME_INTERFACE_NAME_FOR_S1_MME@]='ens6:11'
MME_CONF[@MME_IPV4_ADDRESS_FOR_S1_MME@]='192.168.247.111/24'
MME_CONF[@MME_INTERFACE_NAME_FOR_S11@]='ens4:11'
MME_CONF[@MME_IPV4_ADDRESS_FOR_S11@]='172.16.1.111/24'
MME_CONF[@MME_INTERFACE_NAME_FOR_S10@]='ens5:11'
MME_CONF[@MME_IPV4_ADDRESS_FOR_S10@]='192.168.10.111/24'
MME_CONF[@OUTPUT@]='CONSOLE'
MME_CONF[@SGW_IPV4_ADDRESS_FOR_S11_TEST_0@]='172.16.1.114/24'
MME_CONF[@SGW_IPV4_ADDRESS_FOR_S11_0@]='172.16.1.114/24'
MME_CONF[@PEER_MME_IPV4_ADDRESS_FOR_S10_0@]='0.0.0.0/24'
MME_CONF[@PEER_MME_IPV4_ADDRESS_FOR_S10_1@]='0.0.0.0/24'

#implicit MCC MNC 001 01
TAC_SGW_TEST='7'
tmph=`echo "$TAC_SGW_TEST / 256" | bc`
tmpl=`echo "$TAC_SGW_TEST % 256" | bc`
MME_CONF[@TAC-LB_SGW_TEST_0@]=`printf "%02x\n" $tmpl`
MME_CONF[@TAC-HB_SGW_TEST_0@]=`printf "%02x\n" $tmph`

MME_CONF[@MCC_SGW_0@]=${MME_CONF[@MCC@]}
MME_CONF[@MNC3_SGW_0@]=`printf "%03d\n" $(echo ${MME_CONF[@MNC@]} | sed 's/^0*//')`
TAC_SGW_0='600'
tmph=`echo "$TAC_SGW_0 / 256" | bc`
tmpl=`echo "$TAC_SGW_0 % 256" | bc`
MME_CONF[@TAC-LB_SGW_0@]=`printf "%02x\n" $tmpl`
MME_CONF[@TAC-HB_SGW_0@]=`printf "%02x\n" $tmph`

MME_CONF[@MCC_MME_0@]=${MME_CONF[@MCC@]}
MME_CONF[@MNC3_MME_0@]=`printf "%03d\n" $(echo ${MME_CONF[@MNC@]} | sed 's/^0*//')`
TAC_MME_0='601'
tmph=`echo "$TAC_MME_0 / 256" | bc`
tmpl=`echo "$TAC_MME_0 % 256" | bc`
MME_CONF[@TAC-LB_MME_0@]=`printf "%02x\n" $tmpl`
MME_CONF[@TAC-HB_MME_0@]=`printf "%02x\n" $tmph`

MME_CONF[@MCC_MME_1@]=${MME_CONF[@MCC@]}
MME_CONF[@MNC3_MME_1@]=`printf "%03d\n" $(echo ${MME_CONF[@MNC@]} | sed 's/^0*//')`
TAC_MME_1='602'
tmph=`echo "$TAC_MME_1 / 256" | bc`
tmpl=`echo "$TAC_MME_1 % 256" | bc`
MME_CONF[@TAC-LB_MME_1@]=`printf "%02x\n" $tmpl`
MME_CONF[@TAC-HB_MME_1@]=`printf "%02x\n" $tmph`


for K in "${!MME_CONF[@]}"; do
  egrep -lRZ "$K" $PREFIX | xargs -0 -l sed -i -e "s|$K|${MME_CONF[$K]}|g"
  ret=$?;[[ ret -ne 0 ]] && echo "Tried to replace $K with ${MME_CONF[$K]}"
done


# freeDiameter certificate
sudo ./check_mme_s6a_certificate $PREFIX/freeDiameter mme.${MME_CONF[@REALM@]}

