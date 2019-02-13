#!/bin/bash

Cassandra_Server_IP='192.168.122.161'
cqlsh --file ../src/hss_rel14/db/oai_db.cql $Cassandra_Server_IP
./data_provisioning_users --apn default --apn2 internet --key fec86ba6eb707ed08905757b1bb44b8f --imsi-first 001011234561000 --msisdn-first 001011234561000 --mme-identity mme.ng4T.com --no-of-users 20 --realm ng4T.com --truncate True  --verbose True --cassandra-cluster $Cassandra_Server_IP

./data_provisioning_mme --id 3 --mme-identity mme.ng4T.com --realm ng4T.com --ue-reachability 1 --truncate True  --verbose True --cassandra-cluster $Cassandra_Server_IP

# output may look like
#  vhss.mmeidentity truncated
#  vhss.mmeidentity_host truncated
#  3 mme-isdn mme.ng4T.com ng4T.com 1
#  3 mme-isdn mme.ng4T.com ng4T.com 1
