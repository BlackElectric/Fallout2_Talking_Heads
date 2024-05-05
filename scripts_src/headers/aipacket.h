/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef AIPACKET_H
#define AIPACKET_H

/*********************************************************
 define file for AI Packets.

 All defines in this file are to be prepended with AI_

 Contents of the File:
        I.      Team Numbers
*********************************************************/

#define AI_PLAYER                               (0)
#define AI_ARROYO_WARRIOR                       (1)
#define AI_ARROYO_VILLAGER                      (2)
#define AI_ARROYO_ELDER                         (3)
#define AI_ARROYO_SHAMAN                        (4)
#define AI_SPORE_PLANT                          (5)
#define AI_GENERIC_BRAHMIN                      (6)
#define AI_GENERIC_RAT                          (7)
#define AI_GENERIC_SCORPION                     (8)
#define AI_GENERIC_MANTIS                       (9)
#define AI_GENERIC_DEATH_CLAW                   (10)
#define AI_ADDICT                               (11)
#define AI_GENERIC_GUARDS                       (12)
#define AI_THUG                                 (13)
#define AI_PEASANT                              (14)
#define AI_CHILD                                (15)
#define AI_SLAVER                               (16)
#define AI_STORE_OWNER                          (17)
#define AI_VAULT_GUARD                          (18)
#define AI_DOCTOR                               (19)
#define AI_SLAG                                 (20)
#define AI_GENERIC_DOG                          (21)
#define AI_TOUGH_GUARD                          (22)
#define AI_KAMAKAZI                             (23)
#define AI_TOUGH_CITIZEN                        (24)
#define AI_WIMPY_PEASANT                        (25)
#define AI_GECKO                                (26)
#define AI_FIGHTING_MANTIS                      (27)
#define AI_BRAIN_MOLE_RAT                       (28)
#define AI_VAULT_DEATHCLAW                      (29)
#define AI_REPAIR_BOT                           (30)
#define AI_SECURITY_BOT                         (31)
#define AI_TOUGH_BOT                            (32)
#define AI_COWARD                               (33)
#define AI_TORR                                 (34)
#define AI_GHOUL_PEASANT                        (35)
#define AI_GHOUL_GUARD                          (36)
#define AI_GHOUL_MERCHANT                       (37)
#define AI_BERSERKER                            (38)
#define AI_WIMPY_GECKO                          (39)
#define AI_BOXER                                (40)
#define AI_PATRON                               (41)
#define AI_DRUG_DEALER                          (42)
#define AI_BOXING_FAN                           (43)
#define AI_PIMP                                 (44)
#define AI_PROSTITUTE                           (45)
#define AI_SLAVE                                (46)
#define AI_SUPER_MUTANT                         (47)
#define AI_MUTATED_RAT                          (48)
#define AI_LONER_CITIZEN                        (49)
#define AI_CYBERDOG                             (50)
#define AI_REACTOR_GHOUL                        (51)
#define AI_REDDING_ADDICT                       (52)
#define AI_PARTY_VIC_BERSERK                    (53)
#define AI_PARTY_VIC_AGGRESSIVE                 (54)
#define AI_PARTY_VIC_DEFENSIVE                  (55)
#define AI_PARTY_VIC_COWARD                     (56)
#define AI_PARTY_VIC_CUSTOM                     (57)
#define AI_PARTY_MYRON_BERSERK                  (58)
#define AI_PARTY_MYRON_AGGRESSIVE               (59)
#define AI_PARTY_MYRON_DEFENSIVE                (60)
#define AI_PARTY_MYRON_COWARD                   (61)
#define AI_PARTY_MYRON_CUSTOM                   (62)
#define AI_PARTY_MARCUS_BERSERK                 (63)
#define AI_PARTY_MARCUS_AGGRESSIVE              (64)
#define AI_PARTY_MARCUS_DEFENSIVE               (65)
#define AI_PARTY_MARCUS_COWARD                  (66)
#define AI_PARTY_MARCUS_CUSTOM                  (67)
#define AI_PARTY_MACRAE_BERSERK                 (68)
#define AI_PARTY_MACRAE_AGGRESSIVE              (69)
#define AI_PARTY_MACRAE_DEFENSIVE               (70)
#define AI_PARTY_MACRAE_COWARD                  (71)
#define AI_PARTY_MACRAE_CUSTOM                  (72)
#define AI_PARTY_SULIK_BERSERK                  (73)
#define AI_PARTY_SULIK_AGGRESSIVE               (74)
#define AI_PARTY_SULIK_DEFENSIVE                (75)
#define AI_PARTY_SULIK_COWARD                   (76)
#define AI_PARTY_SULIK_CUSTOM                   (77)
#define AI_PARTY_LENNY_BERSERK                  (78)
#define AI_PARTY_LENNY_AGGRESSIVE               (79)
#define AI_PARTY_LENNY_DEFENSIVE                (80)
#define AI_PARTY_LENNY_COWARD                   (81)
#define AI_PARTY_LENNY_CUSTOM                   (82)
#define AI_PARTY_CYBERDOG_BERSERK               (83)
#define AI_PARTY_CYBERDOG_AGGRESSIVE            (84)
#define AI_PARTY_CYBERDOG_DEFENSIVE             (85)
#define AI_PARTY_CYBERDOG_COWARD                (86)
#define AI_PARTY_CYBERDOG_CUSTOM                (87)
#define AI_PARTY_DOC_BERSERK                    (88)
#define AI_PARTY_DOC_AGGRESSIVE                 (89)
#define AI_PARTY_DOC_DEFENSIVE                  (90)
#define AI_PARTY_DOC_COWARD                     (91)
#define AI_PARTY_DOC_CUSTOM                     (92)
#define AI_PARTY_GORIS_BERSERK                  (93)
#define AI_PARTY_GORIS_AGGRESSIVE               (94)
#define AI_PARTY_GORIS_DEFENSIVE                (95)
#define AI_PARTY_GORIS_COWARD                   (96)
#define AI_PARTY_GORIS_CUSTOM                   (97)
#define AI_PARTY_DAVIN_BERSERK                  (98)
#define AI_PARTY_DAVIN_AGGRESSIVE               (99)
#define AI_PARTY_DAVIN_DEFENSIVE                (100)
#define AI_PARTY_DAVIN_COWARD                   (101)
#define AI_PARTY_DAVIN_CUSTOM                   (102)
#define AI_PARTY_MARIA_BERSERK                  (103)
#define AI_PARTY_MARIA_AGGRESSIVE               (104)
#define AI_PARTY_MARIA_DEFENSIVE                (105)
#define AI_PARTY_MARIA_COWARD                   (106)
#define AI_PARTY_MARIA_CUSTOM                   (107)
#define AI_PARTY_LADDIE_BERSERK                 (108)
#define AI_PARTY_LADDIE_AGGRESSIVE              (109)
#define AI_PARTY_LADDIE_DEFENSIVE               (110)
#define AI_PARTY_LADDIE_COWARD                  (111)
#define AI_PARTY_LADDIE_CUSTOM                  (112)
#define AI_PARTY_ROBOBRAIN_BERSERK              (113)
#define AI_PARTY_ROBOBRAIN_AGGRESSIVE           (114)
#define AI_PARTY_ROBOBRAIN_DEFENSIVE            (115)
#define AI_PARTY_ROBOBRAIN_COWARD               (116)
#define AI_PARTY_ROBOBRAIN_CUSTOM               (117)
#define AI_PARTY_BESS_BERSERK                   (118)
#define AI_PARTY_BESS_AGGRESSIVE                (119)
#define AI_PARTY_BESS_DEFENSIVE                 (120)
#define AI_PARTY_BESS_COWARD                    (121)
#define AI_PARTY_BESS_CUSTOM                    (122)
#define AI_SCARED_BRAHMIN                       (123)
#define AI_BOUNTY_HUNTER                        (124)
#define AI_MYSTERIOUS_STRANGER                  (125)
#define AI_DUNTON                               (126)
#define AI_NCR_RANGERS                          (127)
#define AI_MOBSTER                              (128)
#define AI_MASTERS_ARMY                         (129)
#define AI_ALIEN                                (130)
#define AI_MEAN_DEATHCLAW                       (131)
#define AI_FLOATER                              (132)
#define AI_CENTAUR                              (133)
#define AI_ENCLAVE_PATROL                       (134)
#define AI_MERC_CAPTAIN                         (135)
#define AI_MERC_RAIDER                          (136)
#define AI_SHADOW_WHO_WALKS                     (137)
#define AI_THE_DRAGON                           (138)
#define AI_LOPAN                                (139)
#define AI_REDDING_MINER                        (140)
#define AI_KAGA                                 (141)
#define AI_END_BOSS                             (142)
#define AI_DUMAR                                (143)
#define AI_FIRE_GECKOS                          (144)
#define AI_CRAZED_ROBOT                         (145)
#define AI_RAT_GOD                              (146)
#define AI_TOUGH_MERCHANT                       (147)
#define AI_CRAZY_ADDICT                         (148)
#define AI_ALGERNON                             (149)
#define AI_SF_OZ7                               (150)
#define AI_SF_OZ9                               (151)
#define AI_SF_BADGER                            (152)
#define AI_SF_SHI                               (153)
#define AI_SF_CHIP                              (154)
#define AI_SF_RYAN                              (155)
#define AI_SF_SHI_GUARD                         (156)
#define AI_SF_ELRONOLOGIST                      (157)
#define AI_SF_ELRON_GUARD                       (158)
#define AI_SF_RON_CRUZ                          (159)
#define AI_SF_NIKKI_GOLDMAN                     (160)
#define AI_SF_PUNK                              (161)
#define AI_V15_KHAN                             (162)
#define AI_V15_TOUGH_KHAN                       (163)
#define AI_PARTY_DOGMEAT_AGRESSIVE              (164)
#define AI_PARTY_DOGMEAT_BERSERK                (165)
#define AI_PARTY_DOGMEAT_COWARD                 (166)
#define AI_PARTY_DOGMEAT_CUSTOM                 (167)
#define AI_PARTY_DOGMEAT_DEFENSIVE              (168)
#define AI_PARTY_PARIADOG_AGRESSIVE             (169)
#define AI_PARTY_PARIADOG_BERSERK               (170)
#define AI_PARTY_PARIADOG_COWARD                (171)
#define AI_PARTY_PARIADOG_CUSTOM                (172)
#define AI_PARTY_PARIADOG_DEFENSIVE             (173)
#define AI_NAV_ROBOT_TURRET                     (174)
#define AI_NAV_GUARD                            (175)
#define AI_GUN_TURRET                           (176)
#define AI_KLAMATH_BRAIN                        (177)
#define AI_BRAHMIN_WIMPY                        (178)
#define AI_ADDICT_WIMPY                         (179)
#define AI_PEASANT_NO_MOVE                      (180)
#define AI_CARAVAN_GUARD                        (181)
#define AI_CARAVAN_DRIVER                       (182)
#define AI_PEASANT_KAMAKAZI                     (183)
#define AI_PRIMITIVE_COWARD                     (184)
#define AI_PRIMITIVE_KAMAKAZI                   (185)
#define AI_DOG_TOUGH                            (186)
#define AI_PARTY_KITSUNE_BERSERK                (187)
#define AI_PARTY_KITSUNE_AGGRESSIVE             (188)
#define AI_PARTY_KITSUNE_DEFENSIVE              (189)
#define AI_PARTY_KITSUNE_COWARD                 (190)
#define AI_PARTY_KITSUNE_CUSTOM                 (191)
#define AI_PARTY_CATJULES_BERSERK               (192)
#define AI_PARTY_CATJULES_AGGRESSIVE            (193)
#define AI_PARTY_CATJULES_DEFENSIVE             (194)
#define AI_PARTY_CATJULES_COWARD                (195)
#define AI_PARTY_CATJULES_CUSTOM                (196)
#define AI_PARTY_DEX_BERSERK                    (197)
#define AI_PARTY_DEX_AGGRESSIVE                 (198)
#define AI_PARTY_DEX_DEFENSIVE                  (199)
#define AI_PARTY_DEX_COWARD                     (200)
#define AI_PARTY_DEX_CUSTOM                     (201)

#endif // AIPACKET_H
