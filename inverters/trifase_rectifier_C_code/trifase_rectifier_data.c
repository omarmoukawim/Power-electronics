/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: trifase_rectifier_data.c
 *
 * Code generated for Simulink model 'trifase_rectifier'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Thu Jul 21 12:10:54 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "trifase_rectifier.h"
#include "trifase_rectifier_private.h"

/* Constant parameters (default storage) */
const ConstP rtConstP = {
  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S15>/(gate)'
   *   '<S17>/(gate)'
   *   '<S19>/(gate)'
   *   '<S21>/(gate)'
   *   '<S23>/(gate)'
   *   '<S25>/(gate)'
   *   '<S27>/valp_nom'
   *   '<S27>/valp_nom7'
   *   '<S28>/harmonic A'
   *   '<S28>/harmonic B'
   *   '<S28>/Step'
   *   '<S28>/Step1'
   *   '<S29>/signal timer'
   *   '<S29>/Amplitude variation'
   *   '<S29>/Frequency variation'
   *   '<S29>/phase variation'
   *   '<S29>/Constant1'
   *   '<S29>/Constant4'
   *   '<S29>/Constant5'
   *   '<S29>/Integrator'
   *   '<S30>/Phase_Harmo2'
   *   '<S33>/CONSTANT'
   *   '<S33>/Constant1'
   *   '<S33>/Constant4'
   *   '<S33>/Integrator'
   *   '<S33>/Memory'
   *   '<S33>/Step'
   *   '<S33>/Step1'
   *   '<S34>/Hit  Crossing'
   */
  0.0,

  /* Expression: sps.tv
   * Referenced by: '<S34>/Look-Up Table'
   */
  { 0.0, 0.1, 0.1, 0.15, 0.15, 0.2, 0.2, 1.2 },

  /* Expression: sps.opv
   * Referenced by: '<S34>/Look-Up Table'
   */
  { 1.0, 1.0, 0.8, 0.8, 1.2, 1.2, 1.0, 1.0 },

  /* Pooled Parameter (Expression: Vf)
   * Referenced by:
   *   '<S15>/eee'
   *   '<S17>/eee'
   *   '<S19>/eee'
   *   '<S21>/eee'
   *   '<S23>/eee'
   *   '<S25>/eee'
   */
  0.8,

  /* Computed Parameter: StateSpace_P1_Size
   * Referenced by: '<S39>/State-Space'
   */
  { 26.0, 11.0 },

  /* Expression: S.Mg
   * Referenced by: '<S39>/State-Space'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, -0.1, -0.1, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0,
    0.1, 0.1, -0.0, -0.0, -0.0, -0.0, 0.0, -1.0002, 0.0001, 0.0001, -1.0001,
    -1.0001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, -1.0, 1.0, 1.0, -1.0, -1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, -1.0, 0.0, 1.0, 0.0, 0.0, 0.0, -1.0, 1.0, -0.0, 1.0,
    -0.0, -1.0, -0.0, -0.0, -0.0, 0.0, -0.001, 0.002, 0.001, -0.001, -0.001, 0.0,
    0.0, 0.0, 0.0, 0.0, -1.0, 0.0, 0.0, 1.0, 0.0, 0.0, -1.0, -0.0, 1.0, 1.0,
    -0.0, -0.0, -1.0, -0.0, -0.0, 0.0, -0.001, 0.001, 0.002, -0.001, -0.001, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, -1.0, 0.0, 0.0, 1.0, 0.0, 1.0, -1.0, -0.0, -0.0,
    1.0, -0.0, -0.0, -1.0, -0.0, 0.0, -0.001, 0.0, 0.0, 0.001, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, -1.0, 0.0, 0.0, 0.0, 1.0, 1.0, -0.0, -1.0, -0.0, 1.0,
    -0.0, -0.0, -0.0, -1.0, 0.0, -0.001, 0.0, 0.0, 0.0, 0.001, 1.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, -1.0, -1.0, 0.0,
    0.0, 0.0, 0.0, -0.0, 0.002, -0.001, -0.001, 0.001, 0.001, 0.0, 1.0, 0.0, 0.0,
    0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 1.0, 0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 1.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.0, -0.0,
    -1.0, -1.0, -0.0, -0.0 },

  /* Computed Parameter: StateSpace_P2_Size
   * Referenced by: '<S39>/State-Space'
   */
  { 1.0, 4.0 },

  /* Expression: [S.nb.x S.nb.u S.nb.y S.nb.s]
   * Referenced by: '<S39>/State-Space'
   */
  { 0.0, 9.0, 5.0, 6.0 },

  /* Computed Parameter: StateSpace_P4_Size
   * Referenced by: '<S39>/State-Space'
   */
  { 26.0, 47.0 },

  /* Computed Parameter: StateSpace_P4
   * Referenced by: '<S39>/State-Space'
   */
  { 121.0, 121.0, 121.0, 121.0, 121.0, 118.0, 118.0, 118.0, 118.0, 118.0, 118.0,
    118.0, 118.0, 118.0, 118.0, 118.0, 118.0, 118.0, 118.0, 118.0, 105.0, 105.0,
    105.0, 105.0, 105.0, 105.0, 118.0, 118.0, 118.0, 118.0, 105.0, 83.0, 83.0,
    83.0, 83.0, 83.0, 83.0, 69.0, 69.0, 69.0, 69.0, 69.0, 69.0, 69.0, 69.0, 69.0,
    83.0, 83.0, 83.0, 83.0, 83.0, 83.0, 95.0, 95.0, 95.0, 95.0, 95.0, 87.0, 87.0,
    87.0, 87.0, 87.0, 87.0, 95.0, 95.0, 95.0, 95.0, 95.0, 95.0, 95.0, 95.0, 95.0,
    87.0, 87.0, 87.0, 87.0, 87.0, 87.0, 86.0, 86.0, 86.0, 86.0, 67.0, 95.0, 95.0,
    95.0, 95.0, 95.0, 95.0, 85.0, 85.0, 85.0, 85.0, 85.0, 85.0, 85.0, 85.0, 85.0,
    95.0, 95.0, 95.0, 95.0, 95.0, 95.0, 111.0, 111.0, 111.0, 111.0, 117.0, 83.0,
    83.0, 83.0, 83.0, 83.0, 83.0, 95.0, 95.0, 95.0, 95.0, 95.0, 95.0, 95.0, 95.0,
    95.0, 83.0, 83.0, 83.0, 83.0, 83.0, 83.0, 108.0, 108.0, 108.0, 108.0, 114.0,
    80.0, 80.0, 80.0, 80.0, 80.0, 80.0, 65.0, 66.0, 67.0, 86.0, 86.0, 86.0, 86.0,
    86.0, 86.0, 80.0, 80.0, 80.0, 80.0, 80.0, 80.0, 116.0, 116.0, 116.0, 116.0,
    114.0, 73.0, 73.0, 73.0, 73.0, 73.0, 73.0, 58.0, 58.0, 58.0, 102.0, 102.0,
    102.0, 102.0, 102.0, 102.0, 73.0, 73.0, 73.0, 73.0, 73.0, 73.0, 97.0, 97.0,
    97.0, 97.0, 101.0, 68.0, 68.0, 68.0, 68.0, 68.0, 68.0, 32.0, 32.0, 32.0,
    58.0, 58.0, 58.0, 58.0, 58.0, 58.0, 68.0, 68.0, 68.0, 68.0, 68.0, 68.0,
    103.0, 103.0, 103.0, 103.0, 110.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 84.0,
    84.0, 84.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 101.0, 101.0, 101.0, 101.0, 116.0, 68.0, 68.0, 68.0, 68.0, 68.0, 68.0,
    104.0, 104.0, 104.0, 68.0, 68.0, 68.0, 68.0, 68.0, 68.0, 68.0, 68.0, 68.0,
    68.0, 68.0, 68.0, 32.0, 32.0, 32.0, 32.0, 32.0, 105.0, 105.0, 105.0, 105.0,
    105.0, 105.0, 114.0, 114.0, 114.0, 105.0, 105.0, 105.0, 105.0, 105.0, 105.0,
    105.0, 105.0, 105.0, 105.0, 105.0, 105.0, 77.0, 77.0, 77.0, 77.0, 77.0,
    111.0, 111.0, 111.0, 111.0, 111.0, 111.0, 101.0, 101.0, 101.0, 111.0, 111.0,
    111.0, 111.0, 111.0, 111.0, 111.0, 111.0, 111.0, 111.0, 111.0, 111.0, 101.0,
    101.0, 101.0, 101.0, 101.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 101.0,
    101.0, 101.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0,
    100.0, 100.0, 100.0, 97.0, 97.0, 97.0, 97.0, 97.0, 101.0, 101.0, 101.0,
    101.0, 101.0, 101.0, 45.0, 45.0, 45.0, 101.0, 101.0, 101.0, 101.0, 101.0,
    101.0, 101.0, 101.0, 101.0, 101.0, 101.0, 101.0, 115.0, 115.0, 115.0, 115.0,
    115.0, 49.0, 50.0, 52.0, 53.0, 54.0, 55.0, 80.0, 80.0, 80.0, 49.0, 50.0,
    52.0, 53.0, 54.0, 55.0, 49.0, 50.0, 52.0, 53.0, 54.0, 55.0, 117.0, 117.0,
    117.0, 117.0, 117.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 104.0, 104.0, 104.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    114.0, 114.0, 114.0, 114.0, 114.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 97.0,
    97.0, 97.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 101.0, 101.0, 101.0, 101.0, 101.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    115.0, 115.0, 115.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 109.0, 109.0, 109.0, 109.0, 109.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 101.0, 101.0, 101.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 101.0, 101.0, 101.0, 101.0, 101.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 110.0, 110.0, 110.0, 110.0, 110.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 80.0, 80.0, 80.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 116.0, 116.0, 116.0, 116.0, 116.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 114.0, 114.0, 114.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 49.0, 50.0, 51.0, 52.0,
    49.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 111.0, 111.0, 111.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 103.0, 103.0, 103.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 114.0, 114.0, 114.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 97.0, 97.0, 97.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 109.0, 109.0,
    109.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    109.0, 109.0, 109.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 97.0, 97.0, 97.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 98.0, 98.0, 98.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 108.0, 108.0, 108.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 101.0, 101.0, 101.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 86.0, 86.0, 86.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 111.0, 111.0, 111.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 108.0, 108.0, 108.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 116.0, 116.0, 116.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 97.0, 97.0, 97.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 103.0, 103.0, 103.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 101.0, 101.0, 101.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 83.0, 83.0, 83.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 111.0, 111.0, 111.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 117.0, 117.0, 117.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 114.0, 114.0,
    114.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 99.0,
    99.0, 99.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    101.0, 101.0, 101.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0,
    32.0, 32.0, 32.0 },

  /* Computed Parameter: StateSpace_P5_Size
   * Referenced by: '<S39>/State-Space'
   */
  { 2.0, 6.0 },

  /* Expression: S.SwitchVf
   * Referenced by: '<S39>/State-Space'
   */
  { 0.8, 0.8, 0.8, 0.8, 0.8, 0.8, 0.8, 0.8, 0.8, 0.8, 0.8, 0.8 },

  /* Computed Parameter: StateSpace_P6_Size
   * Referenced by: '<S39>/State-Space'
   */
  { 1.0, 6.0 },

  /* Expression: S.SwitchType
   * Referenced by: '<S39>/State-Space'
   */
  { 3.0, 3.0, 3.0, 3.0, 3.0, 3.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by: '<S39>/State-Space'
   */
  { 6.0, 1.0 },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by: '<S39>/State-Space'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Computed Parameter: StateSpace_P9_Size
   * Referenced by: '<S39>/State-Space'
   */
  { 1.0, 1.0 },

  /* Expression: S.SaveMatrices
   * Referenced by: '<S39>/State-Space'
   */
  0.0,

  /* Computed Parameter: StateSpace_P10_Size
   * Referenced by: '<S39>/State-Space'
   */
  { 1.0, 1.0 },

  /* Expression: S.BufferSize
   * Referenced by: '<S39>/State-Space'
   */
  100.0
};

/* Constant parameters with dynamic initialization (default storage) */
ConstInitP rtConstInitP = {
  /* Computed Parameter: StateSpace_P3_Size
   * Referenced by: '<S39>/State-Space'
   */
  { 0.0, 1.0 }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */