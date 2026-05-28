// SPDX-License-Identifier: MIT
// cctest_csmith_3d7094e0.c --- cctest case csmith_3d7094e0 (csmith seed 1030788320)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7f657c51 */
/* @exp_ticks 0xc35c */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 1030788320 -o /tmp/csmith_gen_p1ub2w0v/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const uint32_t  f0;
};

union U1 {
   struct S0  f0;
   const int8_t * const  f1;
   const int8_t  f2;
   int64_t  f3;
};


static int32_t g_3 = (-10L);
static int32_t g_4 = 0xB3921DEDL;
static int32_t g_6 = (-8L);
static int8_t g_58 = 0L;
static uint32_t g_85 = 0xEFB48CA1L;
static uint32_t g_87[5][7][6] = {{{1UL,0UL,1UL,0x8F1E0EF1L,0xB7C80BFDL,0UL},{1UL,4294967293UL,0x5DC3D349L,0x13122E3BL,4UL,0UL},{4294967289UL,0x5DC3D349L,4294967288UL,0x8FB8AAA8L,0x8FB8AAA8L,4294967288UL},{0x8F1E0EF1L,0x8F1E0EF1L,4294967295UL,0x4876030DL,4UL,0x8FB8AAA8L},{0UL,6UL,0x13122E3BL,1UL,0xB7C80BFDL,4294967295UL},{4294967293UL,0UL,0x13122E3BL,0x44CB1824L,0x8F1E0EF1L,0x8FB8AAA8L},{0xA29C5D07L,0x44CB1824L,4294967295UL,0UL,1UL,4294967288UL}},{{0UL,1UL,4294967288UL,0x035D6DF8L,0UL,4294967293UL},{4294967293UL,4294967288UL,4294967295UL,4294967293UL,0x8FB8AAA8L,0x4876030DL},{0x8FB8AAA8L,0UL,4294967295UL,0UL,0x8FB8AAA8L,4UL},{4294967289UL,4294967288UL,1UL,0UL,0UL,4294967295UL},{1UL,0UL,4294967288UL,4294967288UL,0UL,1UL},{0UL,6UL,1UL,0x8FB8AAA8L,1UL,0x237FF9BDL},{0UL,4294967289UL,4294967295UL,4294967295UL,0xA29C5D07L,4294967289UL}},{{0UL,0x237FF9BDL,4294967295UL,0x8FB8AAA8L,0xB7C80BFDL,6UL},{0UL,1UL,0x035D6DF8L,4294967288UL,1UL,0UL},{1UL,4294967295UL,0UL,0UL,0xB7C80BFDL,4294967288UL},{4294967289UL,4UL,2UL,0UL,0xA29C5D07L,0UL},{0x8FB8AAA8L,0x4876030DL,2UL,4294967293UL,1UL,4294967288UL},{4294967293UL,4294967293UL,0UL,0x5DC3D349L,0UL,0UL},{0x8F1E0EF1L,0x035D6DF8L,0x035D6DF8L,0x8F1E0EF1L,0UL,6UL}},{{4294967293UL,1UL,4294967295UL,6UL,0x8FB8AAA8L,4294967289UL},{0x8FB8AAA8L,0UL,4294967295UL,0UL,0x8FB8AAA8L,0x237FF9BDL},{4294967289UL,1UL,1UL,0x44CB1824L,0UL,1UL},{1UL,0x035D6DF8L,4294967288UL,1UL,0UL,4294967295UL},{0UL,4294967293UL,1UL,2UL,1UL,4UL},{0UL,0x4876030DL,4294967295UL,1UL,0xA29C5D07L,0x4876030DL},{0UL,4UL,4294967295UL,2UL,0xB7C80BFDL,4294967293UL}},{{0UL,4294967295UL,0x035D6DF8L,1UL,1UL,0x035D6DF8L},{1UL,1UL,0UL,0x44CB1824L,0xB7C80BFDL,1UL},{4294967289UL,0x237FF9BDL,2UL,0UL,0xA29C5D07L,0UL},{0x8FB8AAA8L,4294967289UL,2UL,6UL,1UL,1UL},{4294967293UL,6UL,0UL,0x8F1E0EF1L,0UL,0x035D6DF8L},{0x8F1E0EF1L,0UL,0x035D6DF8L,0x5DC3D349L,0UL,4294967293UL},{4294967293UL,4294967288UL,4294967295UL,4294967293UL,0x8FB8AAA8L,0x4876030DL}}};
static int32_t *g_110[1][4][1] = {{{&g_3},{&g_3},{&g_3},{&g_3}}};
static int32_t **g_109 = &g_110[0][3][0];
static uint64_t g_121 = 0x64A1005E543FC1E9LL;
static union U1 g_166[6] = {{{0x33E7D4AAL}},{{0x33E7D4AAL}},{{0x33E7D4AAL}},{{0x33E7D4AAL}},{{0x33E7D4AAL}},{{0x33E7D4AAL}}};
static uint64_t ***g_171 = (void*)0;
static int32_t g_209 = 0x8DCC0734L;
static int64_t *g_228 = (void*)0;
static int64_t **g_227[5][2] = {{&g_228,&g_228},{&g_228,&g_228},{&g_228,&g_228},{&g_228,&g_228},{&g_228,&g_228}};
static uint64_t g_229 = 1UL;
static int16_t g_268 = 1L;
static int64_t g_292 = 0x30FED956FEEA5F8BLL;
static uint16_t g_298 = 65530UL;
static uint8_t g_301 = 0xFFL;
static int16_t g_368[7][4] = {{0xDE92L,0L,(-1L),0L},{0x4AA0L,0xF76FL,0xF151L,0x4AA0L},{0xF76FL,0xDE92L,0xDE92L,0xF76FL},{0xDE92L,0xF76FL,(-8L),0xF151L},{0xDE92L,(-8L),0xDE92L,(-1L)},{0xF76FL,0xF151L,(-1L),(-1L)},{(-8L),(-8L),0x4AA0L,0xF151L}};
static int16_t g_385[7] = {0x5A50L,(-1L),0x5A50L,0x5A50L,(-1L),0x5A50L,0x5A50L};
static uint32_t g_388 = 0x9011604BL;
static uint32_t g_417 = 0UL;
static int32_t *g_421 = &g_6;
static int8_t *g_422 = (void*)0;
static union U1 g_423 = {{0UL}};
static int32_t g_465[6] = {(-4L),(-4L),(-9L),(-4L),(-4L),(-9L)};
static uint64_t *g_505 = (void*)0;
static uint64_t **g_504[5] = {&g_505,&g_505,&g_505,&g_505,&g_505};
static uint64_t ***g_503 = &g_504[3];
static int32_t g_586 = 3L;
static int32_t * const g_585 = &g_586;
static int32_t * const *g_584 = &g_585;
static int32_t * const **g_583 = &g_584;
static int32_t * const ***g_582 = &g_583;
static int32_t g_602 = 0x6A97C7D7L;
static uint16_t g_637 = 0xDBE8L;
static int32_t g_638[2][5] = {{0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L}};
static uint32_t *g_702 = (void*)0;
static uint32_t **g_701 = &g_702;
static uint32_t **g_703 = &g_702;
static struct S0 g_727 = {0xED0F5CF4L};
static union U1 g_736 = {{0xEE965AC9L}};
static union U1 *g_735 = &g_736;
static int32_t g_774 = 0xA279B955L;
static int8_t g_779 = (-1L);
static int32_t g_788 = 0L;
static int16_t g_835 = 8L;
static int64_t ***g_846 = (void*)0;
static uint8_t *g_855 = &g_301;
static uint64_t g_896 = 0xC1A85A818C9D563DLL;
static uint64_t g_897 = 0xB024C6161B5D02BBLL;
static uint64_t g_898 = 1UL;
static uint64_t g_899 = 0x8022FD9B9DDF328ALL;
static uint64_t g_900 = 0x74861A1D7508977FLL;
static uint64_t g_901 = 18446744073709551615UL;
static uint64_t g_902 = 0x1AF8D3BC0A160C51LL;
static uint64_t g_903 = 7UL;
static uint64_t g_904 = 3UL;
static uint64_t g_905[5][5] = {{18446744073709551615UL,18446744073709551609UL,0UL,18446744073709551609UL,18446744073709551615UL},{18446744073709551606UL,18446744073709551609UL,6UL,18446744073709551615UL,6UL},{6UL,6UL,0UL,18446744073709551615UL,6UL},{18446744073709551609UL,18446744073709551606UL,18446744073709551606UL,18446744073709551609UL,6UL},{18446744073709551609UL,18446744073709551615UL,0x162E2453454E910BLL,0x162E2453454E910BLL,18446744073709551615UL}};
static uint64_t g_906[5] = {0xC13D606B252A832ALL,0xC13D606B252A832ALL,0xC13D606B252A832ALL,0xC13D606B252A832ALL,0xC13D606B252A832ALL};
static uint64_t g_907[4] = {0xF5B7225C82747524LL,0xF5B7225C82747524LL,0xF5B7225C82747524LL,0xF5B7225C82747524LL};
static uint64_t g_908 = 18446744073709551615UL;
static uint64_t g_909 = 0x9253278DF86FC1C6LL;
static uint64_t g_910 = 0x71EACCCB95D0BDDFLL;
static uint64_t g_911 = 18446744073709551615UL;
static uint64_t g_912 = 0UL;
static uint64_t g_913 = 0x2F5FECACC0AE7338LL;
static uint64_t g_914[3] = {8UL,8UL,8UL};
static uint64_t g_915 = 0x4590C59D34AC85D9LL;
static uint64_t g_916 = 0xC363F0021D3E4FF2LL;
static uint64_t g_917 = 0UL;
static uint64_t g_918 = 0UL;
static uint64_t * const g_895[7][5][4] = {{{(void*)0,&g_909,&g_898,&g_902},{&g_898,&g_902,(void*)0,&g_898},{&g_896,&g_902,&g_918,&g_902},{&g_902,&g_909,&g_904,&g_911},{&g_913,&g_896,(void*)0,&g_904}},{{(void*)0,&g_916,(void*)0,&g_902},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_913,&g_902,&g_904,(void*)0},{&g_902,&g_916,&g_918,&g_911},{&g_896,&g_913,(void*)0,&g_911}},{{&g_898,&g_916,&g_898,(void*)0},{(void*)0,&g_902,(void*)0,(void*)0},{&g_896,(void*)0,&g_904,&g_902},{(void*)0,&g_916,&g_904,&g_904},{&g_896,&g_896,(void*)0,&g_911}},{{(void*)0,&g_909,&g_898,&g_902},{&g_898,&g_902,(void*)0,&g_898},{&g_896,&g_902,&g_918,&g_902},{&g_902,&g_909,&g_904,&g_911},{&g_913,&g_896,(void*)0,&g_904}},{{(void*)0,&g_916,(void*)0,&g_902},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_913,&g_902,&g_904,(void*)0},{&g_902,&g_916,&g_918,&g_911},{&g_896,&g_913,(void*)0,&g_911}},{{&g_898,&g_916,&g_898,(void*)0},{&g_904,&g_898,(void*)0,&g_904},{(void*)0,(void*)0,&g_900,&g_898},{(void*)0,&g_913,&g_900,&g_900},{(void*)0,(void*)0,(void*)0,&g_909}},{{&g_904,&g_906[4],&g_918,&g_898},{&g_918,&g_898,(void*)0,&g_918},{(void*)0,&g_898,&g_916,&g_898},{&g_898,&g_906[4],&g_900,&g_909},{(void*)0,(void*)0,(void*)0,&g_900}}};
static uint64_t * const *g_894[5][1][3] = {{{(void*)0,&g_895[4][2][0],(void*)0}},{{&g_895[4][2][0],&g_895[4][2][0],&g_895[4][2][0]}},{{(void*)0,&g_895[4][2][0],(void*)0}},{{&g_895[4][2][0],&g_895[4][2][0],&g_895[4][2][0]}},{{(void*)0,&g_895[4][2][0],(void*)0}}};
static uint64_t * const **g_960 = &g_894[2][0][1];
static uint64_t * const ***g_959[2][1][2] = {{{(void*)0,(void*)0}},{{(void*)0,(void*)0}}};
static uint64_t * const ****g_958 = &g_959[1][0][0];
static int32_t ****g_963 = (void*)0;
static int32_t *****g_962 = &g_963;
static const int64_t *g_1004 = &g_292;
static const int64_t **g_1003[7] = {&g_1004,&g_1004,&g_1004,&g_1004,&g_1004,&g_1004,&g_1004};
static const int64_t ***g_1002 = &g_1003[0];
static uint32_t g_1024 = 4294967292UL;
static struct S0 *g_1045[2] = {&g_727,&g_727};
static struct S0 **g_1044 = &g_1045[0];
static uint16_t g_1062 = 4UL;
static const uint64_t g_1157 = 0x992956CAAD5F5802LL;
static uint8_t g_1250 = 0x45L;
static uint16_t **g_1265 = (void*)0;
static const int16_t g_1287 = 0L;
static const uint16_t g_1324 = 0x287FL;
static int8_t g_1337 = 0x7EL;
static uint64_t g_1405 = 0x5EC8CE7B2909F7B6LL;
static uint16_t g_1414 = 0x1474L;
static int8_t g_1429[7][7][3] = {{{(-1L),0L,0x6AL},{0x03L,0x4DL,0x4DL},{2L,0L,0xFEL},{0xE6L,0x4DL,4L},{(-1L),0L,0L},{5L,0x4DL,0x70L},{(-1L),0L,0x6AL}},{{0x03L,0x4DL,0x4DL},{2L,0L,0xFEL},{0xE6L,0x4DL,4L},{(-1L),0L,0L},{5L,0x4DL,0x70L},{(-1L),0L,0x6AL},{0x03L,0x4DL,0x4DL}},{{2L,0L,0xFEL},{0xE6L,0x4DL,4L},{(-1L),0L,0L},{5L,0x4DL,0x70L},{(-1L),0L,0x6AL},{0x03L,0x4DL,0x4DL},{2L,0L,0xFEL}},{{0xE6L,0x4DL,4L},{(-1L),0L,0L},{5L,0x4DL,0x70L},{(-1L),0L,0x6AL},{0x03L,0x4DL,0x4DL},{2L,0L,0xFEL},{0xE6L,0x4DL,4L}},{{(-1L),0L,0L},{5L,0x4DL,0x70L},{(-1L),0L,0x6AL},{0x03L,0x4DL,0x4DL},{2L,0L,0xFEL},{0xE6L,0x4DL,4L},{(-1L),0L,0L}},{{5L,0x4DL,0x70L},{(-1L),0L,0x6AL},{0x03L,0x4DL,0x4DL},{2L,0L,0xFEL},{0xE6L,0x4DL,4L},{(-1L),0L,0L},{5L,0x4DL,0x70L}},{{(-1L),0x7EL,0xE6L},{0x4DL,(-1L),(-1L)},{0x6AL,0x7EL,4L},{0x70L,(-1L),(-1L)},{0L,0x7EL,0x7EL},{4L,(-1L),0L},{0xFEL,0x7EL,0xE6L}}};



static int32_t  func_1(void);
static union U1  func_24(int32_t * p_25, int64_t  p_26);
static int32_t * func_27(uint8_t  p_28, int8_t * p_29, uint32_t  p_30);
static int32_t  func_36(struct S0  p_37, int64_t  p_38, uint32_t  p_39);
static struct S0  func_40(int32_t * p_41, struct S0  p_42);
static struct S0  func_43(int32_t  p_44, int8_t * p_45, union U1  p_46);
static int32_t  func_47(int32_t  p_48, int32_t  p_49, int32_t  p_50);
static int16_t  func_51(int8_t * p_52, const uint8_t  p_53, uint32_t  p_54, const uint16_t  p_55, int32_t * p_56);




static int32_t  func_1(void)
{ 
    uint32_t l_2[3];
    int32_t l_18[3];
    int32_t *l_981 = &g_638[0][4];
    int32_t *l_982[4][5] = {{&g_6,&g_586,&g_6,(void*)0,(void*)0},{(void*)0,&g_602,(void*)0,(void*)0,(void*)0},{&g_6,&g_586,&g_6,(void*)0,(void*)0},{(void*)0,&g_602,(void*)0,(void*)0,(void*)0}};
    uint64_t l_983 = 0x1D25C83215F70146LL;
    struct S0 *l_987 = &g_423.f0;
    struct S0 **l_986 = &l_987;
    int64_t ***l_1001 = &g_227[0][0];
    int16_t l_1125 = 1L;
    uint32_t l_1139 = 0x48DC48C0L;
    int8_t l_1140 = 1L;
    int8_t l_1259 = 0xBEL;
    int32_t l_1270[2][2] = {{1L,1L},{1L,1L}};
    const int16_t *l_1286 = &g_1287;
    uint16_t *l_1290 = &g_298;
    uint16_t **l_1289 = &l_1290;
    uint64_t ** const *l_1326[2][7][6] = {{{(void*)0,&g_504[3],&g_504[3],(void*)0,&g_504[3],&g_504[3]},{&g_504[2],&g_504[3],&g_504[3],&g_504[2],&g_504[3],&g_504[3]},{&g_504[3],&g_504[3],&g_504[3],&g_504[3],&g_504[3],&g_504[3]},{(void*)0,&g_504[3],&g_504[3],(void*)0,&g_504[3],&g_504[3]},{&g_504[2],&g_504[3],&g_504[3],&g_504[2],&g_504[3],&g_504[3]},{&g_504[3],&g_504[3],&g_504[3],&g_504[3],&g_504[3],&g_504[3]},{(void*)0,&g_504[3],&g_504[3],(void*)0,&g_504[3],&g_504[3]}},{{&g_504[2],&g_504[3],&g_504[3],&g_504[2],&g_504[3],&g_504[3]},{&g_504[3],&g_504[3],&g_504[3],&g_504[3],&g_504[3],&g_504[3]},{(void*)0,&g_504[3],&g_504[3],(void*)0,&g_504[3],&g_504[3]},{&g_504[2],&g_504[3],&g_504[3],&g_504[2],&g_504[3],&g_504[3]},{&g_504[3],&g_504[3],&g_504[3],&g_504[3],&g_504[3],&g_504[3]},{(void*)0,&g_504[3],&g_504[3],(void*)0,&g_504[3],&g_504[3]},{&g_504[2],&g_504[3],&g_504[3],&g_504[2],&g_504[3],&g_504[3]}}};
    uint64_t ** const **l_1325 = &l_1326[0][0][3];
    uint8_t l_1400 = 0xA1L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_2[i] = 18446744073709551615UL;
    for (i = 0; i < 3; i++)
        l_18[i] = (-1L);
    for (g_3 = 2; (g_3 >= 0); g_3 -= 1)
    { 
        uint64_t l_11[6];
        int32_t l_20 = 0x55FFF839L;
        uint32_t l_21[3];
        int8_t *l_57 = &g_58;
        int32_t l_953 = 1L;
        int i;
        for (i = 0; i < 6; i++)
            l_11[i] = 0x82F80C3414B58E17LL;
        for (i = 0; i < 3; i++)
            l_21[i] = 0UL;
        for (g_4 = 0; (g_4 <= 2); g_4 += 1)
        { 
            int32_t *l_5 = &g_6;
            int32_t *l_7 = (void*)0;
            int32_t *l_8 = &g_6;
            int32_t *l_9 = &g_6;
            int32_t *l_10 = &g_6;
            int32_t *l_14 = &g_6;
            int32_t *l_15 = &g_6;
            int32_t *l_16 = &g_6;
            int32_t *l_17 = &g_6;
            int32_t *l_19[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            ++l_11[1];
            l_21[0]++;
        }
        for (l_20 = 0; (l_20 <= 2); l_20 += 1)
        { 
            int32_t *l_33 = &l_20;
            int8_t *l_920 = &g_779;
            struct S0 *l_961 = (void*)0;
            int i;
        }
    }
    ++l_983;
    (*l_986) = &g_727;
    if (((void*)0 != &g_846))
    { 
        const int64_t *l_991 = &g_292;
        const int64_t **l_990 = &l_991;
        const int64_t ***l_989[7] = {&l_990,&l_990,&l_990,&l_990,&l_990,&l_990,&l_990};
        int64_t ***l_995 = &g_227[0][1];
        int32_t l_1007 = 0x62BF9AB1L;
        uint8_t l_1023 = 0UL;
        int32_t l_1032 = 0x29D038F7L;
        int32_t ***l_1061 = &g_109;
        int32_t ****l_1060 = &l_1061;
        int16_t *l_1070 = &g_268;
        int32_t l_1092 = 1L;
        int32_t l_1095[6][5] = {{0x60540BFEL,0x43770AABL,0x07A2A611L,(-10L),0xD80B0F20L},{0xF7DBEB50L,0x43770AABL,(-10L),0x940F2530L,(-1L)},{0xD53D9E9CL,0x60540BFEL,0x60540BFEL,0xD53D9E9CL,0x940F2530L},{0xF7DBEB50L,0x6FFFFFDBL,0xD80B0F20L,0x4002C91AL,0x940F2530L},{0x60540BFEL,0xF7DBEB50L,(-1L),0x07A2A611L,(-1L)},{0x07A2A611L,0x07A2A611L,0x940F2530L,0x4002C91AL,0xD80B0F20L}};
        uint32_t l_1096[4] = {4294967294UL,4294967294UL,4294967294UL,4294967294UL};
        uint64_t l_1099 = 0xCC6C3EBA6A41C588LL;
        int8_t l_1137 = (-1L);
        int16_t l_1138 = 7L;
        int8_t l_1144[7][4] = {{0x55L,(-4L),(-4L),0x55L},{(-4L),0x55L,(-4L),(-4L)},{0x55L,0x55L,(-2L),0x55L},{0x55L,(-4L),(-4L),(-4L)},{(-2L),(-4L),(-2L),(-2L)},{(-4L),(-4L),0x55L,(-4L)},{(-4L),(-2L),(-2L),(-4L)}};
        int i, j;
        if ((g_87[4][6][3] , (*g_421)))
        { 
            int32_t l_988 = 0x9C0905AAL;
            int64_t ***l_992 = &g_227[3][1];
            int64_t ****l_993 = (void*)0;
            int64_t ****l_994 = &g_846;
            int32_t **l_996 = &l_981;
            const int64_t ****l_1005 = &l_989[4];
            union U1 **l_1006 = &g_735;
            int32_t l_1033 = 0x6F834DC8L;
            int32_t l_1039[2];
            uint16_t l_1118 = 9UL;
            const int32_t ***l_1121 = (void*)0;
            int i;
            for (i = 0; i < 2; i++)
                l_1039[i] = 0xA4B4C89EL;
            (*l_996) = ((*g_109) = func_27(((*g_855) = (l_988 <= 0x6B0DL)), &g_58, (l_989[4] != (l_995 = ((*l_994) = l_992)))));
            l_988 |= (*l_981);
            if (((**l_996) , ((**l_996) = ((((safe_lshift_func_uint16_t_u_s((((safe_rshift_func_int8_t_s_s((((*l_994) = (g_727 , l_1001)) != ((*l_1005) = g_1002)), ((0x2657L || 2UL) || (((*l_1006) = &g_736) != (void*)0)))) ^ (**l_996)) || l_1007), 0)) | l_1007) ^ (**l_996)) ^ l_1007))))
            { 
                uint32_t l_1010[2];
                int8_t l_1026[2];
                uint32_t l_1027 = 4UL;
                int32_t l_1031[3];
                int32_t l_1051 = 0L;
                int i;
                for (i = 0; i < 2; i++)
                    l_1010[i] = 0x09BF383EL;
                for (i = 0; i < 2; i++)
                    l_1026[i] = 0x4CL;
                for (i = 0; i < 3; i++)
                    l_1031[i] = 0x53F7B385L;
                for (g_779 = 0; (g_779 == 27); g_779 = safe_add_func_int8_t_s_s(g_779, 8))
                { 
                    uint32_t *l_1025[2];
                    int32_t l_1028[3];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1025[i] = (void*)0;
                    for (i = 0; i < 3; i++)
                        l_1028[i] = 0L;
                }
                for (g_3 = 0; (g_3 < 13); g_3 = safe_add_func_uint32_t_u_u(g_3, 9))
                { 
                    uint64_t l_1034 = 0xF4EF77FC8A3D5E1ALL;
                    int32_t l_1050 = 0x53968A4AL;
                    int8_t *l_1054 = &g_58;
                    int32_t *l_1057[7][2];
                    int i, j;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_1057[i][j] = &l_18[1];
                    }
                    if ((***g_583))
                        break;
                    l_1034++;
                    (****g_582) = (safe_add_func_uint8_t_u_u((l_1039[1] < (safe_mul_func_uint16_t_u_u((((l_1050 &= ((safe_add_func_int32_t_s_s((((void*)0 != g_1044) ^ (l_1007 ^= (safe_rshift_func_uint8_t_u_u(l_1027, l_1032)))), ((((safe_mod_func_int64_t_s_s((((l_1032 , l_1034) == g_912) & l_1023), l_1034)) , (*g_855)) > (*g_855)) >= (-8L)))) ^ 18446744073709551611UL)) , 0xDCL) | (*g_855)), (**l_996)))), (*g_855)));
                    l_1051 ^= ((*g_585) = l_1031[0]);
                    l_1057[5][1] = func_27((l_1050 <= (safe_mul_func_uint8_t_u_u(254UL, 7L))), (l_1054 = (g_422 = &g_58)), (++g_87[3][2][5]));
                }
                l_1031[2] |= (****g_582);
            }
            else
            { 
                int32_t l_1058 = (-10L);
                (**g_109) = 2L;
                if (g_779)
                    goto lbl_1059;
lbl_1059:
                (*g_109) = func_27(l_1058, &g_779, (**l_996));
                for (g_1024 = 0; (g_1024 <= 4); g_1024 += 1)
                { 
                    (****g_582) = (l_1023 || ((*g_855) = (**l_996)));
                }
            }
            for (g_912 = 0; (g_912 <= 6); g_912 += 1)
            { 
                const int16_t l_1084 = 0x9141L;
                int32_t l_1085[4];
                int64_t l_1094 = 0xF51E6707DF5CE63ELL;
                int32_t l_1113 = 1L;
                int i;
                for (i = 0; i < 4; i++)
                    l_1085[i] = 0L;
                if (((*g_962) != l_1060))
                { 
                    g_1062 &= (**g_109);
                }
                else
                { 
                    uint16_t *l_1075 = &g_1062;
                    struct S0 l_1082 = {4294967295UL};
                    int8_t *l_1083 = &g_779;
                    (***g_583) = (!0x7C58L);
                    l_1085[0] ^= (safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((*g_582) == ((*l_1060) = (((**l_996) != (&g_368[6][1] == l_1070)) , &l_996))), (safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((((g_298 = ((*l_1075)--)) == (safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((l_1082 , ((void*)0 != l_1083)), g_385[5])), l_1084))) != (*g_855)), 0xA179L)), l_1084)))), g_912));
                }
                if ((**g_109))
                    continue;
                for (g_301 = 0; (g_301 <= 6); g_301 += 1)
                { 
                    uint32_t l_1086[2];
                    int32_t l_1089 = (-3L);
                    int32_t l_1090 = (-9L);
                    int32_t l_1091 = 0xCBB38630L;
                    int32_t l_1093[7][5][6] = {{{0x6D4C2D66L,1L,1L,0x6D4C2D66L,0x69E2D1C4L,0xAD476046L},{0L,(-1L),8L,0x5BCD03F5L,(-6L),0xE010C292L},{0L,0x6D4C2D66L,(-8L),0x0A8CE992L,(-6L),0xFA0CD32AL},{0L,(-1L),0x48F7A3C7L,1L,0x69E2D1C4L,0xB46E03C9L},{(-4L),1L,0x5DB71C29L,(-1L),0L,0x5BCD03F5L}},{{0xFA0CD32AL,0L,1L,0L,0x48F7A3C7L,1L},{0x5BCD03F5L,6L,0xB46E03C9L,6L,0x5BCD03F5L,0x6D4C2D66L},{0x01ADFE17L,0x913D1A37L,(-1L),(-1L),0L,0x9080AA93L},{0xAD476046L,1L,0x757B5335L,0x913D1A37L,(-7L),0x9080AA93L},{(-1L),0xF350C3E5L,(-1L),0x757B5335L,0L,0x6D4C2D66L}},{{(-7L),(-6L),0xB46E03C9L,(-1L),0x913D1A37L,1L},{(-9L),0xA6CC9E07L,1L,0x9080AA93L,1L,0x5BCD03F5L},{0xB46E03C9L,8L,0x5DB71C29L,0x5DB71C29L,8L,0xB46E03C9L},{0x757B5335L,0x5BCD03F5L,0x48F7A3C7L,(-6L),(-4L),0xFA0CD32AL},{0xF350C3E5L,0L,(-8L),8L,0x9080AA93L,0xE010C292L}},{{0xF350C3E5L,0xBD9D1E17L,8L,(-6L),(-9L),0xAD476046L},{0x757B5335L,(-4L),1L,0x5DB71C29L,(-1L),0L},{0xB46E03C9L,0xE010C292L,0xBD9D1E17L,0x9080AA93L,(-7L),0x757B5335L},{(-9L),6L,0xE010C292L,(-1L),0xE010C292L,6L},{(-7L),0x5DB71C29L,(-9L),0x757B5335L,0x6D4C2D66L,(-9L)}},{{(-1L),0xFA0CD32AL,0x5BCD03F5L,0x913D1A37L,1L,1L},{0xAD476046L,0xFA0CD32AL,0x9080AA93L,(-1L),0x6D4C2D66L,(-7L)},{0x01ADFE17L,0x5DB71C29L,0x913D1A37L,6L,0xE010C292L,1L},{0x5BCD03F5L,6L,0xAD476046L,0L,(-7L),6L},{0xFA0CD32AL,0xE010C292L,(-4L),(-1L),(-1L),(-4L)}},{{(-4L),(-4L),0xA6CC9E07L,1L,(-9L),(-7L)},{0L,0xBD9D1E17L,(-1L),0x0A8CE992L,0x9080AA93L,0xA6CC9E07L},{0L,0L,(-1L),0x5BCD03F5L,(-4L),(-7L)},{0L,0x5BCD03F5L,0xA6CC9E07L,0x6D4C2D66L,8L,(-4L)},{0x6D4C2D66L,8L,(-4L),0x69E2D1C4L,(-8L),1L}},{{0x6D4C2D66L,0x757B5335L,(-9L),0x5DB71C29L,(-7L),0x5DB71C29L},{(-7L),6L,(-7L),8L,6L,0x48F7A3C7L},{0x69E2D1C4L,(-9L),(-1L),(-9L),0x48F7A3C7L,(-8L)},{0xFA0CD32AL,1L,0xAD476046L,(-9L),(-6L),8L},{0x69E2D1C4L,(-7L),0x01ADFE17L,8L,0xAD476046L,1L}}};
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_1086[i] = 6UL;
                    l_1086[1]++;
                    if ((**l_996))
                        break;
                    if (l_1086[1])
                        continue;
                    l_1096[3]--;
                }
                (**g_109) ^= 0xCCC14CE0L;
                l_1099--;
                for (g_896 = 0; (g_896 <= 6); g_896 += 1)
                { 
                    int64_t *l_1108 = &g_166[0].f3;
                    int64_t *l_1109 = &g_423.f3;
                    int64_t *l_1110 = &l_1094;
                    int32_t l_1112 = 0x2F287A2EL;
                    const int32_t ****l_1122 = &l_1121;
                    uint32_t *l_1135 = &l_1096[3];
                    if ((*g_421))
                        break;
                    (**l_1061) = (*g_109);
                    l_1113 |= (l_1112 = (safe_mul_func_int16_t_s_s(((void*)0 != (*g_958)), ((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((****l_1060) && (***g_1002)), ((*l_981) != ((*l_1110) ^= (l_1085[3] = ((*l_1108) = l_1085[1])))))), (safe_unary_minus_func_int64_t_s(l_1084)))) , (**l_996)))));
                    (**g_584) = (l_1039[0] &= (safe_rshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u((((l_1118 ^ ((safe_div_func_int8_t_s_s(((*l_1060) != ((*l_1122) = l_1121)), (safe_lshift_func_int16_t_s_s((***l_1061), (((l_1125 ^= 0L) ^ (((++(*g_855)) || (safe_rshift_func_int8_t_s_u(((safe_mod_func_int8_t_s_s((~(safe_sub_func_uint32_t_u_u(((*l_1135) = l_1085[2]), ((((l_1138 ^= (safe_unary_minus_func_int16_t_s((l_1137 >= 8UL)))) == 4294967290UL) <= l_1139) , 4294967295UL)))), 0x91L)) , g_903), 1))) , 0x9756C861L)) ^ l_1140))))) != (**l_996))) ^ (-1L)) <= g_6), l_1084)), g_900)));
                }
            }
        }
        else
        { 
            int64_t l_1141[4][1][4] = {{{0x1C936F66563208A1LL,0x1C936F66563208A1LL,0x1C936F66563208A1LL,0x1C936F66563208A1LL}},{{0x1C936F66563208A1LL,0x1C936F66563208A1LL,0x1C936F66563208A1LL,0x1C936F66563208A1LL}},{{0x1C936F66563208A1LL,0x1C936F66563208A1LL,0x1C936F66563208A1LL,0x1C936F66563208A1LL}},{{0x1C936F66563208A1LL,0x1C936F66563208A1LL,0x1C936F66563208A1LL,0x1C936F66563208A1LL}}};
            int32_t l_1142 = (-7L);
            int32_t l_1143[3][3][1] = {{{0x5D24370AL},{0xBB646E00L},{0x5D24370AL}},{{0xBB646E00L},{0x5D24370AL},{0xBB646E00L}},{{0x5D24370AL},{0xBB646E00L},{0x5D24370AL}}};
            uint64_t l_1145 = 0xF745E08A9D29D264LL;
            const uint64_t **l_1154 = (void*)0;
            const uint64_t *l_1156 = &g_1157;
            const uint64_t **l_1155 = &l_1156;
            int64_t *l_1158 = &g_736.f3;
            int i, j, k;
            for (g_897 = 0; (g_897 <= 2); g_897 += 1)
            { 
                int i;
                return g_914[g_897];
            }
            (**l_1061) = (void*)0;
            l_1145++;
            (**g_584) &= (~(safe_div_func_int64_t_s_s((safe_sub_func_int32_t_s_s(((~((**g_503) != ((*l_981) , ((*l_1155) = &l_1145)))) == ((l_1142 = ((1UL ^ ((*l_1158) = ((**l_986) , 1L))) && l_1142)) || 0x695DDC75E771D7CELL)), l_1145)), l_1096[3])));
            return l_1145;
        }
        return g_385[1];
    }
    else
    { 
        int8_t l_1191 = (-8L);
        int8_t l_1193 = 0x28L;
        int32_t *l_1221[1];
        int32_t l_1224 = 0xEA09C33BL;
        const struct S0 *l_1247 = (void*)0;
        uint16_t l_1251 = 0UL;
        uint8_t l_1262[7][7] = {{1UL,2UL,0x39L,0x39L,2UL,1UL,0xDAL},{0x36L,0x39L,255UL,0xDAL,0x81L,0x81L,0xDAL},{0x72L,4UL,0x72L,0xF7L,0xDAL,0x36L,1UL},{255UL,0x39L,0x36L,0xF7L,0x36L,0x39L,255UL},{0x39L,2UL,1UL,0xDAL,255UL,0x36L,255UL},{0x39L,255UL,255UL,0x39L,0x72L,0x81L,0xF7L},{255UL,0x81L,1UL,0x72L,0x72L,1UL,0x81L}};
        uint32_t l_1327 = 0x67D975DCL;
        uint64_t l_1332 = 18446744073709551606UL;
        int32_t l_1339 = 1L;
        const int32_t *l_1357 = &g_4;
        const int32_t **l_1356 = &l_1357;
        const int32_t ***l_1355 = &l_1356;
        int64_t l_1358 = 1L;
        uint64_t **l_1397 = &g_505;
        int32_t l_1398 = 0x18B002F2L;
        int32_t l_1399[1];
        union U1 *l_1403 = &g_736;
        union U1 **l_1404 = &l_1403;
        uint16_t l_1430 = 1UL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_1221[i] = &g_638[0][0];
        for (i = 0; i < 1; i++)
            l_1399[i] = 1L;
lbl_1225:
        for (g_1024 = 28; (g_1024 >= 46); g_1024 = safe_add_func_uint32_t_u_u(g_1024, 1))
        { 
            int32_t **l_1161 = &g_421;
            int32_t **l_1162[5][5] = {{&l_982[1][0],(void*)0,(void*)0,&l_982[1][0],(void*)0},{&l_982[1][0],&l_982[1][0],&g_110[0][0][0],&l_982[1][0],&l_982[1][0]},{(void*)0,&l_982[1][0],(void*)0,(void*)0,&l_982[1][0]},{&l_982[1][0],(void*)0,(void*)0,&l_982[1][0],(void*)0},{&l_982[1][0],&l_982[1][0],&g_110[0][0][0],&l_982[1][0],&l_982[1][0]}};
            int32_t **l_1163 = &g_421;
            int i, j;
            (*l_1161) = (***g_582);
            (*l_981) ^= (***g_583);
            (*l_1163) = (***g_582);
        }
        for (g_908 = 0; (g_908 <= 3); g_908 += 1)
        { 
            uint64_t l_1167 = 0x66B608B4E4B65894LL;
            uint16_t l_1178[2][4][5];
            int8_t l_1185 = (-10L);
            int32_t l_1235 = (-1L);
            int8_t l_1256[5][6][1] = {{{0xB8L},{0x91L},{0x91L},{0xB8L},{1L},{0x47L}},{{0xB8L},{0x47L},{1L},{0xB8L},{0x91L},{0x91L}},{{0xB8L},{1L},{0x47L},{0xB8L},{0x47L},{1L}},{{0xB8L},{0x91L},{0x91L},{0xB8L},{1L},{0x47L}},{{0xB8L},{0x47L},{1L},{0xB8L},{0x91L},{0x91L}}};
            int32_t l_1261 = 0xC52AC934L;
            int32_t l_1271 = 0xB7FEF68AL;
            uint8_t l_1293 = 0x6FL;
            uint16_t l_1309 = 0xA221L;
            int16_t l_1330 = (-7L);
            int32_t l_1331[4] = {0xBA9D5A32L,0xBA9D5A32L,0xBA9D5A32L,0xBA9D5A32L};
            uint32_t l_1340 = 0x3408D5FBL;
            uint64_t **l_1343 = &g_505;
            const uint32_t l_1359 = 18446744073709551615UL;
            uint64_t ****l_1369[5];
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 5; k++)
                        l_1178[i][j][k] = 0x34FAL;
                }
            }
            for (i = 0; i < 5; i++)
                l_1369[i] = (void*)0;
            for (g_788 = 4; (g_788 >= 0); g_788 -= 1)
            { 
                uint32_t l_1177 = 0xBF93903BL;
                uint32_t l_1192 = 0UL;
                int8_t l_1223 = 0x6FL;
                for (l_1139 = 1; (l_1139 <= 4); l_1139 += 1)
                { 
                    int8_t l_1164 = 0xDDL;
                    int32_t l_1165 = 5L;
                    int32_t l_1166 = 0xDBBECC91L;
                    int32_t l_1190 = 0x6C41CBB4L;
                    int i, j;
                    --l_1167;
                    (****g_582) &= ((((safe_mul_func_int8_t_s_s((-2L), (2L <= 7L))) || (((safe_sub_func_int16_t_s_s((g_368[(g_908 + 3)][g_908] >= (safe_sub_func_uint64_t_u_u(((-6L) < 0xF880D163EC8C89C8LL), ((+((l_1167 > 7L) && l_1177)) , l_1178[0][1][4])))), g_900)) >= g_906[1]) || 0xD2FDFB34B2A9003BLL)) , g_908) & 0x20C8L);
                    (**g_109) ^= (g_292 && ((*l_981) || (safe_mod_func_int64_t_s_s(0L, (safe_mul_func_int8_t_s_s(((g_368[(g_908 + 2)][g_908] = ((safe_rshift_func_uint16_t_u_s((l_1185 == (((*g_1004) , ((safe_sub_func_int64_t_s_s((g_905[4][0] == (safe_div_func_int8_t_s_s((-6L), 0xC5L))), 0xAE21D2F2F69031B5LL)) >= l_1190)) , 1UL)), l_1167)) <= (****g_582))) | l_1191), l_1192))))));
                    if ((*g_421))
                        continue;
                }
                if (l_1193)
                    continue;
                if ((***g_583))
                    break;
                if (((g_209 && (safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(l_1178[0][1][1], (g_229 == ((-1L) ^ (safe_add_func_int16_t_s_s((safe_add_func_uint64_t_u_u((((0x0D617F522DAE1B20LL ^ ((safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(((*g_855) = ((0xCAL | ((void*)0 == &l_1193)) , 255UL)), 0UL)), l_1192)) , (*l_981))) || g_907[0]) , l_1185), l_1178[0][1][4])), l_1192)))))), l_1178[0][0][0]))) && 0x6AF54091L))
                { 
                    uint32_t l_1213 = 0UL;
                    int32_t l_1220 = 0xF09C6EF3L;
                    int32_t *l_1222 = &g_3;
                    l_1224 ^= (((((safe_unary_minus_func_int32_t_s((**g_584))) <= (safe_lshift_func_uint8_t_u_s(((*g_855) = ((safe_lshift_func_int16_t_s_u(((l_1178[0][0][1] || ((l_1178[0][1][4] != (safe_sub_func_uint8_t_u_u((l_1213 , (safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u((*g_855), ((l_1220 = (**g_109)) ^ (((l_1221[0] = (void*)0) == l_1222) & l_1223)))) <= g_913) == (*g_855)), g_898)), l_1191))), l_1192))) != l_1192)) || 65527UL), (*l_1222))) < l_1223)), 2))) < (*l_981)) <= (-6L)) >= g_910);
                    (****g_582) = (-10L);
                }
                else
                { 
                    int32_t l_1232[2];
                    int8_t *l_1234 = &l_1185;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1232[i] = 0xD4459594L;
                    (**g_109) ^= (g_58 && (((void*)0 == (*g_1044)) <= (*g_855)));
                    if (g_58)
                        goto lbl_1225;
                    (*g_421) ^= (safe_mod_func_int16_t_s_s((g_914[1] < ((safe_lshift_func_uint16_t_u_u((((*l_1234) = ((safe_sub_func_uint32_t_u_u(l_1223, (l_1232[1] <= (~(g_779 <= (g_916 ^ ((void*)0 != &g_368[5][1]))))))) , g_898)) & 255UL), l_1232[1])) == 0UL)), g_368[4][0]));
                    if ((*g_585))
                        break;
                }
                for (g_896 = 0; (g_896 <= 4); g_896 += 1)
                { 
                    return g_774;
                }
            }
            l_1235 ^= ((***g_583) = (*l_981));
            for (l_983 = 0; (l_983 <= 0); l_983 += 1)
            { 
                uint64_t l_1248 = 18446744073709551615UL;
                uint8_t *l_1249 = &g_1250;
                int32_t l_1257 = 1L;
                int32_t l_1268 = 0L;
                int32_t l_1269[7];
                int16_t *l_1288[5][3];
                int16_t l_1311 = 0xA80BL;
                const uint16_t ****l_1319 = (void*)0;
                const uint16_t *l_1323 = &g_1324;
                const uint16_t **l_1322[4] = {&l_1323,&l_1323,&l_1323,&l_1323};
                const uint16_t ***l_1321 = &l_1322[0];
                const uint16_t ****l_1320 = &l_1321;
                uint32_t *l_1328[2][7] = {{&g_1024,(void*)0,(void*)0,&g_1024,&g_417,&g_85,&g_417},{&g_1024,(void*)0,(void*)0,&g_1024,&g_417,&g_85,&g_417}};
                int32_t l_1329[4][7] = {{(-8L),(-1L),(-8L),(-1L),(-8L),(-1L),(-8L)},{1L,1L,1L,1L,1L,1L,1L},{(-8L),(-1L),(-8L),(-1L),(-8L),(-1L),(-8L)},{1L,1L,1L,1L,1L,1L,1L}};
                int32_t ***l_1354 = (void*)0;
                int i, j;
                for (i = 0; i < 7; i++)
                    l_1269[i] = (-1L);
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_1288[i][j] = &l_1125;
                }
            }
            (*l_981) = ((safe_rshift_func_uint8_t_u_s(251UL, l_1185)) != ((((l_1271 | (safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s((((**l_986) , (*l_1325)) == (g_503 = (g_897 , &g_504[0]))), 0x2A7E2F9CE9982855LL)), (*l_1357)))) , g_1157) == (*l_1357)) , 0L));
            for (g_1337 = 0; (g_1337 <= 3); g_1337 += 1)
            { 
                uint64_t l_1377 = 4UL;
                int32_t l_1378[4] = {(-7L),(-7L),(-7L),(-7L)};
                int i;
                for (g_913 = 0; (g_913 <= 3); g_913 += 1)
                { 
                    int64_t *l_1374 = &g_292;
                    int i, j, k;
                    (*g_421) = (safe_add_func_uint16_t_u_u(g_87[(g_1337 + 1)][g_908][g_1337], ((l_1378[1] = (safe_mod_func_int32_t_s_s(((l_1374 == (**g_1002)) , 0x62C90963L), (safe_sub_func_int16_t_s_s(((65535UL >= (-1L)) ^ ((*g_585) ^ 0xF7C68BC5L)), l_1377))))) < g_638[0][3])));
                    (*l_1356) = func_27((safe_lshift_func_uint16_t_u_u((++(*l_1290)), (0x38B6L <= (safe_sub_func_uint16_t_u_u((g_87[(g_1337 + 1)][g_908][g_1337] > (safe_mul_func_uint16_t_u_u((0x4B289AFE24BF9911LL & (safe_lshift_func_uint16_t_u_s((l_1309 < (g_292 == (safe_mod_func_int64_t_s_s(0L, ((safe_add_func_uint64_t_u_u((safe_div_func_uint16_t_u_u((*l_1357), g_1337)), 18446744073709551615UL)) & g_901))))), 7))), l_1378[1]))), g_87[(g_1337 + 1)][g_908][g_1337]))))), &g_58, l_1377);
                    (*g_421) = ((((*l_1290)++) , (*g_503)) != l_1397);
                    return g_638[1][3];
                }
                for (g_417 = 0; (g_417 <= 4); g_417 += 1)
                { 
                    int i, j, k;
                    if (g_87[g_417][(g_417 + 1)][(g_1337 + 1)])
                        break;
                    return g_87[g_417][(g_908 + 1)][g_1337];
                }
            }
        }
        ++l_1400;
        (*l_1404) = l_1403;
        for (g_902 = 0; (g_902 <= 0); g_902 += 1)
        { 
            uint32_t l_1409 = 0UL;
            int32_t l_1416[6][7] = {{0L,(-7L),1L,1L,0L,0x0B3140FEL,0L},{1L,(-7L),3L,0xBBF14DDDL,0L,0x216E8B80L,1L},{1L,0x0B3140FEL,1L,0xBBF14DDDL,1L,0x0B3140FEL,1L},{0L,(-7L),1L,1L,0L,0x0B3140FEL,0L},{1L,(-7L),3L,0xBBF14DDDL,0L,0x216E8B80L,1L},{1L,0x0B3140FEL,1L,0xBBF14DDDL,1L,0x0B3140FEL,1L}};
            int16_t l_1420 = 1L;
            uint32_t l_1433 = 0x08463D39L;
            int i, j;
            if ((***l_1355))
                break;
            (**l_1355) = &l_1270[0][1];
            if ((*g_585))
                break;
            g_1405++;
            for (l_1125 = 0; (l_1125 <= 0); l_1125 += 1)
            { 
                int32_t l_1408 = 0xB74BE4EDL;
                int32_t l_1421 = 1L;
                int32_t l_1423 = (-8L);
                int32_t l_1425 = (-3L);
                int32_t l_1426[2][5][7] = {{{0x9B027D28L,8L,(-1L),(-1L),8L,0x9B027D28L,(-1L)},{(-8L),0x976C6AB3L,(-1L),0xFA37C1FFL,0x674963D5L,(-1L),0xFD77E376L},{8L,(-1L),(-1L),0xA1289878L,(-1L),0xCD460485L,0xA1289878L},{0x9B027D28L,0x976C6AB3L,1L,0x4276ECD3L,(-2L),0L,0L},{(-2L),8L,(-1L),8L,(-2L),0x70769A0BL,0x674963D5L}},{{(-7L),0L,0x4276ECD3L,0x674963D5L,(-1L),(-1L),(-7L)},{1L,(-7L),(-1L),(-1L),0x674963D5L,0x4276ECD3L,0L},{(-7L),0x674963D5L,0x70769A0BL,(-2L),8L,(-1L),8L},{(-2L),0L,0L,(-2L),0x4276ECD3L,1L,0x976C6AB3L},{0x9B027D28L,0xA1289878L,0xCD460485L,(-1L),0xA1289878L,(-1L),(-1L)}}};
                int32_t l_1428[1][2];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1428[i][j] = (-10L);
                }
                if (l_1408)
                { 
                    (**g_109) |= (((g_4 , (((0UL <= (((*g_855) , ((4L <= (*l_1357)) & ((void*)0 != (**l_1355)))) || l_1409)) , (*g_1004)) , (*g_855))) || l_1409) > l_1409);
                }
                else
                { 
                    uint8_t l_1415[6] = {0x25L,0x25L,0x25L,0x25L,0x25L,0x25L};
                    int16_t *l_1417 = &g_385[2];
                    int32_t l_1418 = 1L;
                    int32_t l_1419 = 0L;
                    int32_t l_1422 = 1L;
                    int32_t l_1424 = 0xAE15F53AL;
                    int32_t l_1427[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1427[i] = (-6L);
                    (***g_583) ^= ((**g_109) = (safe_rshift_func_uint16_t_u_s((++(**l_1289)), ((*l_1417) = (((g_1414 < 0UL) | l_1415[3]) && (0xF2612A68L || (l_1416[2][5] = 7L)))))));
                    l_1430++;
                    if (l_1433)
                        break;
                }
                for (l_1224 = 0; (l_1224 >= 0); l_1224 -= 1)
                { 
                    if ((**g_584))
                        break;
                }
                for (g_899 = 0; (g_899 <= 0); g_899 += 1)
                { 
                    uint64_t l_1434 = 4UL;
                    (**g_109) ^= ((void*)0 != &g_963);
                    if (l_1434)
                        continue;
                }
            }
        }
    }
    return g_905[3][4];
}



static union U1  func_24(int32_t * p_25, int64_t  p_26)
{ 
    int32_t ***l_946 = (void*)0;
    int32_t ****l_945 = &l_946;
    int16_t *l_947 = &g_368[5][1];
    int32_t l_948 = 0xD9B541B7L;
    uint32_t l_949[5];
    int8_t l_950 = 8L;
    const int8_t l_951 = 9L;
    union U1 l_952 = {{0x054D5C43L}};
    int i;
    for (i = 0; i < 5; i++)
        l_949[i] = 0x5BF29EE5L;
    (*g_585) = (safe_mul_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((((safe_mod_func_int16_t_s_s((safe_div_func_uint64_t_u_u((((safe_mul_func_uint16_t_u_u((p_26 <= (((safe_rshift_func_int8_t_s_u(((safe_div_func_int8_t_s_s((((p_26 && ((safe_add_func_uint16_t_u_u(((0UL || ((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((l_945 = l_945) == (void*)0), ((void*)0 != l_947))), p_26)) <= l_948)) < l_948), 65534UL)) > l_948)) , p_26) , 0x13L), p_26)) , p_26), 3)) , l_947) != &g_298)), 1UL)) && p_26) > p_26), p_26)), l_949[1])) == p_26) > l_950), l_951)) >= p_26), p_26));
    return l_952;
}



static int32_t * func_27(uint8_t  p_28, int8_t * p_29, uint32_t  p_30)
{ 
    int32_t **l_921[4][6] = {{&g_110[0][1][0],&g_110[0][1][0],&g_421,&g_110[0][1][0],&g_110[0][1][0],&g_421},{&g_110[0][1][0],&g_110[0][1][0],&g_421,&g_110[0][1][0],&g_110[0][1][0],&g_421},{&g_110[0][1][0],&g_110[0][1][0],&g_421,&g_110[0][1][0],&g_110[0][1][0],&g_421},{&g_110[0][1][0],&g_110[0][1][0],&g_421,&g_110[0][1][0],&g_110[0][1][0],&g_421}};
    int32_t **l_922 = &g_421;
    int i, j;
    (*l_922) = (*g_584);
    return (*l_922);
}



static int32_t  func_36(struct S0  p_37, int64_t  p_38, uint32_t  p_39)
{ 
    uint32_t l_878 = 0x4F3569B2L;
    struct S0 *l_889 = &g_736.f0;
    for (g_268 = 8; (g_268 == 23); g_268 = safe_add_func_uint64_t_u_u(g_268, 2))
    { 
        uint32_t l_841 = 18446744073709551615UL;
        int64_t ***l_844[5][7][1] = {{{&g_227[1][1]},{&g_227[1][1]},{&g_227[4][0]},{(void*)0},{&g_227[4][0]},{&g_227[1][1]},{&g_227[1][1]}},{{&g_227[4][0]},{(void*)0},{&g_227[4][0]},{&g_227[1][1]},{&g_227[1][1]},{&g_227[4][0]},{(void*)0}},{{&g_227[4][0]},{&g_227[1][1]},{&g_227[1][1]},{&g_227[4][0]},{(void*)0},{&g_227[4][0]},{&g_227[1][1]}},{{&g_227[1][1]},{&g_227[4][0]},{(void*)0},{(void*)0},{&g_227[3][1]},{&g_227[3][1]},{(void*)0}},{{&g_227[1][1]},{(void*)0},{&g_227[3][1]},{&g_227[3][1]},{(void*)0},{&g_227[1][1]},{(void*)0}}};
        uint64_t ***l_866 = &g_504[3];
        struct S0 l_867[6][2][5] = {{{{0x994CDA97L},{0xD1132678L},{0xBA0FDBB4L},{0xD1132678L},{0x994CDA97L}},{{0x7558717EL},{4294967295UL},{0UL},{9UL},{0UL}}},{{{4294967286UL},{4294967286UL},{0xBA0FDBB4L},{0x994CDA97L},{4294967291UL}},{{0x58B37575L},{0x858E4B2CL},{0x7558717EL},{4294967295UL},{0UL}}},{{{0xD1132678L},{0x994CDA97L},{0x2D055ED2L},{0x2D055ED2L},{0x994CDA97L}},{{0UL},{0x858E4B2CL},{0UL},{0x62D44262L},{0xD391D41EL}}},{{{4294967295UL},{4294967286UL},{4294967295UL},{0x2D055ED2L},{0xBA0FDBB4L}},{{0x3539BB2CL},{4294967295UL},{0xD391D41EL},{4294967295UL},{0x3539BB2CL}}},{{{4294967295UL},{0xD1132678L},{4294967286UL},{0x994CDA97L},{4294967286UL}},{{0UL},{0x28314FBBL},{0xD391D41EL},{9UL},{0x5FFF34A4L}}},{{{0xD1132678L},{4294967295UL},{4294967295UL},{0xD1132678L},{4294967286UL}},{{0x58B37575L},{9UL},{0UL},{0x9FFAD3B8L},{0x3539BB2CL}}}};
        int32_t l_876 = (-10L);
        int32_t l_877 = (-1L);
        int32_t *l_881[3];
        uint64_t l_882 = 0x1DD5240A3166EC29LL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_881[i] = &g_788;
        for (g_835 = 5; (g_835 >= 1); g_835 -= 1)
        { 
            int64_t ****l_845[5][2];
            int32_t l_856 = (-1L);
            union U1 *l_858 = &g_166[0];
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 2; j++)
                    l_845[i][j] = (void*)0;
            }
            ++l_841;
            g_846 = l_844[4][2][0];
            for (p_39 = 0; (p_39 <= 5); p_39 += 1)
            { 
                uint64_t ****l_851[3][1][3];
                uint16_t *l_857 = &g_298;
                int32_t l_861 = 0x179A0EBAL;
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_851[i][j][k] = &g_503;
                    }
                }
                if ((safe_add_func_uint16_t_u_u((g_121 , (8L > ((*l_857) |= ((safe_rshift_func_uint16_t_u_u((p_39 && ((((void*)0 != l_851[0][0][1]) || (~((((safe_add_func_uint8_t_u_u(((&g_301 != (((1UL && 4L) , g_736.f0) , g_855)) || l_856), 0xDBL)) && p_39) <= 0xA7L) >= l_841))) != l_841)), 10)) > l_856)))), p_37.f0)))
                { 
                    union U1 **l_859 = &g_735;
                    int32_t **l_860 = &g_421;
                    (*l_859) = (g_779 , l_858);
                    (*l_860) = (*g_584);
                }
                else
                { 
                    int16_t l_868[7] = {0x452EL,0x452EL,0x452EL,0x452EL,0x452EL,0x452EL,0x452EL};
                    int i;
                    (***g_583) = 0x1F9817B8L;
                    (**g_584) = p_38;
                    if (l_861)
                        continue;
                    if (l_841)
                        continue;
                    (*g_585) = (safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(g_774, (((g_503 = l_866) == (void*)0) ^ ((p_37 , func_40(&l_856, l_867[3][1][3])) , l_861)))), l_868[0]));
                }
                for (g_774 = 4; (g_774 >= 0); g_774 -= 1)
                { 
                    int32_t *l_869 = &g_638[0][3];
                    int32_t *l_870 = &g_602;
                    int32_t *l_871 = &g_638[1][4];
                    int32_t *l_872 = &g_586;
                    int32_t *l_873 = &g_209;
                    int32_t *l_874 = &g_586;
                    int32_t *l_875[1][1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_875[i][j] = (void*)0;
                    }
                    l_878--;
                }
                if (l_861)
                    break;
                for (g_298 = 0; g_298 < 5; g_298 += 1)
                {
                    for (l_841 = 0; l_841 < 7; l_841 += 1)
                    {
                        for (l_876 = 0; l_876 < 6; l_876 += 1)
                        {
                            g_87[g_298][l_841][l_876] = 4294967292UL;
                        }
                    }
                }
            }
        }
        ++l_882;
        for (g_292 = 0; (g_292 > (-16)); g_292 = safe_sub_func_uint16_t_u_u(g_292, 9))
        { 
            int16_t l_919[1][4][2] = {{{(-2L),8L},{(-2L),8L},{(-2L),8L},{(-2L),8L}}};
            int i, j, k;
            for (g_602 = 0; (g_602 != 3); g_602 = safe_add_func_uint64_t_u_u(g_602, 3))
            { 
                struct S0 **l_890 = &l_889;
                (*l_890) = l_889;
                (***g_583) = (+((0x961F2792L | (safe_mod_func_int8_t_s_s((4294967295UL | (0L & ((*l_866) == (g_894[2][0][1] = (*l_866))))), (*g_855)))) > ((((&l_866 != (void*)0) == 0UL) , 0x1D6E79473059B57ELL) || l_919[0][1][0])));
            }
            if (l_919[0][1][0])
                continue;
        }
        return (*g_585);
    }
    return (**g_584);
}



static struct S0  func_40(int32_t * p_41, struct S0  p_42)
{ 
    uint64_t l_728 = 18446744073709551615UL;
    int32_t l_731 = (-7L);
    uint8_t l_746 = 0UL;
    int32_t l_756 = 0L;
    int32_t l_757 = (-1L);
    int32_t l_758 = 0x67AC3B0EL;
    int32_t l_759 = 0xF29B2056L;
    int32_t l_761 = 0x769B3E3AL;
    int32_t l_762 = 6L;
    int32_t l_769 = 0xE2C83FEEL;
    int32_t l_770 = 0L;
    int32_t l_772[6] = {0L,0L,0L,0L,0L,0L};
    uint8_t l_775 = 255UL;
    uint32_t l_780 = 0xA2E6639DL;
    int32_t l_787[1][7];
    uint64_t l_789 = 18446744073709551614UL;
    uint16_t l_819 = 0x3559L;
    int32_t *l_838 = &l_770;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
            l_787[i][j] = 0xC3CA868AL;
    }
    l_728 |= (*g_585);
    if (l_728)
        goto lbl_737;
    for (g_301 = 0; (g_301 <= 4); g_301 += 1)
    { 
        return p_42;
    }
    for (g_85 = 0; (g_85 >= 58); g_85++)
    { 
        uint32_t l_732 = 0UL;
        l_732--;
    }
lbl_737:
    g_735 = &g_166[0];
    for (g_586 = 0; (g_586 <= 6); g_586 += 1)
    { 
        int32_t **l_738 = &g_421;
        int32_t l_747 = (-3L);
        int32_t l_753 = 1L;
        int32_t l_760 = 0xD3CC2A56L;
        int32_t l_763 = (-1L);
        int32_t l_764 = 1L;
        int32_t l_765 = 5L;
        int32_t l_766[3];
        int64_t l_771[1][6] = {{(-1L),0L,(-1L),(-1L),0L,(-1L)}};
        uint64_t *l_808 = &g_229;
        int64_t * const *l_810 = &g_228;
        int64_t * const **l_809 = &l_810;
        int i, j;
        for (i = 0; i < 3; i++)
            l_766[i] = 0L;
        (*l_738) = (**g_583);
        (*l_738) = (void*)0;
        l_747 = ((((safe_mod_func_uint64_t_u_u(0xD7392FC0B341833ELL, g_385[g_586])) < ((!(safe_rshift_func_uint8_t_u_s(246UL, l_731))) | (g_385[6] & (safe_div_func_int64_t_s_s((l_728 , (-1L)), 0x7C94A75C0EF71196LL))))) , l_746) ^ g_292);
        for (g_85 = 0; (g_85 <= 6); g_85 += 1)
        { 
            int32_t l_754[5][7][3] = {{{0x18F24882L,(-1L),0L},{(-1L),0xFD159AF5L,(-7L)},{0x09A4C737L,0xFD159AF5L,1L},{(-1L),(-1L),0x8DA33FB3L},{(-1L),0x61A68599L,0x09A4C737L},{0x39E1BBFBL,(-7L),0L},{(-1L),0x09A4C737L,0xA53B8455L}},{{0x0D9CC387L,0x39E1BBFBL,0L},{0xFD159AF5L,0x80CFAE94L,0x09A4C737L},{0L,0L,0x8DA33FB3L},{(-2L),0x0491D60DL,1L},{0L,1L,(-7L)},{0L,0L,0L},{(-2L),0xA53B8455L,0L}},{{0L,(-1L),1L},{0xFD159AF5L,0x0D9CC387L,0x986913ABL},{0x0D9CC387L,0L,0xFD159AF5L},{(-1L),0x0D9CC387L,0x2E35DEAEL},{0x39E1BBFBL,(-1L),(-1L)},{(-1L),0xA53B8455L,(-1L)},{(-1L),0L,0x6C629E31L}},{{0x09A4C737L,1L,0x6C629E31L},{(-1L),0x0491D60DL,(-1L)},{0x18F24882L,0L,(-1L)},{(-1L),0x80CFAE94L,0x2E35DEAEL},{0x8DA33FB3L,0x39E1BBFBL,0xFD159AF5L},{0xBBBF21DAL,0x09A4C737L,0x986913ABL},{0x8DA33FB3L,(-7L),1L}},{{(-1L),0x61A68599L,0L},{0x18F24882L,(-1L),0L},{(-1L),0xFD159AF5L,(-7L)},{(-1L),0xBBBF21DAL,0L},{0xA5D46E62L,0xA5D46E62L,0x09A4C737L},{0x986913ABL,0x39E1BBFBL,(-1L)},{0x8DA33FB3L,0L,(-7L)}}};
            int8_t l_768 = 0x78L;
            uint64_t l_794 = 18446744073709551615UL;
            int64_t ***l_811 = &g_227[4][1];
            int32_t l_831 = 0L;
            int i, j, k;
            if ((*p_41))
            { 
                int8_t l_755[3][1][4] = {{{0xF7L,0xF7L,0xF7L,0xF7L}},{{0xF7L,0xF7L,0xF7L,0xF7L}},{{0xF7L,0xF7L,0xF7L,0xF7L}}};
                int32_t l_767[2][7] = {{0x3835A1BCL,0x3835A1BCL,0x3835A1BCL,0x3835A1BCL,0x3835A1BCL,0x3835A1BCL,0x3835A1BCL},{0L,0x770B8770L,0L,0x770B8770L,0L,0x770B8770L,0L}};
                int i, j, k;
                for (g_121 = 0; (g_121 <= 5); g_121 += 1)
                { 
                    int32_t *l_748 = &g_602;
                    int32_t *l_749 = &g_6;
                    int32_t *l_750 = (void*)0;
                    int32_t *l_751 = &g_6;
                    int32_t *l_752[6] = {&g_638[0][0],&g_638[0][0],&g_638[0][0],&g_638[0][0],&g_638[0][0],&g_638[0][0]};
                    int64_t l_773 = (-1L);
                    int8_t *l_778[4] = {&l_755[0][0][2],&l_755[0][0][2],&l_755[0][0][2],&l_755[0][0][2]};
                    int i;
                    l_775--;
                    (*l_748) = g_465[g_121];
                    (*l_748) = ((*l_751) &= (l_778[1] != l_778[0]));
                    l_780--;
                }
                for (g_301 = 0; (g_301 <= 3); g_301 += 1)
                { 
                    int32_t *l_783[7][4][3] = {{{&g_602,(void*)0,&l_765},{&l_754[4][3][2],&l_766[1],(void*)0},{&l_753,&g_602,&l_766[1]},{&l_767[0][5],&g_638[0][2],&l_766[1]}},{{&l_766[1],&g_602,&g_209},{&g_209,&l_766[1],&l_756},{(void*)0,(void*)0,&l_766[1]},{&l_753,&g_209,&l_765}},{{&g_638[0][2],&l_767[0][5],&g_3},{&l_754[2][6][1],&g_602,&g_3},{&l_764,&l_731,&l_765},{&l_766[1],&l_756,&l_766[1]}},{{(void*)0,&l_764,&l_756},{&l_767[0][5],(void*)0,&g_209},{&l_754[2][6][1],&g_209,&l_766[1]},{&l_757,&l_766[1],&l_766[1]}},{{&l_754[2][6][1],&l_756,(void*)0},{&l_767[0][5],&l_757,&l_765},{(void*)0,&l_753,&g_209},{&l_766[1],&l_764,&g_602}},{{&l_764,(void*)0,&l_757},{&l_754[2][6][1],(void*)0,&l_766[1]},{&g_638[0][2],&l_764,&l_766[1]},{&l_753,&l_753,&g_3}},{{(void*)0,&l_757,&l_766[1]},{&g_209,&l_756,&l_757},{&l_766[1],&l_766[1],&l_754[2][6][1]},{&l_767[0][5],&g_209,&l_757}}};
                    uint16_t l_784[5][5] = {{65526UL,0xE5C0L,1UL,0xF325L,0xE5C0L},{0UL,1UL,1UL,0UL,0xF325L},{0x8021L,0UL,0xBC08L,0xE5C0L,0xE5C0L},{65526UL,0UL,65526UL,0xF325L,0UL},{0xE5C0L,1UL,0xF325L,0xE5C0L,0xF325L}};
                    int i, j, k;
                    l_784[3][2]--;
                    if ((*g_585))
                        continue;
                    --l_789;
                    return g_736.f0;
                }
            }
            else
            { 
                int32_t *l_795 = &g_638[1][3];
                uint64_t *l_806 = (void*)0;
                uint64_t **l_807[3][3];
                int64_t ****l_812 = &l_811;
                uint32_t *l_827 = (void*)0;
                uint32_t *l_828[7][7] = {{&g_85,&g_87[3][2][5],&g_87[3][2][5],&g_85,&g_87[3][2][5],(void*)0,&g_87[3][2][5]},{&g_85,(void*)0,(void*)0,&g_85,&l_780,&l_780,&l_780},{&g_85,&g_87[3][2][5],&g_87[3][2][5],&g_85,&g_87[3][2][5],(void*)0,&g_87[3][2][5]},{&g_85,(void*)0,(void*)0,&g_85,&l_780,&l_780,&l_780},{&g_85,&g_87[3][2][5],&g_87[3][2][5],&g_85,&g_87[3][2][5],&g_417,&l_780},{(void*)0,&l_780,&l_780,(void*)0,&l_780,&l_780,&l_780},{&g_87[3][2][5],(void*)0,(void*)0,&g_87[3][2][5],&l_780,&g_417,&l_780}};
                int32_t *l_829 = (void*)0;
                int32_t *l_830[7][6][6] = {{{(void*)0,&l_763,&l_772[2],&l_754[2][3][0],&g_3,(void*)0},{(void*)0,&l_754[2][3][0],(void*)0,(void*)0,(void*)0,&g_4},{(void*)0,(void*)0,&g_4,&g_4,(void*)0,(void*)0},{&l_763,&l_754[2][3][0],&g_788,(void*)0,&g_3,&l_754[2][3][0]},{&g_3,&l_763,&g_4,(void*)0,&l_764,(void*)0},{&g_3,&g_788,(void*)0,(void*)0,&l_772[2],(void*)0}},{{&l_763,&g_3,&l_772[2],&g_4,&l_764,&l_764},{(void*)0,&l_772[2],&l_772[2],(void*)0,&g_3,(void*)0},{(void*)0,(void*)0,(void*)0,&l_754[2][3][0],(void*)0,(void*)0},{(void*)0,(void*)0,&g_4,(void*)0,(void*)0,&l_754[2][3][0]},{&l_763,(void*)0,&g_788,(void*)0,&g_3,(void*)0},{&g_3,&l_772[2],&g_4,&l_764,&l_764,&g_4}},{{&g_3,&g_3,(void*)0,(void*)0,&l_772[2],(void*)0},{&l_763,&g_788,&l_772[2],(void*)0,&l_764,(void*)0},{(void*)0,&l_763,&l_772[2],&l_754[2][3][0],&g_3,(void*)0},{(void*)0,&l_754[2][3][0],(void*)0,(void*)0,(void*)0,&g_4},{(void*)0,(void*)0,&g_4,&g_4,(void*)0,(void*)0},{&l_763,&l_754[2][3][0],&g_788,(void*)0,&g_3,&l_754[2][3][0]}},{{&g_3,&l_763,&g_4,(void*)0,&l_764,(void*)0},{&g_3,&g_788,(void*)0,(void*)0,&l_772[2],(void*)0},{&l_763,&g_3,&l_772[2],&g_4,&l_764,&l_764},{(void*)0,&l_772[2],&l_772[2],(void*)0,&g_3,(void*)0},{(void*)0,(void*)0,(void*)0,&l_754[2][3][0],(void*)0,(void*)0},{(void*)0,(void*)0,&g_4,(void*)0,(void*)0,&l_754[2][3][0]}},{{&l_763,(void*)0,&g_788,(void*)0,&g_3,(void*)0},{&g_3,&l_772[2],&g_4,&l_764,&l_764,&g_4},{&g_3,&g_3,(void*)0,(void*)0,&l_772[2],(void*)0},{&l_763,&g_788,&l_772[2],(void*)0,&l_764,(void*)0},{(void*)0,&l_763,&l_772[2],&l_754[2][3][0],&g_3,(void*)0},{(void*)0,&l_772[2],&g_788,&l_763,(void*)0,(void*)0}},{{&l_763,(void*)0,(void*)0,(void*)0,(void*)0,&l_763},{(void*)0,&l_772[2],(void*)0,(void*)0,&l_772[2],&l_772[2]},{&l_772[2],(void*)0,(void*)0,&g_788,&g_3,&l_764},{&l_772[2],(void*)0,&g_788,(void*)0,(void*)0,&g_4},{(void*)0,&l_772[2],(void*)0,(void*)0,&g_3,&g_3},{&l_763,(void*)0,(void*)0,&l_763,&l_772[2],&g_4}},{{(void*)0,&l_763,&g_788,&l_772[2],(void*)0,&l_764},{&l_763,&g_4,(void*)0,&l_764,(void*)0,&l_772[2]},{(void*)0,&l_763,(void*)0,&g_4,&l_772[2],&l_763},{&l_772[2],(void*)0,(void*)0,&g_3,&g_3,(void*)0},{&l_772[2],&l_772[2],&g_788,&g_4,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_764,&g_3,&g_788}}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_807[i][j] = &g_505;
                }
                (*l_795) |= (safe_rshift_func_uint16_t_u_u(((l_794 = (-3L)) != 0UL), 11));
                (*l_795) ^= 1L;
                l_831 ^= (safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s(((safe_div_func_uint16_t_u_u(((l_806 == (l_808 = l_806)) > (l_809 != ((*l_812) = l_811))), g_301)) <= 0x1EL), ((safe_div_func_uint32_t_u_u(((*l_795) = (safe_mod_func_int64_t_s_s(((safe_add_func_uint64_t_u_u((l_819--), (((safe_div_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(((((!(p_42.f0 > p_42.f0)) > g_638[1][3]) | g_388) , 0UL), p_42.f0)) || l_754[2][6][1]), 0xEAA9L)) == p_42.f0) , 0xF2CC2910F624F652LL))) <= l_754[2][6][1]), p_42.f0))), 1L)) || (-10L)))), 14)), p_42.f0)), 3UL));
                for (l_763 = 0; (l_763 <= 3); l_763 += 1)
                { 
                    uint8_t *l_832 = (void*)0;
                    uint8_t *l_833[6][6] = {{&l_775,&l_775,&l_775,&l_775,&l_775,&l_775},{&l_775,&l_775,&l_775,&l_775,&l_775,&l_775},{&l_775,&l_775,&l_775,&l_775,&l_775,&l_775},{&l_775,&l_775,&l_775,&l_775,&l_775,&l_775},{&l_775,&l_775,&l_775,&l_775,&l_775,&l_775},{&l_775,&l_775,&l_775,&l_775,&l_775,&l_775}};
                    int32_t l_834 = 5L;
                    int i, j;
                    (*l_795) &= (l_834 ^= (l_762 , (g_87[3][0][4] >= (--g_301))));
                    return g_736.f0;
                }
            }
            l_747 ^= (l_760 ^= (-1L));
            if ((*p_41))
                break;
            l_838 = ((*g_109) = p_41);
        }
    }
    return g_736.f0;
}



static struct S0  func_43(int32_t  p_44, int8_t * p_45, union U1  p_46)
{ 
    uint64_t *l_446 = &g_229;
    int32_t l_472 = (-1L);
    int32_t l_478 = (-3L);
    int32_t l_479 = 0L;
    int32_t l_481[3][5] = {{(-8L),(-8L),(-8L),(-8L),(-8L)},{0x4E32D33DL,5L,0x4E32D33DL,5L,0x4E32D33DL},{(-8L),(-8L),(-8L),(-8L),(-8L)}};
    int32_t l_484 = 0L;
    int64_t l_490 = 0xF9D596AAFFB33B52LL;
    uint64_t ** const *l_501 = (void*)0;
    uint32_t * const l_507 = (void*)0;
    uint8_t l_560 = 0x2FL;
    int8_t l_576 = 0x75L;
    int32_t * const *l_581 = &g_110[0][3][0];
    int32_t * const **l_580 = &l_581;
    int32_t * const ***l_579 = &l_580;
    union U1 l_587 = {{0UL}};
    int32_t l_647[5] = {0x048642FEL,0x048642FEL,0x048642FEL,0x048642FEL,0x048642FEL};
    uint32_t l_686 = 0x635D1529L;
    int64_t ***l_690 = &g_227[3][1];
    int8_t l_699 = 3L;
    int i, j;
    for (g_417 = 0; (g_417 <= 0); g_417 += 1)
    { 
        int32_t l_469[2][1][5] = {{{0x14021B8DL,0x14021B8DL,0xA918BD92L,0x14021B8DL,0x14021B8DL}},{{1L,0x14021B8DL,1L,1L,0x14021B8DL}}};
        int32_t l_486 = 0L;
        int16_t *l_498 = &g_368[5][3];
        uint64_t ****l_502[2];
        const uint8_t l_506 = 0x3BL;
        uint8_t *l_508 = &g_301;
        int32_t *l_509 = &g_4;
        int32_t l_524 = 0x78AA3197L;
        int8_t l_563 = 0xA0L;
        const int32_t *l_573 = &l_472;
        const int32_t **l_574 = (void*)0;
        const int32_t **l_575 = &l_573;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_502[i] = &g_171;
        if (g_385[(g_417 + 2)])
            break;
        if (p_46.f0.f0)
            break;
        for (g_121 = 0; (g_121 <= 1); g_121 += 1)
        { 
            uint16_t l_432 = 0UL;
            int32_t l_462 = 0x2EE0FBDEL;
            uint8_t l_466 = 0x55L;
            int32_t l_471 = 0x842260C5L;
            int32_t l_473 = 0x6FC2E1EBL;
            int32_t l_480 = 0x43C7C053L;
            int32_t l_482 = 0L;
            int32_t l_483 = (-2L);
            int32_t l_485 = 0x12CF408AL;
            int32_t l_487 = 0x44B05046L;
            int32_t l_488 = 0L;
            int32_t l_489[2][2] = {{0xCA58668EL,0xCA58668EL},{0xCA58668EL,0xCA58668EL}};
            uint16_t l_491 = 1UL;
            int i, j;
            if (p_46.f0.f0)
            { 
                int64_t l_431 = 0x9F8948BDC220F8A8LL;
                for (g_58 = 0; (g_58 >= 0); g_58 -= 1)
                { 
                    int32_t l_424[1];
                    int32_t *l_425 = &l_424[0];
                    int32_t *l_426 = &l_424[0];
                    int32_t *l_427 = &g_6;
                    int32_t *l_428 = &l_424[0];
                    int32_t *l_429 = &g_4;
                    int32_t *l_430[6] = {&l_424[0],&l_424[0],&l_424[0],&l_424[0],&l_424[0],&l_424[0]};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_424[i] = (-1L);
                    g_110[g_417][g_417][g_58] = &p_44;
                    if (p_44)
                        continue;
                    l_432++;
                }
            }
            else
            { 
                int32_t l_435 = (-7L);
                int32_t *l_447 = &l_435;
                int32_t *l_461[5];
                int32_t l_470 = 0xFA91CF5CL;
                int i, j;
                for (i = 0; i < 5; i++)
                    l_461[i] = &g_4;
                (*l_447) = (p_44 = ((g_385[(g_417 + 2)] == (l_435 , (safe_mul_func_int8_t_s_s(g_85, (safe_mod_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_s((((!p_44) < ((safe_add_func_uint16_t_u_u((g_121 , (!((g_87[0][6][3] , l_446) == &g_229))), p_46.f0.f0)) || p_46.f0.f0)) | g_368[0][3]), 7)) <= g_301), g_385[(g_417 + 2)])))))) != p_46.f0.f0));
                l_462 |= (((+((1UL < (0x52D6159CB12409DCLL && (((safe_mod_func_uint16_t_u_u(6UL, (safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(((((((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((0x75205C4F46B2EEE6LL && ((*l_446) = (safe_div_func_uint8_t_u_u(g_229, p_46.f0.f0)))) == p_44), (*l_447))), (-5L))) || l_432) ^ p_44) == 1L) || g_385[(g_417 + 2)]) && (*l_447)), g_268)) < g_58), g_85)))) & 0x263C3F42D8EC7007LL) , l_432))) | l_432)) , g_388) ^ l_432);
                for (g_85 = 0; (g_85 < 10); ++g_85)
                { 
                    uint8_t l_474 = 0xB7L;
                    ++l_466;
                    (*g_109) = &l_435;
                    --l_474;
                    (*l_447) = (+(g_171 == (void*)0));
                }
                --l_491;
            }
        }
        if (((*l_509) = (safe_rshift_func_uint16_t_u_s(((((*l_508) = ((((safe_sub_func_int16_t_s_s((p_44 , ((g_58 || (&l_469[1][0][2] == &l_469[1][0][3])) > ((*l_498) &= l_486))), (~(safe_unary_minus_func_int16_t_s((l_501 != (g_503 = (void*)0))))))) > l_506) , l_507) != l_507)) <= g_121) <= l_490), l_506))))
        { 
            (*l_509) = p_46.f0.f0;
        }
        else
        { 
            int32_t l_521 = 0xF2B7DCA7L;
            int32_t l_522 = 0x1823D3CFL;
            uint64_t ***l_540 = &g_504[3];
            int16_t l_548 = 0L;
            int32_t l_559 = (-1L);
            int32_t l_566 = (-1L);
            int32_t l_567 = 0x550E3739L;
            int32_t l_568 = 1L;
            int32_t l_569[5][2];
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 2; j++)
                    l_569[i][j] = 1L;
            }
            l_478 ^= ((&g_503 == (void*)0) | l_479);
            for (g_292 = (-2); (g_292 < 16); g_292 = safe_add_func_int16_t_s_s(g_292, 6))
            { 
                int16_t l_549 = 0L;
                int32_t l_551 = 0x629D3D2DL;
                int32_t l_564 = 0L;
                int32_t l_565[2];
                uint16_t l_570 = 7UL;
                int i;
                for (i = 0; i < 2; i++)
                    l_565[i] = 0xEB66B1FAL;
                (*l_509) = (*l_509);
                if (p_46.f0.f0)
                { 
                    uint16_t l_514 = 0x3DB4L;
                    int16_t *l_520 = &g_268;
                    int32_t *l_523[5][5] = {{&l_481[0][0],&l_481[0][0],(void*)0,(void*)0,&l_484},{&g_3,&l_484,&g_4,(void*)0,(void*)0},{(void*)0,&l_481[1][4],(void*)0,&l_469[0][0][3],&l_469[1][0][3]},{&g_4,&l_484,&g_3,&l_484,&l_469[1][0][3]},{(void*)0,&l_481[0][0],&l_481[0][0],(void*)0,(void*)0}};
                    uint32_t *l_541[6][3] = {{&g_87[1][3][0],&g_87[1][3][0],&g_417},{&g_417,&g_417,(void*)0},{&g_87[1][3][0],&g_87[1][3][0],&g_417},{&g_417,&g_417,(void*)0},{&g_87[1][3][0],(void*)0,&g_87[1][3][0]},{(void*)0,(void*)0,&g_417}};
                    uint16_t *l_550[1][1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_550[i][j] = &l_514;
                    }
                    l_524 ^= ((safe_rshift_func_int8_t_s_u((-4L), (l_522 = (l_514 && (g_385[5] >= (safe_add_func_uint16_t_u_u((((((*l_509) && (-1L)) ^ (((~((*l_520) = ((*l_498) ^= (safe_rshift_func_int8_t_s_u((p_46.f0.f0 < g_4), p_44))))) >= 0x876829B0L) , 4UL)) | l_521) , 1UL), 0x245FL))))))) && l_521);
                    l_551 = (l_484 &= ((safe_add_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s((g_298 = (safe_lshift_func_int16_t_s_u(((p_46.f0.f0 && (l_472 & ((((safe_mod_func_uint16_t_u_u(g_417, (safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(((18446744073709551612UL == (!((*l_509) ^= (l_501 != l_540)))) > ((safe_div_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(l_548, g_3)), 0x15L)) , 0x44046E67L), g_417)) & 0xCB20C6AFL)), l_549)), g_209)), 0x69B5L)))) & l_549) != 0xE974040EE12519A5LL) != 1UL))) , 0x5DA2L), 1))), l_478)), l_549)) > p_44));
                }
                else
                { 
                    int32_t *l_552 = &l_472;
                    int32_t *l_553 = &g_6;
                    int32_t *l_554 = &g_209;
                    int32_t *l_555 = &l_481[2][0];
                    int32_t *l_556 = &l_484;
                    int32_t *l_557 = &l_522;
                    int32_t *l_558[5] = {&l_481[1][3],&l_481[1][3],&l_481[1][3],&l_481[1][3],&l_481[1][3]};
                    int i;
                    l_560--;
                    l_570++;
                }
            }
            (*l_509) = (*l_509);
        }
        (*l_575) = l_573;
    }
    l_576 = (-6L);
    for (g_292 = 0; (g_292 <= 3); g_292 += 1)
    { 
        int32_t l_590 = 0x7A79F39EL;
        int32_t l_597 = 0L;
        int16_t l_607 = 0x2026L;
        int32_t l_613 = 0x85BADBB2L;
        int32_t l_614 = 0L;
        uint16_t l_646[2][4] = {{65529UL,65529UL,65529UL,65529UL},{65529UL,65529UL,65529UL,65529UL}};
        int32_t l_687 = 0L;
        int i, j;
        (*g_585) = ((p_46.f0 , &l_472) != ((p_44 & ((((safe_add_func_uint8_t_u_u(((g_582 = l_579) != (((l_587 , p_44) , (-1L)) , &l_580)), 254UL)) || (-5L)) < 18446744073709551613UL) , 0L)) , (void*)0));
        for (l_560 = 0; (l_560 <= 3); l_560 += 1)
        { 
            int64_t l_593 = 0x7606BC38FAE6C762LL;
            int64_t *l_594 = (void*)0;
            int64_t *l_595 = (void*)0;
            int64_t *l_596[1];
            uint64_t **l_604[6] = {&l_446,(void*)0,(void*)0,&l_446,(void*)0,(void*)0};
            int32_t l_608 = (-1L);
            int32_t l_612[6][1][7] = {{{0x0287E2B8L,0x66BF22E5L,0x66BF22E5L,0x0287E2B8L,0x66BF22E5L,0x66BF22E5L,0x0287E2B8L}},{{0xCFB2283AL,0xF14E1C3AL,0xCFB2283AL,0xCFB2283AL,0xF14E1C3AL,0xCFB2283AL,0xCFB2283AL}},{{0x0287E2B8L,0x0287E2B8L,4L,0x0287E2B8L,0x0287E2B8L,4L,0x0287E2B8L}},{{0xF14E1C3AL,0xCFB2283AL,0xCFB2283AL,0xF14E1C3AL,0xCFB2283AL,0xCFB2283AL,0xF14E1C3AL}},{{0x66BF22E5L,0x0287E2B8L,0x66BF22E5L,0x66BF22E5L,0x0287E2B8L,0x66BF22E5L,0x66BF22E5L}},{{0xF14E1C3AL,0xF14E1C3AL,0L,0xF14E1C3AL,0xF14E1C3AL,0L,0xF14E1C3AL}}};
            int64_t **l_658 = &g_228;
            uint16_t l_661[2][7][2] = {{{1UL,0UL},{0xAD3EL,0UL},{0xF353L,65527UL},{65527UL,65527UL},{0xF353L,0UL},{0xAD3EL,0UL},{1UL,0xF353L}},{{0x03EBL,1UL},{65531UL,0x6F30L},{65531UL,1UL},{0x03EBL,0xF353L},{1UL,0UL},{0xAD3EL,0UL},{0xF353L,65527UL}}};
            int32_t **l_672 = (void*)0;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_596[i] = &l_587.f3;
        }
    }
    for (g_292 = 0; (g_292 >= 18); g_292 = safe_add_func_int64_t_s_s(g_292, 9))
    { 
        int8_t l_700 = 0x11L;
        int8_t *l_709 = &l_699;
        int32_t l_723 = (-1L);
        int64_t *l_724 = (void*)0;
        int64_t *l_725 = &g_423.f3;
        uint32_t l_726 = 0x796F276DL;
        l_700 &= ((**g_584) = l_699);
        (***g_583) = p_44;
        if (p_46.f0.f0)
            continue;
        (***g_583) = (g_701 == (g_703 = &g_702));
        (*g_585) |= (~(safe_rshift_func_uint8_t_u_u(((((*l_709) |= (safe_div_func_uint64_t_u_u(l_700, p_46.f0.f0))) < ((safe_mul_func_int8_t_s_s((0x30L <= (safe_lshift_func_int16_t_s_u(g_388, ((((safe_mod_func_uint32_t_u_u((((((*l_725) = ((l_723 = (+(safe_mul_func_int8_t_s_s(((&g_298 != ((p_44 < (safe_rshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(l_700, g_638[1][3])) >= 0xC651A41AL), g_292))) , &g_298)) <= l_700), l_700)))) > l_700)) && l_723) < 3L) , l_723), p_44)) , 1L) < l_726) | 7L)))), 0xBBL)) < 0xFFE73D59L)) < p_46.f0.f0), 5)));
    }
    return g_727;
}



static int32_t  func_47(int32_t  p_48, int32_t  p_49, int32_t  p_50)
{ 
    int32_t *l_230 = &g_4;
    int32_t *l_231 = &g_6;
    int32_t *l_232 = (void*)0;
    int32_t *l_233 = (void*)0;
    int32_t *l_234 = &g_209;
    int32_t *l_235 = &g_6;
    int32_t *l_236 = &g_6;
    int32_t *l_237 = &g_209;
    int32_t *l_238 = &g_4;
    int32_t *l_239 = &g_209;
    int32_t *l_240 = (void*)0;
    int32_t *l_241 = &g_6;
    int32_t *l_242 = &g_4;
    int32_t *l_243 = &g_4;
    int32_t *l_244 = &g_6;
    int32_t l_245[3];
    int32_t *l_246[4];
    int8_t l_247 = (-1L);
    uint32_t l_248[7] = {6UL,0UL,6UL,6UL,0UL,6UL,6UL};
    union U1 l_255 = {{0x01E9A5BDL}};
    uint64_t ****l_256[1];
    int8_t *l_263[7] = {&l_247,&l_247,&l_247,&l_247,&l_247,&l_247,&l_247};
    int8_t l_264 = 0xCAL;
    int16_t l_265 = 0x4851L;
    int16_t l_266[5];
    int16_t *l_267 = &g_268;
    int32_t ***l_269 = &g_109;
    int32_t *l_331 = &l_245[0];
    int64_t *l_336 = (void*)0;
    int16_t l_367[2][7] = {{2L,7L,7L,2L,7L,7L,2L},{0xF55AL,0x7FB4L,0xF55AL,0xF55AL,0x7FB4L,0xF55AL,0xF55AL}};
    int8_t l_386 = 6L;
    int16_t l_387 = 0xAD15L;
    uint32_t l_404[4] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
    uint16_t l_413[6][2] = {{6UL,0xA5D1L},{6UL,6UL},{0xA5D1L,6UL},{6UL,0xA5D1L},{6UL,6UL},{0xA5D1L,6UL}};
    int16_t l_416[4][3] = {{0L,(-7L),(-7L)},{0L,(-7L),(-7L)},{0L,(-7L),(-7L)},{0L,(-7L),(-7L)}};
    int32_t **l_420[7] = {&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239};
    int i, j;
    for (i = 0; i < 3; i++)
        l_245[i] = 0xC460402DL;
    for (i = 0; i < 4; i++)
        l_246[i] = &g_6;
    for (i = 0; i < 1; i++)
        l_256[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_266[i] = 7L;
    (*g_109) = l_230;
    --l_248[2];
    if ((safe_div_func_uint16_t_u_u((p_48 != p_49), ((*l_267) ^= (safe_lshift_func_int8_t_s_u((((0xDED5E2A7L && ((((l_255 , l_256[0]) == l_256[0]) | (((safe_sub_func_int8_t_s_s((g_58 = (((safe_rshift_func_int8_t_s_u((l_264 = ((safe_mod_func_uint32_t_u_u(p_49, p_48)) <= p_48)), l_265)) > p_50) && 0xA80B5DEE5804FEDBLL)), (*l_244))) >= 0x2DL) ^ p_50)) < l_266[2])) , g_229) == 249UL), 6))))))
    { 
        int32_t ****l_270 = &l_269;
        int64_t *l_338 = (void*)0;
        struct S0 l_345 = {0x6ED8A2B8L};
        int32_t l_369 = 0x4B2D632DL;
        int32_t l_370 = 0x33788863L;
        int32_t l_371[6] = {(-5L),1L,(-5L),(-5L),1L,(-5L)};
        int8_t l_375[6][1][5] = {{{0x81L,1L,0x81L,0x13L,0x4EL}},{{1L,0L,0L,1L,0L}},{{0x4EL,1L,(-5L),1L,0x4EL}},{{0L,1L,0L,0L,1L}},{{0x4EL,0x13L,0x81L,1L,0x81L}},{{1L,1L,1L,0L,0L}}};
        uint16_t l_376[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_376[i] = 65535UL;
        (*l_270) = l_269;
        for (g_6 = 3; (g_6 >= 0); g_6 -= 1)
        { 
            int64_t *l_288 = &g_166[0].f3;
            int64_t *l_289 = (void*)0;
            int64_t *l_290 = &g_166[0].f3;
            int64_t *l_291[4] = {&g_292,&g_292,&g_292,&g_292};
            int32_t l_293 = 0x91353104L;
            int32_t l_299 = 0x1B374B03L;
            uint8_t *l_300 = &g_301;
            int32_t l_372 = 0L;
            int32_t l_373 = (-1L);
            int32_t l_374[4][4] = {{0x5AAB2A08L,3L,1L,0xD04215E4L},{0x5C92E5A9L,3L,3L,0x5C92E5A9L},{3L,0x5C92E5A9L,0x5AAB2A08L,0x4594DEE0L},{3L,0x5AAB2A08L,3L,1L}};
            int i, j;
            if (((safe_add_func_uint8_t_u_u(((*l_300) = (safe_rshift_func_int16_t_s_u(((*l_267) = ((safe_div_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(((void*)0 != l_246[g_6]), (safe_add_func_uint64_t_u_u((safe_div_func_uint64_t_u_u(0x47C410BDAC23D5A6LL, (g_85 || ((*l_288) = (safe_add_func_uint16_t_u_u((~((safe_mod_func_int8_t_s_s(((p_48 && ((l_293 |= 0L) != (safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((p_50 >= p_50), 1L)), 8)))) >= (*l_244)), 0xC8L)) ^ g_298)), p_48)))))), l_299)))), 1UL)) ^ 0x81A67B9EC7BC6D4CLL)), g_229))), g_87[0][0][1])) <= p_50))
            { 
                uint64_t l_330 = 0x64436861B768BDAELL;
                uint16_t l_337 = 0x4A5BL;
                if ((p_50 <= ((((0xF902C068L < (((((safe_rshift_func_uint16_t_u_u((!(((safe_mod_func_int32_t_s_s((((~(((safe_sub_func_int64_t_s_s(p_48, (safe_sub_func_int32_t_s_s(((safe_sub_func_int64_t_s_s(((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((*l_234), (safe_rshift_func_uint8_t_u_u(0xDEL, (safe_add_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(g_301, (safe_rshift_func_int8_t_s_u((g_58 |= (safe_add_func_int64_t_s_s(p_49, 1UL))), 0)))), 0UL)), (****l_270))))))), 0x5548L)) <= p_48), g_4)) | (-1L)), p_49)))) | p_48) ^ 65533UL)) & 0x156664ACL) >= p_49), (-7L))) , p_48) == 0xDCL)), g_229)) , 18446744073709551615UL) > p_49) ^ (-10L)) <= p_49)) , 0xC6972D0B17C0A01BLL) || l_330) , (****l_270))))
                { 
                    (**l_269) = l_331;
                }
                else
                { 
                    uint8_t *l_358 = &g_301;
                    uint16_t *l_364 = (void*)0;
                    uint16_t *l_365 = &g_298;
                    int64_t l_366[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_366[i] = (-9L);
                    (*l_239) = (p_49 & (!p_48));
                    (*l_243) = ((1UL | (((((~p_48) == ((*l_331) &= (l_336 == (l_337 , l_338)))) < (g_298 , (((((void*)0 != &g_58) | 0x5409L) , l_255) , 4UL))) ^ p_48) > p_49)) >= 0L);
                    (*l_234) ^= (safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((4L >= ((safe_div_func_int16_t_s_s((l_345 , (safe_mul_func_int16_t_s_s((((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((((((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u(((*l_365) = (l_358 == (((safe_unary_minus_func_uint32_t_u(((safe_lshift_func_uint8_t_u_u(3UL, l_337)) > (safe_lshift_func_int16_t_s_u((p_49 && p_50), 4))))) >= g_4) , (void*)0))), p_50)) && g_87[3][2][5]), p_49)), g_292)) , l_366[0]) & (-4L)) | l_366[0]) , g_58), p_48)), g_87[3][2][5])) || 0xE4FF2E12BC1A5B93LL) | (**g_109)), p_49))), l_337)) && (****l_270))), 0L)), (*l_242)));
                    (*l_331) |= 0x602FBBF1L;
                }
            }
            else
            { 
                (***l_270) = (***l_270);
            }
            ++l_376[0];
        }
        for (p_48 = (-14); (p_48 != 14); p_48++)
        { 
            uint32_t l_381[6];
            int32_t l_384[6][4];
            int i, j;
            for (i = 0; i < 6; i++)
                l_381[i] = 0xFC633036L;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 4; j++)
                    l_384[i][j] = 0xE0B8788BL;
            }
            l_381[5]++;
            g_388--;
        }
    }
    else
    { 
        const int64_t l_391 = 0x1635A15DC25C0CCELL;
        int32_t l_392[1];
        int32_t l_393[5][4][5] = {{{0x584166A8L,0xEEAF6CE8L,0x584166A8L,0x72CEACCEL,0xE8962453L},{0L,1L,2L,0xAD33EABCL,0L},{0xE8962453L,0x36108B81L,(-1L),(-1L),0x36108B81L},{0xAFFFFF64L,(-7L),2L,0L,0x2E5B7DD7L}},{{0xEEAF6CE8L,8L,0x584166A8L,0xFA85D347L,0x6B17746CL},{0x3F74C426L,0xAFFFFF64L,0xAFFFFF64L,0x3F74C426L,0x88DFEA1CL},{0xEEAF6CE8L,(-1L),1L,(-1L),0xFA85D347L},{0xAFFFFF64L,0L,0L,2L,0L}},{{0xE8962453L,0xE8962453L,0xFA85D347L,(-1L),1L},{0L,0xAD33EABCL,0x88DFEA1CL,0x3F74C426L,0xAFFFFF64L},{0x584166A8L,0xFA85D347L,0x6B17746CL,0xFA85D347L,0x584166A8L},{8L,0xAD33EABCL,0x2E5B7DD7L,0L,2L}},{{(-1L),0xE8962453L,0x36108B81L,(-1L),(-1L)},{0L,0L,0L,0xAD33EABCL,2L},{(-1L),(-1L),0xE8962453L,0x72CEACCEL,0x584166A8L},{2L,0xAFFFFF64L,1L,1L,0xAFFFFF64L}},{{0x36108B81L,8L,0xE8962453L,0x584166A8L,1L},{0L,(-7L),0L,0x88DFEA1CL,0L},{0xE32688C6L,0x36108B81L,0x36108B81L,0xE32688C6L,0xFA85D347L},{0L,1L,0x2E5B7DD7L,8L,0x88DFEA1CL}}};
        uint64_t **l_412 = (void*)0;
        uint64_t ** const *l_411 = &l_412;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_392[i] = 0x19645AC1L;
        (*l_239) = p_50;
        (*l_230) ^= (*l_244);
        for (g_229 = 0; (g_229 <= 2); g_229 += 1)
        { 
            int32_t l_394 = 8L;
            int32_t l_395 = 0x67ABEF21L;
            int32_t l_396 = 1L;
            int32_t l_397 = (-2L);
            int32_t l_398 = 0L;
            int32_t l_399 = 0x21464A10L;
            int32_t l_400[5];
            int64_t l_401 = 0xCF827620FA5E4E82LL;
            int8_t l_402 = 9L;
            int32_t l_403 = (-8L);
            int i;
            for (i = 0; i < 5; i++)
                l_400[i] = 0L;
            l_245[g_229] = p_50;
            if (l_391)
                break;
            ++l_404[2];
            (*l_231) = ((*l_331) ^= (safe_lshift_func_uint8_t_u_s((1L || (safe_lshift_func_int8_t_s_u(((l_411 == &l_412) <= l_413[3][0]), ((safe_rshift_func_int16_t_s_u(((g_171 != g_171) & ((l_416[2][1] , p_50) ^ 4294967292UL)), 12)) != 248UL)))), g_58)));
        }
        g_417++;
    }
    (*l_331) ^= 0xD2232DE3L;
    g_421 = ((*g_109) = (*g_109));
    return (*l_238);
}



static int16_t  func_51(int8_t * p_52, const uint8_t  p_53, uint32_t  p_54, const uint16_t  p_55, int32_t * p_56)
{ 
    uint8_t l_122 = 1UL;
    int32_t l_125 = 0x4B05BB3EL;
    uint64_t *l_142[3][7][6] = {{{&g_121,&g_121,&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121,(void*)0,&g_121},{&g_121,&g_121,&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121,(void*)0,&g_121},{&g_121,&g_121,&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121,&g_121,&g_121},{(void*)0,&g_121,&g_121,&g_121,&g_121,&g_121}},{{&g_121,&g_121,&g_121,&g_121,&g_121,&g_121},{(void*)0,&g_121,&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,(void*)0,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121,&g_121,(void*)0},{&g_121,&g_121,(void*)0,&g_121,(void*)0,&g_121}},{{&g_121,(void*)0,&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121,&g_121,&g_121},{&g_121,(void*)0,&g_121,&g_121,(void*)0,&g_121},{&g_121,&g_121,&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121,&g_121,&g_121}}};
    uint64_t ** const l_141 = &l_142[0][0][4];
    int64_t l_168 = 6L;
    int32_t l_178 = 1L;
    int32_t l_179 = 0x9FA56181L;
    int32_t l_180 = 0x5D37358AL;
    int32_t l_182 = 0x7FBBC700L;
    int32_t l_185 = 0xB302B97FL;
    int32_t l_186 = 0L;
    int32_t l_187[2][4];
    uint64_t *l_217 = &g_121;
    uint64_t ** const l_216[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint64_t ** const *l_215 = &l_216[3];
    int64_t *l_226 = &l_168;
    int64_t **l_225 = &l_226;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_187[i][j] = 0x26B19A00L;
    }
    for (g_6 = 0; (g_6 < 3); g_6++)
    { 
        uint32_t l_88 = 4294967293UL;
        int32_t **l_111 = (void*)0;
        uint64_t l_123 = 0xB5813BB0F311A8DCLL;
        int32_t l_124[3][7][2] = {{{0L,0L},{0L,0x4F05509CL},{0L,0L},{0L,0L},{0L,0x4F05509CL},{0L,0L},{0L,0L}},{{0L,0x4F05509CL},{0L,0L},{0L,0L},{0L,0x4F05509CL},{0L,0L},{0L,0L},{0L,0x4F05509CL}},{{0L,0L},{0L,0L},{0L,0x4F05509CL},{0L,0L},{0L,0L},{0L,0x4F05509CL},{0L,0L}}};
        int32_t l_126[6][6][2] = {{{1L,0x7419DF02L},{0L,0L},{0L,0x7419DF02L},{1L,0x7419DF02L},{0L,0L},{0L,0x7419DF02L}},{{1L,0x7419DF02L},{0L,0L},{0L,0x7419DF02L},{1L,0x7419DF02L},{0L,0L},{0L,0x7419DF02L}},{{1L,0x7419DF02L},{0L,0L},{0L,0x7419DF02L},{1L,0x7419DF02L},{0L,0L},{0L,0x7419DF02L}},{{1L,0x7419DF02L},{0L,0L},{0L,0x7419DF02L},{1L,0x7419DF02L},{0L,0L},{0L,0x7419DF02L}},{{1L,0x7419DF02L},{0L,0L},{0L,0x7419DF02L},{1L,0x7419DF02L},{0L,0L},{0L,0x7419DF02L}},{{1L,0x7419DF02L},{0L,0L},{0L,0x7419DF02L},{1L,0x7419DF02L},{0L,0L},{0L,0x7419DF02L}}};
        int64_t l_153 = (-6L);
        int i, j, k;
    }
    return l_187[0][2];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_87[i][j][k], "g_87[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_368[i][j], "g_368[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_385[i], "g_385[i]", print_hash_value);

    }
    transparent_crc(g_388, "g_388", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_423.f0.f0, "g_423.f0.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_465[i], "g_465[i]", print_hash_value);

    }
    transparent_crc(g_586, "g_586", print_hash_value);
    transparent_crc(g_602, "g_602", print_hash_value);
    transparent_crc(g_637, "g_637", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_638[i][j], "g_638[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_727.f0, "g_727.f0", print_hash_value);
    transparent_crc(g_774, "g_774", print_hash_value);
    transparent_crc(g_779, "g_779", print_hash_value);
    transparent_crc(g_788, "g_788", print_hash_value);
    transparent_crc(g_835, "g_835", print_hash_value);
    transparent_crc(g_896, "g_896", print_hash_value);
    transparent_crc(g_897, "g_897", print_hash_value);
    transparent_crc(g_898, "g_898", print_hash_value);
    transparent_crc(g_899, "g_899", print_hash_value);
    transparent_crc(g_900, "g_900", print_hash_value);
    transparent_crc(g_901, "g_901", print_hash_value);
    transparent_crc(g_902, "g_902", print_hash_value);
    transparent_crc(g_903, "g_903", print_hash_value);
    transparent_crc(g_904, "g_904", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_905[i][j], "g_905[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_906[i], "g_906[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_907[i], "g_907[i]", print_hash_value);

    }
    transparent_crc(g_908, "g_908", print_hash_value);
    transparent_crc(g_909, "g_909", print_hash_value);
    transparent_crc(g_910, "g_910", print_hash_value);
    transparent_crc(g_911, "g_911", print_hash_value);
    transparent_crc(g_912, "g_912", print_hash_value);
    transparent_crc(g_913, "g_913", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_914[i], "g_914[i]", print_hash_value);

    }
    transparent_crc(g_915, "g_915", print_hash_value);
    transparent_crc(g_916, "g_916", print_hash_value);
    transparent_crc(g_917, "g_917", print_hash_value);
    transparent_crc(g_918, "g_918", print_hash_value);
    transparent_crc(g_1024, "g_1024", print_hash_value);
    transparent_crc(g_1062, "g_1062", print_hash_value);
    transparent_crc(g_1157, "g_1157", print_hash_value);
    transparent_crc(g_1250, "g_1250", print_hash_value);
    transparent_crc(g_1287, "g_1287", print_hash_value);
    transparent_crc(g_1324, "g_1324", print_hash_value);
    transparent_crc(g_1337, "g_1337", print_hash_value);
    transparent_crc(g_1405, "g_1405", print_hash_value);
    transparent_crc(g_1414, "g_1414", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1429[i][j][k], "g_1429[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
