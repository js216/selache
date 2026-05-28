// SPDX-License-Identifier: MIT
// cctest_csmith_4b3cc143.c --- cctest case csmith_4b3cc143 (csmith seed 1262272835)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xac36f61c */
/* @exp_ticks 0x6589 */

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

// Options:   -s 1262272835 -o /tmp/csmith_gen_12lntvgv/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int64_t  f0;
   uint32_t  f1;
   uint32_t  f2;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   struct S0  f0;
   int64_t  f1;
   uint16_t  f2;
   int16_t  f3;
};
#pragma pack(pop)

union U2 {
   const struct S1  f0;
   uint32_t  f1;
   const struct S1  f2;
};


static int64_t g_16 = 0x55A41183D96456CFLL;
static union U2 g_39 = {{{0xF9A5DE3B0BAB1DDALL,0x48D5C880L,0xC708470FL},-4L,0x16D2L,0x1A92L}};
static uint64_t g_41 = 0xACC98CB2CAB94E7FLL;
static int8_t g_60 = (-2L);
static uint8_t g_62[3] = {0x5DL,0x5DL,0x5DL};
static struct S1 g_63 = {{0xC0C019F83A3BBF17LL,18446744073709551615UL,0xD493DC33L},1L,0x6C25L,0xDA8AL};
static uint8_t g_76[2][2][3] = {{{0UL,0UL,0UL},{0UL,0UL,0UL}},{{0UL,0UL,0UL},{0UL,0UL,0UL}}};
static int32_t g_79 = 0xFCC27DDDL;
static int16_t g_80[3][5][4] = {{{1L,0x5B7DL,1L,0x5B7DL},{1L,0x5B7DL,1L,0x5B7DL},{1L,0x5B7DL,1L,0x5B7DL},{1L,0x5B7DL,1L,0x5B7DL},{1L,0x5B7DL,1L,0x5B7DL}},{{1L,0x5B7DL,1L,0x5B7DL},{1L,0x5B7DL,1L,0x5B7DL},{1L,0x5B7DL,1L,0x5B7DL},{1L,0x5B7DL,1L,0x5B7DL},{1L,0x5B7DL,1L,0x5B7DL}},{{1L,0x5B7DL,1L,0x5B7DL},{1L,0x5B7DL,1L,0x5B7DL},{1L,0x5B7DL,1L,0x5B7DL},{1L,0x5B7DL,1L,0x5B7DL},{1L,0x5B7DL,1L,0x5B7DL}}};
static int16_t g_81[2][5] = {{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L}};
static int32_t g_83 = 0x8209D23EL;
static uint32_t g_84[5][1][2] = {{{0x47C33E8CL,1UL}},{{0x85757710L,0x47C33E8CL}},{{0x957D00FEL,0x957D00FEL}},{{0x957D00FEL,0x47C33E8CL}},{{0x85757710L,1UL}}};
static int32_t g_119[3][5][4] = {{{(-1L),0xBA4BFDF7L,0x34B2721DL,(-1L)},{0x6C55944BL,0xCF313D32L,0x6C55944BL,1L},{0xA7280278L,1L,0x21B83128L,(-1L)},{1L,0xBA4BFDF7L,0L,1L},{2L,(-1L),0L,0x34B2721DL}},{{1L,0x526C4551L,0x21B83128L,0xA7280278L},{0xA7280278L,0L,0x6C55944BL,0xA76C0FFBL},{0x6C55944BL,0xA76C0FFBL,0x34B2721DL,0x34B2721DL},{(-1L),(-1L),1L,(-7L)},{(-1L),0xBA4BFDF7L,1L,(-1L)}},{{0x6C55944BL,(-7L),0xA4FD995BL,1L},{0xA76C0FFBL,(-7L),0x21B83128L,(-1L)},{(-7L),0xBA4BFDF7L,(-5L),(-7L)},{2L,(-1L),0xBA4BFDF7L,0x34B2721DL},{0xCF313D32L,0xA76C0FFBL,0x21B83128L,0xA76C0FFBL}}};
static int8_t g_151 = 1L;



static uint64_t  func_1(void);
static int64_t  func_2(struct S0  p_3, struct S1  p_4, struct S1  p_5);
static struct S0  func_6(const uint64_t  p_7, int8_t  p_8, uint16_t  p_9, struct S0  p_10);
static struct S1  func_11(int32_t  p_12, struct S1  p_13);




static uint64_t  func_1(void)
{ 
    int64_t l_14 = 1L;
    struct S1 l_15[4] = {{{0x5BB085CA7DBC8B69LL,0x689278A4L,0x11CCFE98L},-6L,65535UL,-5L},{{0x5BB085CA7DBC8B69LL,0x689278A4L,0x11CCFE98L},-6L,65535UL,-5L},{{0x5BB085CA7DBC8B69LL,0x689278A4L,0x11CCFE98L},-6L,65535UL,-5L},{{0x5BB085CA7DBC8B69LL,0x689278A4L,0x11CCFE98L},-6L,65535UL,-5L}};
    uint32_t l_75 = 0xA91AFA9DL;
    int32_t l_77[1];
    union U2 l_112 = {{{-10L,0x44C08691L,0UL},7L,3UL,0xD521L}};
    int32_t l_142[1];
    struct S0 l_150 = {1L,5UL,0UL};
    int i;
    for (i = 0; i < 1; i++)
        l_77[i] = 0x251F2307L;
    for (i = 0; i < 1; i++)
        l_142[i] = 0x375C898DL;
    if ((func_2(func_6((func_11(l_14, l_15[3]) , g_16), l_15[3].f3, l_15[3].f0.f0, l_15[3].f0), l_15[0], l_15[3]) & 0x3F0FF8D21F61EE9ELL))
    { 
        struct S1 l_78 = {{0x1929AE18D8E2A735LL,4UL,0x9F28033DL},1L,0xAE0AL,0x68B7L};
        int32_t l_82 = 0xAB63C8D2L;
        l_78 = func_11((l_77[0] = ((safe_sub_func_uint64_t_u_u((safe_div_func_uint16_t_u_u((g_76[0][1][0] = ((0x99DBL > (safe_mul_func_uint16_t_u_u((g_63.f2 = (safe_sub_func_int8_t_s_s((0x02A9L & ((safe_div_func_uint64_t_u_u(18446744073709551612UL, (+251UL))) ^ l_75)), (-8L)))), 0x655DL))) < 0xD5DDL)), 1L)), 5L)) <= l_15[3].f3)), l_78);
        g_84[2][0][0]--;
    }
    else
    { 
        for (l_14 = (-19); (l_14 >= (-16)); l_14 = safe_add_func_int16_t_s_s(l_14, 1))
        { 
            int64_t l_89 = 0xEB7A0ED4F26B9B1ELL;
            l_77[0] = l_89;
            if (g_62[2])
                break;
            return g_81[0][0];
        }
        l_77[0] = 0L;
    }
    for (g_83 = 0; (g_83 == (-19)); --g_83)
    { 
        int8_t l_98[1][2];
        int32_t l_103[3][5][4] = {{{9L,1L,0L,(-5L)},{0x9ECA2F01L,0x78FC9453L,3L,8L},{(-1L),7L,0xFAB6BA35L,1L},{1L,(-5L),1L,0L},{1L,9L,0x1B348779L,0xEA57A25AL}},{{7L,0x90713B03L,0xEA57A25AL,9L},{3L,0L,0xEA57A25AL,0x9ECA2F01L},{7L,3L,0x1B348779L,(-1L)},{1L,0xFAB6BA35L,1L,1L},{1L,1L,0xFAB6BA35L,1L}},{{(-1L),0x1B348779L,3L,7L},{0x9ECA2F01L,0xEA57A25AL,0L,3L},{9L,0xEA57A25AL,0x90713B03L,7L},{0xEA57A25AL,0x1B348779L,9L,1L},{0L,1L,(-5L),1L}}};
        int32_t l_113 = 6L;
        uint64_t l_140 = 0UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_98[i][j] = (-1L);
        }
        l_113 |= (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(l_98[0][1], (safe_rshift_func_int16_t_s_s((g_81[0][2] = (safe_lshift_func_int16_t_s_u((l_103[0][0][0] |= g_84[2][0][0]), 3))), ((((g_63.f3 |= (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((l_112 , g_80[1][4][3]), l_112.f0.f0.f2)), g_39.f0.f1)) >= g_39.f2.f1), 8)), 0xE2F3L))) > l_112.f2.f2) & (-1L)) || g_39.f2.f1))))), 15)), 0L));
        for (g_63.f3 = 0; (g_63.f3 < 10); g_63.f3 = safe_add_func_uint64_t_u_u(g_63.f3, 5))
        { 
            uint8_t l_143 = 0x7AL;
            g_119[0][0][3] = (safe_unary_minus_func_uint8_t_u((g_62[2] &= (g_39.f2.f0 , (safe_rshift_func_int16_t_s_s(1L, (l_113 >= 65534UL)))))));
            for (g_63.f2 = 0; (g_63.f2 <= 40); g_63.f2++)
            { 
                int64_t l_141 = 0L;
                l_142[0] &= (safe_add_func_uint64_t_u_u((((((safe_div_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((g_62[0] = (((safe_lshift_func_uint8_t_u_s((l_77[0] = ((1L & (safe_sub_func_int8_t_s_s((+((safe_div_func_uint8_t_u_u(0UL, (g_60 ^= (~(l_103[2][2][3] ^= ((g_63.f0.f1 = (safe_sub_func_uint64_t_u_u(((safe_mod_func_uint16_t_u_u(g_76[0][1][0], g_81[0][2])) && 0x8CL), l_140))) , 0x16F8L)))))) , (-3L))), g_62[2]))) == (-6L))), g_39.f0.f3)) && l_103[2][1][3]) && 1UL)), g_39.f0.f0.f2)), l_141)) ^ g_39.f0.f0.f2) < 7L) < g_76[0][1][0]) == g_119[0][0][3]), 6L));
                l_143 ^= (l_140 | g_41);
            }
        }
    }
    g_63 = func_11((g_151 = ((safe_mod_func_int16_t_s_s(((g_41 = (((safe_mul_func_uint8_t_u_u(1UL, (safe_sub_func_uint64_t_u_u(((l_150 = l_112.f2.f0) , g_39.f2.f0.f0), l_75)))) != g_84[0][0][0]) <= g_84[2][0][0])) >= 1UL), g_119[0][0][3])) && 0UL)), g_63);
    return g_39.f2.f2;
}



static int64_t  func_2(struct S0  p_3, struct S1  p_4, struct S1  p_5)
{ 
    uint32_t l_43 = 0x9EC88C48L;
    union U2 l_56[3][4][3] = {{{{{{-5L,0UL,0xA1BBCF58L},0xCD7FECAEFE6362ACLL,0xEDFBL,0x0B84L}},{{{0x4099FA619A7386F5LL,0x60D0FB0CL,4294967295UL},0xD1EA51000939995ELL,0xEEF2L,0xD7ACL}},{{{-2L,0xC9CA9E20L,1UL},0x89EB2EF126ED3048LL,0UL,0x6246L}}},{{{{-1L,1UL,0xC45D42F5L},0x243A6B221C00E8DFLL,65529UL,0x5638L}},{{{1L,1UL,0x9958B7C2L},5L,7UL,0xCD1BL}},{{{-10L,0xAB10ED2AL,4294967294UL},0x4A10173A068EADFDLL,65532UL,0x83BFL}}},{{{{-2L,0xC9CA9E20L,1UL},0x89EB2EF126ED3048LL,0UL,0x6246L}},{{{-5L,0UL,0xA1BBCF58L},0xCD7FECAEFE6362ACLL,0xEDFBL,0x0B84L}},{{{-2L,0xC9CA9E20L,1UL},0x89EB2EF126ED3048LL,0UL,0x6246L}}},{{{{0L,0x15DA4490L,0x71A0B9A4L},0x3E56A0368A9B892DLL,0xD572L,-7L}},{{{0x61728A6F30DCE90FLL,0x208E89F2L,0UL},0xC4EC065BCAC18070LL,0UL,-6L}},{{{0L,0x87377D1CL,4294967294UL},0x499C2BA90BB767B3LL,0x6A3BL,0x0187L}}}},{{{{{0x30E59352247AAA1BLL,0xDF10050AL,0xCCFC7CCEL},0x3564EE88CA977D59LL,0x0F19L,-1L}},{{{0x61728A6F30DCE90FLL,0x208E89F2L,0UL},0xC4EC065BCAC18070LL,0UL,-6L}},{{{0x26FEE090EC5A935BLL,0UL,0xD727E68FL},0xA5D09CABD97907AFLL,65535UL,-2L}}},{{{{1L,1UL,0x9958B7C2L},5L,7UL,0xCD1BL}},{{{-5L,0UL,0xA1BBCF58L},0xCD7FECAEFE6362ACLL,0xEDFBL,0x0B84L}},{{{0x519A63DFDF942F02LL,0x81C6DCE7L,0UL},0L,0xDF76L,1L}}},{{{{-1L,1UL,0xC45D42F5L},0x243A6B221C00E8DFLL,65529UL,0x5638L}},{{{-4L,2UL,0xA6072D4BL},0x270F736FA54FBA12LL,0UL,-1L}},{{{-4L,2UL,0xA6072D4BL},0x270F736FA54FBA12LL,0UL,-1L}}},{{{{-4L,2UL,0xA6072D4BL},0x270F736FA54FBA12LL,0UL,-1L}},{{{0L,0x87377D1CL,4294967294UL},0x499C2BA90BB767B3LL,0x6A3BL,0x0187L}},{{{0x26FEE090EC5A935BLL,0UL,0xD727E68FL},0xA5D09CABD97907AFLL,65535UL,-2L}}}},{{{{{-2L,0xC9CA9E20L,1UL},0x89EB2EF126ED3048LL,0UL,0x6246L}},{{{1L,1UL,0x9958B7C2L},5L,7UL,0xCD1BL}},{{{0x26FEE090EC5A935BLL,0UL,0xD727E68FL},0xA5D09CABD97907AFLL,65535UL,-2L}}},{{{{0x61728A6F30DCE90FLL,0x208E89F2L,0UL},0xC4EC065BCAC18070LL,0UL,-6L}},{{{0x26FEE090EC5A935BLL,0UL,0xD727E68FL},0xA5D09CABD97907AFLL,65535UL,-2L}},{{{-4L,2UL,0xA6072D4BL},0x270F736FA54FBA12LL,0UL,-1L}}},{{{{-10L,0xAB10ED2AL,4294967294UL},0x4A10173A068EADFDLL,65532UL,0x83BFL}},{{{-5L,0UL,0xA1BBCF58L},0xCD7FECAEFE6362ACLL,0xEDFBL,0x0B84L}},{{{0x30E59352247AAA1BLL,0xDF10050AL,0xCCFC7CCEL},0x3564EE88CA977D59LL,0x0F19L,-1L}}},{{{{0x26FEE090EC5A935BLL,0UL,0xD727E68FL},0xA5D09CABD97907AFLL,65535UL,-2L}},{{{0x26FEE090EC5A935BLL,0UL,0xD727E68FL},0xA5D09CABD97907AFLL,65535UL,-2L}},{{{-5L,0UL,0xA1BBCF58L},0xCD7FECAEFE6362ACLL,0xEDFBL,0x0B84L}}}}};
    const uint32_t l_61 = 0xD6A2031CL;
    int i, j, k;
    l_43++;
    g_62[2] = (safe_mul_func_uint16_t_u_u(((((((0xA0L >= (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(l_43, (g_60 &= (safe_mul_func_uint16_t_u_u(((l_56[2][2][0] , (~((safe_rshift_func_int16_t_s_s(p_5.f2, g_39.f0.f2)) <= p_4.f0.f1))) | 0xFEL), l_56[2][2][0].f1))))), g_39.f0.f3)), 5))) >= p_5.f1) || g_41) , g_39.f0.f2) , p_3.f2) & l_61), g_39.f0.f3));
    g_63 = p_5;
    return g_39.f0.f0.f1;
}



static struct S0  func_6(const uint64_t  p_7, int8_t  p_8, uint16_t  p_9, struct S0  p_10)
{ 
    uint32_t l_40 = 0x2FE0F9CCL;
    int32_t l_42 = (-1L);
    l_42 |= ((g_16 = (g_41 ^= (safe_mod_func_uint8_t_u_u(g_16, (((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((((safe_div_func_uint8_t_u_u((0xAAE8L == (safe_div_func_int64_t_s_s((((safe_lshift_func_uint8_t_u_s(((((safe_rshift_func_int8_t_s_u((g_39 , (0x82E5L || g_39.f2.f2)), 6)) >= l_40) == 18446744073709551609UL) , g_39.f0.f0.f0), 7)) , l_40) && l_40), p_10.f1))), 0xC3L)) && l_40) , l_40), 7)), (-1L))) > l_40) ^ p_9))))) == g_39.f2.f0.f2);
    return p_10;
}



static struct S1  func_11(int32_t  p_12, struct S1  p_13)
{ 
    struct S0 l_17 = {-1L,0x6DE11D69L,0x043CA380L};
    int32_t l_20[2];
    struct S1 l_24 = {{0x277CE2A7709B8073LL,0xA04A8F9BL,0x0954028EL},1L,0x9C81L,3L};
    int i;
    for (i = 0; i < 2; i++)
        l_20[i] = 0L;
    p_13.f0 = ((g_16 < g_16) , l_17);
    for (l_17.f2 = 0; (l_17.f2 <= 45); ++l_17.f2)
    { 
        uint32_t l_21[2][5][4] = {{{0xD9CEC61CL,1UL,0xD9CEC61CL,1UL},{0xD9CEC61CL,1UL,0xD9CEC61CL,1UL},{0xD9CEC61CL,1UL,0xD9CEC61CL,1UL},{0xD9CEC61CL,1UL,0xD9CEC61CL,1UL},{0xD9CEC61CL,1UL,0xD9CEC61CL,1UL}},{{0xD9CEC61CL,1UL,0xD9CEC61CL,1UL},{0xD9CEC61CL,1UL,0xD9CEC61CL,1UL},{0xD9CEC61CL,1UL,0xD9CEC61CL,1UL},{0xD9CEC61CL,1UL,0xD9CEC61CL,1UL},{0xD9CEC61CL,1UL,0xD9CEC61CL,1UL}}};
        int i, j, k;
        --l_21[1][0][0];
        l_20[1] = 0L;
        return p_13;
    }
    return l_24;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_39.f0.f0.f0, "g_39.f0.f0.f0", print_hash_value);
    transparent_crc(g_39.f0.f0.f1, "g_39.f0.f0.f1", print_hash_value);
    transparent_crc(g_39.f0.f0.f2, "g_39.f0.f0.f2", print_hash_value);
    transparent_crc(g_39.f0.f1, "g_39.f0.f1", print_hash_value);
    transparent_crc(g_39.f0.f2, "g_39.f0.f2", print_hash_value);
    transparent_crc(g_39.f0.f3, "g_39.f0.f3", print_hash_value);
    transparent_crc(g_39.f1, "g_39.f1", print_hash_value);
    transparent_crc(g_39.f2.f0.f0, "g_39.f2.f0.f0", print_hash_value);
    transparent_crc(g_39.f2.f0.f1, "g_39.f2.f0.f1", print_hash_value);
    transparent_crc(g_39.f2.f0.f2, "g_39.f2.f0.f2", print_hash_value);
    transparent_crc(g_39.f2.f1, "g_39.f2.f1", print_hash_value);
    transparent_crc(g_39.f2.f2, "g_39.f2.f2", print_hash_value);
    transparent_crc(g_39.f2.f3, "g_39.f2.f3", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_62[i], "g_62[i]", print_hash_value);

    }
    transparent_crc(g_63.f0.f0, "g_63.f0.f0", print_hash_value);
    transparent_crc(g_63.f0.f1, "g_63.f0.f1", print_hash_value);
    transparent_crc(g_63.f0.f2, "g_63.f0.f2", print_hash_value);
    transparent_crc(g_63.f1, "g_63.f1", print_hash_value);
    transparent_crc(g_63.f2, "g_63.f2", print_hash_value);
    transparent_crc(g_63.f3, "g_63.f3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_76[i][j][k], "g_76[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_79, "g_79", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_80[i][j][k], "g_80[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_81[i][j], "g_81[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_83, "g_83", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_84[i][j][k], "g_84[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_119[i][j][k], "g_119[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_151, "g_151", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
