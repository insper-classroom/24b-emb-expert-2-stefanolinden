/*
 * Copyright (c) 2024 EdgeImpulse Inc.
 *
 * Generated by Edge Impulse and licensed under the applicable Edge Impulse
 * Terms of Service. Community and Professional Terms of Service
 * (https://docs.edgeimpulse.com/page/terms-of-service) or Enterprise Terms of
 * Service (https://docs.edgeimpulse.com/page/enterprise-terms-of-service),
 * according to your product plan subscription (the “License”).
 *
 * This software, documentation and other associated files (collectively referred
 * to as the “Software”) is a single SDK variation generated by the Edge Impulse
 * platform and requires an active paid Edge Impulse subscription to use this
 * Software for any purpose.
 *
 * You may NOT use this Software unless you have an active Edge Impulse subscription
 * that meets the eligibility requirements for the applicable License, subject to
 * your full and continued compliance with the terms and conditions of the License,
 * including without limitation any usage restrictions under the applicable License.
 *
 * If you do not have an active Edge Impulse product plan subscription, or if use
 * of this Software exceeds the usage limitations of your Edge Impulse product plan
 * subscription, you are not permitted to use this Software and must immediately
 * delete and erase all copies of this Software within your control or possession.
 * Edge Impulse reserves all rights and remedies available to enforce its rights.
 *
 * Unless required by applicable law or agreed to in writing, the Software is
 * distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific language governing
 * permissions, disclaimers and limitations under the License.
 */

#ifndef _EI_CLASSIFIER_ANOMALY_METADATA_H_
#define _EI_CLASSIFIER_ANOMALY_METADATA_H_

#include "edge-impulse-sdk/classifier/ei_model_types.h"

const uint16_t ei_classifier_anom_axes[] = { 0, 6, 12 };

// (before - mean) / scale
const float ei_classifier_anom_scale[3] = { 1256.5301179396654, 1411.279892788825, 1787.1963901707568 };
const float ei_classifier_anom_mean[3] = { 1531.2999661673327, 1893.6619244749102, 3750.670690946827 };
const ei_classifier_anom_cluster_t ei_classifier_anom_clusters[32] = {
	{ ( float[3] ) { 1.5991146564483643, 0.2927682399749756, -0.7009578347206116 }, 0.15880712229304347 },
	{ ( float[3] ) { -0.3885784149169922, 1.1865266561508179, 1.1595515012741089 }, 0.1246199507936675 },
	{ ( float[3] ) { -1.1318020820617676, -1.2861603498458862, -0.7071258425712585 }, 0.02275861201369351 },
	{ ( float[3] ) { -0.13756179809570312, 1.1910535097122192, 1.292175531387329 }, 0.1375045111688602 },
	{ ( float[3] ) { 1.4750922918319702, -0.038832783699035645, -0.6988574266433716 }, 0.15591065217776065 },
	{ ( float[3] ) { -0.3942905068397522, 1.283482551574707, 1.3291865587234497 }, 0.14621334845771053 },
	{ ( float[3] ) { 1.244998812675476, -0.08866225928068161, -0.6997272968292236 }, 0.10187477668755449 },
	{ ( float[3] ) { -0.21480554342269897, 1.024423360824585, 1.2143445014953613 }, 0.12688053109286498 },
	{ ( float[3] ) { 0.25810861587524414, 0.8946090936660767, 1.5848087072372437 }, 0.1444857739732024 },
	{ ( float[3] ) { -0.09070662409067154, 1.029726505279541, 1.447177767753601 }, 0.13868002161473783 },
	{ ( float[3] ) { 0.08658214658498764, 1.1088449954986572, 1.3006081581115723 }, 0.14812863259661027 },
	{ ( float[3] ) { 0.9932414889335632, 0.13012592494487762, -0.6966356039047241 }, 0.11767777946826528 },
	{ ( float[3] ) { -0.019166408106684685, 0.8442595601081848, 1.1975220441818237 }, 0.08970025222220282 },
	{ ( float[3] ) { 1.2101056575775146, 0.2397797554731369, -0.6940480470657349 }, 0.11634496966013501 },
	{ ( float[3] ) { -0.2837682366371155, 1.1150883436203003, 1.318696141242981 }, 0.11765648498686165 },
	{ ( float[3] ) { 1.4012720584869385, 0.17688874900341034, -0.6970627307891846 }, 0.12556812306469028 },
	{ ( float[3] ) { -0.5172430872917175, 1.5139026641845703, 1.9821209907531738 }, 0.21428077387765826 },
	{ ( float[3] ) { 1.2829574346542358, 0.06215865910053253, -0.7004547119140625 }, 0.1038399592243284 },
	{ ( float[3] ) { -0.5162378549575806, 0.954976499080658, 1.0527263879776 }, 0.07129255701759775 },
	{ ( float[3] ) { 0.3335919976234436, 0.9671916961669922, 1.8199999332427979 }, 0.12104119822631493 },
	{ ( float[3] ) { 1.3285096883773804, 0.41128265857696533, -0.6950370073318481 }, 0.14626673436497167 },
	{ ( float[3] ) { 1.054190993309021, 0.3449467420578003, -0.6814164519309998 }, 0.11225240089308097 },
	{ ( float[3] ) { 0.26561230421066284, 1.1455767154693604, 1.4810168743133545 }, 0.1671918123676745 },
	{ ( float[3] ) { 1.4559177160263062, 0.36940041184425354, -0.6957154273986816 }, 0.14415977309956007 },
	{ ( float[3] ) { -0.12905070185661316, 1.256658911705017, 1.6963146924972534 }, 0.1947178851915649 },
	{ ( float[3] ) { 0.06837545335292816, 1.1840662956237793, 1.5683330297470093 }, 0.1284534955914284 },
	{ ( float[3] ) { 1.1044429540634155, -0.0077342442236840725, -0.6963445544242859 }, 0.11592627554728742 },
	{ ( float[3] ) { -0.06769207119941711, 1.2823961973190308, 1.4425396919250488 }, 0.18430306459169596 },
	{ ( float[3] ) { 0.17011182010173798, 0.7909780144691467, 1.5593171119689941 }, 0.10243602478107075 },
	{ ( float[3] ) { -0.31837666034698486, 1.2919613122940063, 1.7523245811462402 }, 0.1173150386583869 },
	{ ( float[3] ) { -0.4815061688423157, 1.115393877029419, 1.4603700637817383 }, 0.14247661390898506 },
	{ ( float[3] ) { -0.5064920783042908, 1.117403507232666, 1.2324086427688599 }, 0.19792211417384692 },
};

#endif // _EI_CLASSIFIER_ANOMALY_METADATA_H_
