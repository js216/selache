// SPDX-License-Identifier: MIT
// cctest_csmith_d2186d6c.c --- cctest case csmith_d2186d6c (csmith seed 3524816236)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa7672ff0 */
/* @exp_ticks 0x45c0 */

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

// Options:   -s 3524816236 -o /tmp/csmith_gen_g7c_k8l0/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   uint8_t  f1;
   uint8_t  f2;
   int32_t  f3;
   const uint32_t  f4;
};

union U1 {
   const int64_t  f0;
   int32_t  f1;
   int64_t  f2;
   int64_t  f3;
};


static int32_t g_2[3][2] = {{0L,0L},{0L,0L},{0L,0L}};
static uint8_t g_20 = 9UL;
static uint16_t g_62 = 0x1B61L;
static int32_t g_63 = 1L;
static uint64_t g_103 = 0x1F35E5FA5926F2DCLL;
static int32_t g_112 = 0xBDB14249L;
static int16_t g_113 = 0xFC80L;
static uint32_t g_114 = 0x337E5C35L;
static uint32_t g_117[4][5] = {{4294967286UL,1UL,4294967295UL,1UL,4294967286UL},{0x179A9341L,0x99A09347L,0x4FF34EAFL,0x99A09347L,0x179A9341L},{4294967286UL,1UL,4294967295UL,1UL,4294967286UL},{0x179A9341L,0x99A09347L,0x4FF34EAFL,0x99A09347L,0x179A9341L}};
static uint16_t g_146 = 65535UL;
static uint8_t g_147 = 0xECL;
static int32_t g_152 = (-1L);
static int32_t g_153 = 9L;
static int64_t g_157[4] = {(-3L),(-3L),(-3L),(-3L)};
static int16_t g_158 = 0xD1CFL;
static uint8_t g_160 = 0xB5L;
static uint32_t g_176 = 0x5094A51AL;
static uint8_t g_193 = 253UL;
static int32_t g_217 = 0L;
static uint64_t g_218 = 3UL;
static struct S0 g_232 = {18446744073709551610UL,0x30L,254UL,1L,1UL};
static int32_t g_306 = 1L;
static uint16_t g_307[1][2] = {{0xB956L,0xB956L}};
static int64_t g_310 = 0x8A1A9F4418AE1823LL;



static uint32_t  func_1(void);
static int32_t  func_3(uint32_t  p_4, struct S0  p_5, int32_t  p_6, int16_t  p_7);
static struct S0  func_8(struct S0  p_9, uint32_t  p_10);
static uint32_t  func_22(int32_t  p_23, uint16_t  p_24, uint32_t  p_25, uint32_t  p_26, uint32_t  p_27);




static uint32_t  func_1(void)
{ 
    struct S0 l_11 = {0xA8FECF79L,0x1EL,0x24L,0L,4294967295UL};
    int32_t l_313 = 0xA63A71FDL;
    uint8_t l_326 = 0x49L;
    int32_t l_344 = 0xA1A88FA0L;
    int64_t l_353[2][5] = {{0x5C6F841FF86E4672LL,0x5C6F841FF86E4672LL,0x5C6F841FF86E4672LL,0x5C6F841FF86E4672LL,0x5C6F841FF86E4672LL},{1L,1L,1L,1L,1L}};
    int i, j;
    g_310 |= (g_2[1][1] , func_3(g_2[1][1], func_8(l_11, l_11.f3), l_11.f0, l_11.f4));
    g_152 = (safe_mul_func_int8_t_s_s((l_313 = (0x481CL > 0xF72FL)), ((safe_div_func_int64_t_s_s((safe_mod_func_uint32_t_u_u(l_11.f1, (g_158 | 5L))), g_20)) && l_11.f3)));
    if ((((g_232.f0 == ((g_193 , (l_11.f4 == (safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s((func_8(((safe_rshift_func_int16_t_s_u((((safe_add_func_uint8_t_u_u((l_313 = l_326), g_232.f1)) , g_62) ^ g_114), 9)) , l_11), l_11.f1) , l_326), 9L)), 0UL)))) <= 0xE09FL)) == g_310) , l_11.f4))
    { 
        uint32_t l_331 = 0x5E57BF45L;
        int32_t l_337 = 0xB87DF7D0L;
        g_112 = ((l_313 = (((l_337 = ((safe_mul_func_int8_t_s_s(((l_331 = (--g_218)) & (safe_add_func_int64_t_s_s(l_11.f1, g_232.f3))), (~0xEC8A2884L))) || ((safe_rshift_func_uint8_t_u_u((l_11.f0 > l_331), g_160)) || g_310))) , 18446744073709551615UL) != (-1L))) | g_62);
    }
    else
    { 
        uint32_t l_340 = 18446744073709551615UL;
        int32_t l_341 = (-1L);
        int32_t l_358[4] = {0x29210150L,0x29210150L,0x29210150L,0x29210150L};
        int i;
        if ((l_341 = (g_152 = (l_340 && ((0x1AFCL || (0xD92CL > 65535UL)) != g_157[3])))))
        { 
            for (l_340 = 0; (l_340 > 14); l_340 = safe_add_func_int64_t_s_s(l_340, 4))
            { 
                uint32_t l_345[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_345[i] = 0UL;
                l_345[0]--;
            }
        }
        else
        { 
            uint8_t l_348 = 255UL;
            l_348 = 1L;
            for (g_147 = (-29); (g_147 == 48); g_147 = safe_add_func_int8_t_s_s(g_147, 9))
            { 
                l_341 = (-1L);
            }
            l_358[2] = (safe_rshift_func_int8_t_s_s((l_353[1][2] || (g_152 & (l_313 = (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(g_63, (l_341 = 0x99L))), l_340))))), 7));
        }
        l_358[2] = ((safe_mod_func_int32_t_s_s(l_11.f4, l_358[3])) | ((l_341 = (1UL > (((func_8(l_11, g_20) , g_307[0][1]) , (-9L)) != l_340))) != 0L));
        l_313 ^= ((safe_rshift_func_uint16_t_u_u(l_11.f1, (g_232.f4 > (safe_add_func_int64_t_s_s((-3L), g_307[0][1]))))) == l_353[0][2]);
    }
    return g_157[3];
}



static int32_t  func_3(uint32_t  p_4, struct S0  p_5, int32_t  p_6, int16_t  p_7)
{ 
    uint64_t l_251 = 18446744073709551609UL;
    int32_t l_255 = (-2L);
    int32_t l_283 = (-10L);
    int16_t l_301 = 0xF908L;
    int32_t l_303[1];
    int i;
    for (i = 0; i < 1; i++)
        l_303[i] = 0x81C1D833L;
    for (g_193 = 0; (g_193 <= 3); g_193 += 1)
    { 
        int32_t l_254 = 0xB7656483L;
        int32_t l_260 = (-1L);
        int32_t l_292 = 0xC719AC70L;
        int32_t l_298 = (-10L);
        int32_t l_299 = 0x75361B7BL;
        int32_t l_300 = 0xFF711D36L;
        int32_t l_302 = 0L;
        int32_t l_304 = 0L;
        int32_t l_305 = (-8L);
        int i;
        if (((g_157[g_193] != (safe_sub_func_int32_t_s_s(((g_157[3] && (g_152 = (g_112 <= (((g_157[g_193] ^ 7L) || 4L) , g_157[3])))) && 1UL), p_5.f2))) , (-2L)))
        { 
            uint32_t l_253 = 9UL;
            int32_t l_256 = 0x58BBB98BL;
            int32_t l_257 = 1L;
            for (g_232.f2 = 0; (g_232.f2 <= 3); g_232.f2 += 1)
            { 
                uint32_t l_252 = 0xC6167947L;
                int32_t l_258 = 0x14725579L;
                int32_t l_259 = 1L;
                uint32_t l_261 = 0x146C4033L;
                l_257 = (((safe_add_func_uint64_t_u_u(5UL, (((safe_add_func_int64_t_s_s(((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint32_t_u_u(((l_256 = ((l_254 = ((safe_sub_func_uint8_t_u_u(p_4, g_2[0][0])) <= ((((((safe_sub_func_int16_t_s_s((l_251 = (safe_sub_func_uint8_t_u_u((safe_div_func_int64_t_s_s((-1L), g_232.f1)), 0x83L))), p_5.f3)) == g_157[3]) | g_146) | l_252) && l_253) || 1L))) > l_255)) | 1L), l_252)) && 1L), g_232.f0)) , 0x6F503D31593233A8LL), p_5.f2)) | 0xBDL) , g_20))) || g_147) < p_5.f2);
                l_261++;
            }
        }
        else
        { 
            uint8_t l_264 = 6UL;
            int32_t l_270 = 0x47ADA871L;
            int32_t l_296[3][5][1];
            int16_t l_297 = (-3L);
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 5; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_296[i][j][k] = 0xBF798E07L;
                }
            }
            l_260 = ((l_264 ^ (safe_sub_func_uint64_t_u_u((((g_217 ^ ((l_270 &= ((safe_sub_func_uint8_t_u_u(((((((~250UL) , 65535UL) <= p_5.f4) , 1L) ^ 0x17L) > p_5.f0), l_264)) ^ 0L)) & g_117[2][1])) <= 0xA89D31CD22D570F6LL) < g_157[1]), 0x47CAE2238FF03833LL))) , l_260);
            for (p_5.f1 = 0; (p_5.f1 <= 3); p_5.f1 += 1)
            { 
                int16_t l_273 = (-5L);
                if (l_255)
                    break;
                l_283 ^= (safe_lshift_func_uint16_t_u_s((((l_273 <= ((((((safe_div_func_int32_t_s_s(((+g_117[2][1]) <= ((safe_add_func_uint64_t_u_u((l_255 = ((((safe_add_func_uint64_t_u_u(p_5.f4, (((safe_lshift_func_int16_t_s_u((-1L), 3)) > p_5.f0) || 65528UL))) ^ p_6) < g_117[2][1]) , g_160)), 6L)) || g_160)), g_114)) | g_146) != l_251) != g_157[3]) >= g_103) ^ 6UL)) , 0x17EA6B481F414D78LL) | 18446744073709551606UL), p_5.f0));
                g_63 = (safe_add_func_int64_t_s_s((p_5.f4 > 0xA4C5L), (-1L)));
            }
            if (l_264)
            { 
                int8_t l_295 = 8L;
                l_292 ^= (0x6AFA11A2L <= (((safe_mod_func_int16_t_s_s((((+((safe_unary_minus_func_int64_t_s((((p_5.f2 = 255UL) ^ (((safe_div_func_int64_t_s_s(l_260, g_152)) >= l_270) , l_260)) > g_217))) > g_114)) && (-1L)) , g_20), l_264)) & g_117[2][1]) ^ g_63));
                l_296[2][1][0] |= (safe_mul_func_uint16_t_u_u(l_295, l_295));
            }
            else
            { 
                l_255 = 3L;
                l_297 ^= p_4;
            }
        }
        --g_307[0][1];
        l_255 = l_302;
        for (p_5.f0 = 0; (p_5.f0 <= 1); p_5.f0 += 1)
        { 
            return g_157[2];
        }
    }
    return l_301;
}



static struct S0  func_8(struct S0  p_9, uint32_t  p_10)
{ 
    const int8_t l_12 = 0L;
    int32_t l_21 = 0x40DFE9F4L;
    uint8_t l_194 = 5UL;
    int32_t l_212 = 0x74CEC627L;
    int32_t l_213 = (-8L);
    int32_t l_214 = (-5L);
    int32_t l_215[4] = {(-4L),(-4L),(-4L),(-4L)};
    int8_t l_216 = 0x77L;
    int16_t l_231 = 0x3958L;
    int i;
    if ((l_12 >= (!(safe_sub_func_uint16_t_u_u((p_9.f0 , (g_2[1][1] >= (l_21 = (((safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u((((g_20 = (l_12 | l_12)) && g_20) && g_20), l_12)), g_2[1][1])) , g_20) & g_2[1][1])))), p_9.f1)))))
    { 
        uint32_t l_28[4][2];
        union U1 l_197[3] = {{1L},{1L},{1L}};
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
                l_28[i][j] = 4294967287UL;
        }
        g_152 &= (((func_22(p_9.f2, g_2[1][1], l_28[3][0], ((-1L) && p_10), p_9.f2) == g_2[1][1]) == p_9.f0) , g_2[0][0]);
        for (p_10 = 0; (p_10 <= 3); p_10 += 1)
        { 
            for (p_9.f1 = 0; (p_9.f1 <= 3); p_9.f1 += 1)
            { 
                int32_t l_198[4][2] = {{0x555FCFD5L,0x35077A8CL},{0x555FCFD5L,0x555FCFD5L},{0x35077A8CL,0x555FCFD5L},{0x555FCFD5L,0x35077A8CL}};
                int i, j;
                ++l_194;
                g_152 = 4L;
                l_198[1][0] = (g_157[p_9.f1] || (l_197[1] , (-1L)));
            }
            if (p_9.f2)
                break;
            for (g_158 = 0; (g_158 <= 3); g_158 += 1)
            { 
                g_112 = g_158;
                if (l_12)
                    continue;
                if (g_152)
                    goto lbl_221;
            }
        }
    }
    else
    { 
        uint8_t l_207 = 0xE6L;
        l_207 = ((safe_lshift_func_int16_t_s_s((!g_147), (safe_lshift_func_int16_t_s_u((~(safe_mul_func_int16_t_s_s(1L, l_12))), 10)))) != ((p_10 = 0x1EFC389EL) <= p_9.f0));
        g_152 ^= (safe_lshift_func_uint8_t_u_s(p_9.f1, (safe_rshift_func_int16_t_s_u(((p_9.f4 | (g_63 == (l_207 && p_9.f2))) || p_9.f1), g_112))));
    }
lbl_221:
    g_218--;
    l_21 = ((l_231 = ((l_213 = (((safe_sub_func_int16_t_s_s(g_2[1][1], (l_213 == (safe_mul_func_int16_t_s_s((~((safe_sub_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(l_194, (((((l_215[2] = 0x60850B4F93AD4E58LL) || g_193) | l_21) && l_194) | 0x941DL))), 0UL)) | 0L)), l_214))))) | 0x9FA4E0B6L) && p_9.f2)) == p_9.f4)) >= 2L);
    return g_232;
}



static uint32_t  func_22(int32_t  p_23, uint16_t  p_24, uint32_t  p_25, uint32_t  p_26, uint32_t  p_27)
{ 
    struct S0 l_31 = {18446744073709551614UL,0xFDL,0x79L,0xEB476352L,4UL};
    union U1 l_38 = {0xDCB0C7B249E3C8D3LL};
    int32_t l_43 = 1L;
    uint32_t l_61 = 0xF573153EL;
    int64_t l_99 = 1L;
    int32_t l_106 = 0xA6105BDFL;
    int32_t l_110 = 5L;
    int32_t l_111[3];
    int i;
    for (i = 0; i < 3; i++)
        l_111[i] = 0x40135D84L;
    l_43 = (safe_lshift_func_uint8_t_u_s((p_26 && (l_31 , (safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((l_38 , ((((((safe_lshift_func_uint16_t_u_s((((safe_lshift_func_int8_t_s_u(p_26, 0)) < l_31.f2) | p_24), l_38.f0)) < g_20) & g_2[1][1]) != p_25) <= 0xA24E228CL) <= g_2[1][1])), 11)), 4294967295UL)), g_2[1][0])))), 2));
    if ((g_62 &= (p_26 & (safe_mul_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(5UL, 1UL)), (safe_sub_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(((+((safe_mod_func_int16_t_s_s(((l_43 &= (safe_sub_func_uint16_t_u_u(((p_27 = l_31.f0) | g_20), l_38.f2))) ^ 1L), g_2[1][1])) , l_31.f2)) == 0UL), 1L)) & l_61), p_26)), 0UL)))) & g_20) | g_2[1][1]), 0xA5L)))))
    { 
        uint64_t l_67 = 0xA01C9AC7196A48ADLL;
        int32_t l_100 = 0x91AC48AEL;
        int32_t l_101 = 0L;
        g_63 ^= (g_2[0][1] ^ (p_25 <= p_26));
        if (g_20)
        { 
            uint64_t l_80 = 0x72093AA688ECCDF3LL;
            const int8_t l_85 = 0xE0L;
            int32_t l_109[3][3] = {{(-1L),(-1L),(-1L)},{1L,1L,1L},{(-1L),(-1L),(-1L)}};
            int i, j;
            for (p_24 = 0; (p_24 != 45); ++p_24)
            { 
                int32_t l_66 = 0x79D740F4L;
                l_43 = (l_66 = 0xB84767EEL);
                l_67 ^= 7L;
                if (l_67)
                    continue;
            }
            if ((g_63 = (((g_20 || (safe_div_func_uint32_t_u_u(g_20, (-1L)))) || (safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u((l_80 = ((0x6FL <= 0x31L) || g_62)), g_2[1][1])) & 0x1A33L), g_2[0][1])), 0x4AL)) || p_23) == p_24), g_2[1][1])), (-9L)))) ^ (-3L))))
            { 
                uint8_t l_98 = 249UL;
                g_63 = (((safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((l_85 != (0xA172L | ((((safe_mul_func_uint16_t_u_u(((7UL <= ((((safe_lshift_func_int16_t_s_u((l_43 = (((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u(((g_20 || 9L) , g_62), l_85)), p_23)), l_85)), g_2[1][1])) , g_20) || l_80)), l_80)) == l_80) == 0xB5L) , p_26)) , p_27), 0x00F8L)) && l_98) != 0x717EL) > p_24))) < l_98), 0xE0L)), p_27)) <= g_63) || 0xE2787FF9E38BD601LL);
                l_99 = (-4L);
            }
            else
            { 
                int32_t l_102 = 7L;
                int32_t l_107 = 0xA3ACD9B7L;
                int32_t l_108[2][1][4];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 4; k++)
                            l_108[i][j][k] = 0xE8C80964L;
                    }
                }
                g_103++;
                g_114++;
                g_117[2][1]++;
            }
        }
        else
        { 
            g_112 ^= (g_63 = ((safe_mul_func_int8_t_s_s((0xC8L == (0xB7DEL <= (p_23 != (safe_mod_func_int64_t_s_s((safe_sub_func_int32_t_s_s(l_100, (-8L))), g_117[2][1]))))), p_26)) == p_24));
        }
    }
    else
    { 
        uint16_t l_130 = 65530UL;
        int32_t l_137[5] = {1L,1L,1L,1L,1L};
        int i;
        g_112 = ((safe_sub_func_int16_t_s_s(g_20, (safe_mul_func_uint8_t_u_u(l_130, g_117[1][3])))) & ((g_63 && p_23) & 1L));
lbl_163:
        for (l_31.f0 = 11; (l_31.f0 >= 45); l_31.f0++)
        { 
            uint32_t l_145 = 0xF38B7723L;
            int32_t l_154 = 1L;
            int32_t l_155 = 0xA49417E0L;
            int32_t l_156 = 0xBF8BA2E1L;
            int32_t l_159[1];
            int i;
            for (i = 0; i < 1; i++)
                l_159[i] = 0x1D0C905CL;
            if ((l_137[1] = (((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((l_43 |= 0L) && (g_2[1][1] != l_61)) == 1L), 0xD8L)), 0xA62BL)) <= g_62) > 0x06F175425EB36728LL)))
            { 
                int16_t l_140 = 1L;
                int32_t l_148 = 0x82EC59D2L;
                l_148 = (((((safe_add_func_uint64_t_u_u(0x0BCD743813938A05LL, l_140)) == (safe_sub_func_int8_t_s_s((g_147 = (g_146 &= ((l_43 == (safe_mul_func_uint16_t_u_u(l_137[2], 0x7383L))) & l_145))), l_140))) <= g_2[0][1]) & g_113) > l_31.f1);
                if (l_61)
                    goto lbl_163;
                if (g_2[1][1])
                    continue;
                g_63 = ((safe_sub_func_uint32_t_u_u(4294967286UL, l_145)) , p_24);
            }
            else
            { 
                int16_t l_151 = 0x6CF2L;
                return l_151;
            }
            g_160--;
        }
        g_63 &= ((g_146 = g_112) ^ ((safe_mul_func_uint16_t_u_u(((((safe_mod_func_uint64_t_u_u((g_176 = ((safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s(0L, (safe_mod_func_uint64_t_u_u((g_103 = ((safe_mod_func_int64_t_s_s(g_117[2][1], (l_137[3] = l_38.f2))) == g_153)), g_117[1][2])))), (-1L))) || 0L)), 0x2663EEDCE3446011LL)) != 0x7CL) <= (-1L)) > p_25), 8L)) ^ g_114));
    }
    l_110 = (safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((g_193 |= (l_43 |= (safe_div_func_int32_t_s_s((((g_103 != ((safe_mod_func_int16_t_s_s(((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((((g_63 , (safe_lshift_func_int8_t_s_u(g_158, (safe_div_func_int32_t_s_s(1L, l_31.f1))))) != 0x17A2L) , l_38.f1) , l_38.f1), 1L)), p_25)) || 0L), p_27)) | g_112)) >= p_25) | l_110), (-1L))))), 0x85L)), 1L));
    return l_43;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_117[i][j], "g_117[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_157[i], "g_157[i]", print_hash_value);

    }
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_232.f0, "g_232.f0", print_hash_value);
    transparent_crc(g_232.f1, "g_232.f1", print_hash_value);
    transparent_crc(g_232.f2, "g_232.f2", print_hash_value);
    transparent_crc(g_232.f3, "g_232.f3", print_hash_value);
    transparent_crc(g_232.f4, "g_232.f4", print_hash_value);
    transparent_crc(g_306, "g_306", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_307[i][j], "g_307[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_310, "g_310", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
