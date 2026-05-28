// SPDX-License-Identifier: MIT
// cctest_csmith_da9e13ff.c --- cctest case csmith_da9e13ff (csmith seed 3667792895)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7627bc0f */
/* @exp_ticks 0x49e5 */

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

// Options:   -s 3667792895 -o /tmp/csmith_gen_bwpqo77n/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   const uint64_t  f1;
   uint8_t  f2;
   int32_t  f3;
   uint64_t  f4;
};
#pragma pack(pop)

struct S1 {
   int32_t  f0;
   uint32_t  f1;
   int8_t  f2;
   int64_t  f3;
};

union U2 {
   const struct S0  f0;
   uint32_t  f1;
};


static int32_t g_2 = 0L;
static union U2 g_33[3][1][1] = {{{{{0x31CF6A12L,18446744073709551615UL,1UL,0xCBAA6F4EL,0x832CB818EBCCE3F5LL}}}},{{{{0x31CF6A12L,18446744073709551615UL,1UL,0xCBAA6F4EL,0x832CB818EBCCE3F5LL}}}},{{{{0x31CF6A12L,18446744073709551615UL,1UL,0xCBAA6F4EL,0x832CB818EBCCE3F5LL}}}}};
static union U2 *g_32 = &g_33[1][0][0];
static union U2 g_35 = {{4294967295UL,9UL,0x72L,0x6DFE1602L,0x05008D6DB9E588CELL}};
static int32_t g_58 = 0xAE5249F3L;
static uint64_t g_60 = 0UL;
static int8_t g_78 = 0x23L;
static uint16_t g_94 = 1UL;
static int16_t g_116 = 1L;
static uint32_t g_121 = 0x2018FE19L;
static struct S1 g_124 = {4L,1UL,0xB0L,3L};
static int32_t g_165[1][3][7] = {{{0x194CA43DL,0L,0x194CA43DL,0L,0x194CA43DL,0L,0x194CA43DL},{0x91963C95L,0x91963C95L,0x91963C95L,0x91963C95L,0x91963C95L,0x91963C95L,0x91963C95L},{0x194CA43DL,0L,0x194CA43DL,0L,0x194CA43DL,0L,0x194CA43DL}}};
static uint64_t g_244 = 18446744073709551606UL;
static int32_t *g_253[3] = {&g_165[0][0][5],&g_165[0][0][5],&g_165[0][0][5]};
static int32_t *g_254[5] = {&g_165[0][0][6],&g_165[0][0][6],&g_165[0][0][6],&g_165[0][0][6],&g_165[0][0][6]};
static uint16_t g_265 = 0x1EB7L;
static struct S1 *g_272 = &g_124;
static struct S1 **g_271 = &g_272;
static uint32_t g_324 = 9UL;
static int64_t g_349 = 0xA1EB68E88F486F50LL;
static uint8_t g_351[2] = {248UL,248UL};
static uint64_t ***g_362 = (void*)0;
static uint8_t g_368 = 1UL;
static struct S1 g_377 = {0xDB3B7523L,0x2297713EL,1L,4L};
static uint16_t * const g_383[4][6] = {{&g_94,&g_94,&g_94,&g_94,&g_94,&g_94},{&g_94,&g_265,&g_94,&g_94,&g_265,&g_94},{&g_94,&g_94,&g_265,&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94,&g_94,&g_94,&g_94}};
static uint16_t * const *g_382[1][7] = {{&g_383[1][4],&g_383[1][4],&g_383[1][4],&g_383[1][4],&g_383[1][4],&g_383[1][4],&g_383[1][4]}};
static struct S1 ***g_484 = &g_271;
static struct S1 ****g_483[6][3][3] = {{{&g_484,&g_484,&g_484},{&g_484,&g_484,&g_484},{&g_484,&g_484,&g_484}},{{&g_484,&g_484,&g_484},{&g_484,&g_484,&g_484},{&g_484,&g_484,&g_484}},{{&g_484,&g_484,&g_484},{&g_484,&g_484,&g_484},{&g_484,&g_484,&g_484}},{{&g_484,&g_484,&g_484},{&g_484,&g_484,&g_484},{&g_484,&g_484,&g_484}},{{&g_484,&g_484,&g_484},{&g_484,&g_484,&g_484},{&g_484,&g_484,&g_484}},{{&g_484,&g_484,&g_484},{&g_484,&g_484,&g_484},{&g_484,&g_484,&g_484}}};
static union U2 g_522 = {{0x707A68C8L,18446744073709551615UL,0UL,0xC11CF35BL,0x40AE82302C5CF792LL}};
static uint64_t *g_552 = (void*)0;
static uint64_t ** const g_551 = &g_552;
static const int32_t g_633 = 3L;
static const int32_t *g_634 = &g_124.f0;
static struct S1 ****g_702[3] = {&g_484,&g_484,&g_484};
static uint64_t g_706 = 0UL;
static uint64_t g_724 = 18446744073709551615UL;
static int8_t **g_745 = (void*)0;
static union U2 g_761 = {{0x7233D03FL,18446744073709551615UL,254UL,0x847990B3L,7UL}};
static struct S0 g_768 = {0xB7A1332CL,0x6A950DB4FE6EAE69LL,0xACL,0x606B92ADL,0x4F5808589D2CC78ALL};
static struct S0 *g_767[4][4][3] = {{{&g_768,&g_768,&g_768},{&g_768,&g_768,&g_768},{&g_768,&g_768,&g_768},{&g_768,&g_768,&g_768}},{{&g_768,&g_768,&g_768},{&g_768,&g_768,&g_768},{&g_768,&g_768,&g_768},{&g_768,&g_768,&g_768}},{{&g_768,&g_768,&g_768},{&g_768,&g_768,&g_768},{&g_768,&g_768,&g_768},{&g_768,&g_768,&g_768}},{{&g_768,&g_768,&g_768},{&g_768,&g_768,&g_768},{&g_768,&g_768,&g_768},{&g_768,&g_768,&g_768}}};
static int16_t g_790 = 0xD014L;
static int8_t g_912[7] = {0xC5L,0xC5L,0xC5L,0xC5L,0xC5L,0xC5L,0xC5L};
static union U2 **g_929 = &g_32;
static union U2 ***g_928 = &g_929;
static int32_t g_933[4][2] = {{1L,(-10L)},{1L,(-10L)},{1L,(-10L)},{1L,(-10L)}};
static uint16_t g_1073 = 0xC72CL;



static struct S1  func_1(void);
static int32_t  func_6(uint64_t  p_7, const uint32_t  p_8, struct S1  p_9, uint16_t  p_10, uint64_t  p_11);
static uint64_t  func_12(int16_t  p_13, const int32_t  p_14, int16_t  p_15, uint64_t  p_16);
static struct S0  func_17(int16_t  p_18, const struct S1  p_19);
static uint16_t  func_25(int32_t  p_26, uint64_t  p_27, uint16_t  p_28);
static int16_t  func_29(const int32_t  p_30);
static int32_t * func_36(struct S0  p_37, int32_t * p_38, uint32_t  p_39);
static int32_t * func_41(int32_t  p_42, int32_t * p_43, uint64_t  p_44, const int32_t * p_45, union U2  p_46);




static struct S1  func_1(void)
{ 
    int32_t l_24 = 0xC64F6B90L;
    uint64_t l_31 = 5UL;
    const struct S1 l_769 = {0x2891C7C9L,0UL,-5L,-9L};
    int32_t *l_1077[3];
    uint32_t l_1078 = 0x4E7EC362L;
    struct S1 l_1079 = {0xCF50C8E6L,18446744073709551607UL,0L,0x7A16A1EF72A77085LL};
    int i;
    for (i = 0; i < 3; i++)
        l_1077[i] = &g_165[0][1][1];
    for (g_2 = (-10); (g_2 < (-2)); ++g_2)
    { 
        struct S1 l_5 = {-8L,1UL,0xEDL,0xC590F023498E64E6LL};
        return l_5;
    }
    l_1078 = func_6(func_12((func_17((safe_sub_func_uint32_t_u_u(((l_24 || (l_24 > func_25(g_2, g_2, l_24))) <= func_29(((func_25(g_2, l_31, g_2) >= l_24) ^ 0x9C4AL))), 0L)), l_769) , g_35.f0.f2), l_31, l_769.f2, l_31), l_24, l_769, l_24, l_769.f0);
    return l_1079;
}



static int32_t  func_6(uint64_t  p_7, const uint32_t  p_8, struct S1  p_9, uint16_t  p_10, uint64_t  p_11)
{ 
    uint16_t l_1066 = 0xEDECL;
    int32_t l_1067 = 0xA97CBB2AL;
    int32_t l_1068 = (-3L);
    for (g_790 = 0; (g_790 != (-14)); --g_790)
    { 
        int16_t l_1057 = (-4L);
        int32_t l_1072 = 0xF21FA2C7L;
        for (g_94 = (-28); (g_94 > 40); g_94 = safe_add_func_uint64_t_u_u(g_94, 8))
        { 
            uint16_t *l_1065[7][2] = {{&g_94,(void*)0},{(void*)0,&g_94},{&g_94,&g_94},{&g_94,&g_94},{(void*)0,(void*)0},{&g_94,(void*)0},{(void*)0,&g_94}};
            uint16_t **l_1064[5][6] = {{&l_1065[2][0],(void*)0,&l_1065[5][0],&l_1065[5][0],&l_1065[5][0],&l_1065[5][0]},{&l_1065[2][0],&l_1065[2][0],&l_1065[5][0],&l_1065[4][0],&l_1065[5][0],&l_1065[4][0]},{(void*)0,&l_1065[2][0],(void*)0,&l_1065[5][0],&l_1065[5][0],&l_1065[5][0]},{&l_1065[2][1],(void*)0,(void*)0,&l_1065[2][1],&l_1065[2][0],&l_1065[4][0]},{&l_1065[4][0],&l_1065[2][1],&l_1065[5][0],&l_1065[2][1],&l_1065[4][0],&l_1065[5][0]}};
            int32_t *l_1069 = (void*)0;
            int32_t *l_1070 = &g_2;
            int32_t *l_1071[3];
            int32_t **l_1076 = &l_1069;
            int i, j;
            for (i = 0; i < 3; i++)
                l_1071[i] = &g_2;
            for (g_58 = 19; (g_58 != (-3)); --g_58)
            { 
                int32_t l_1061 = 0xC41A9BD5L;
                uint16_t *l_1063 = &g_265;
                uint16_t **l_1062 = &l_1063;
                for (g_265 = (-26); (g_265 <= 24); g_265 = safe_add_func_uint32_t_u_u(g_265, 1))
                { 
                    int64_t l_1049[5][3] = {{(-9L),(-9L),0x113839FC38C08A84LL},{0L,0x113839FC38C08A84LL,0x113839FC38C08A84LL},{0x113839FC38C08A84LL,0x09D0753FED7A1A99LL,0x09D0753FED7A1A99LL},{0x5B19EC000B3927B6LL,(-9L),0x5B19EC000B3927B6LL},{0x113839FC38C08A84LL,0L,0x09D0753FED7A1A99LL}};
                    int32_t *l_1050 = (void*)0;
                    int32_t **l_1051 = &g_254[1];
                    uint32_t *l_1054 = &g_768.f0;
                    int i, j;
                    if (l_1049[4][2])
                        break;
                    (*l_1051) = l_1050;
                    p_9.f0 = (((safe_sub_func_int16_t_s_s(p_9.f1, p_11)) && (((g_121 ^= 0UL) > ((*l_1054)--)) == ((l_1057 & (((!((((safe_lshift_func_int16_t_s_u(((l_1061 , l_1062) != l_1064[4][4]), p_8)) > 0x54L) && g_377.f2) ^ l_1066)) <= (-4L)) ^ 0x716D23C6L)) , (*g_634)))) , (-8L));
                }
            }
            g_1073--;
            (*l_1076) = (void*)0;
        }
        return (*g_634);
    }
    return l_1066;
}



static uint64_t  func_12(int16_t  p_13, const int32_t  p_14, int16_t  p_15, uint64_t  p_16)
{ 
    uint16_t l_936 = 65535UL;
    const union U2 **l_947 = (void*)0;
    const struct S1 *l_964 = (void*)0;
    const struct S1 **l_963 = &l_964;
    const struct S1 ***l_962 = &l_963;
    const struct S1 ****l_961 = &l_962;
    int32_t l_966[6] = {0L,0L,(-6L),0L,0L,(-6L)};
    struct S1 l_968 = {3L,0xC1002C3CL,6L,0x8735C346F57515EDLL};
    uint8_t l_990[7];
    int i;
    for (i = 0; i < 7; i++)
        l_990[i] = 0UL;
    for (g_124.f0 = 2; (g_124.f0 >= 0); g_124.f0 -= 1)
    { 
        uint8_t l_920 = 0x27L;
        int32_t *l_921 = (void*)0;
        int32_t *l_922 = &g_58;
        uint32_t l_925[5];
        union U2 l_927 = {{4294967289UL,0x47CBB45344CCB669LL,7UL,0xAB87D290L,0x8315E5AC37DE611CLL}};
        int32_t l_935[1];
        const union U2 *l_945 = &g_33[1][0][0];
        const union U2 **l_944 = &l_945;
        struct S1 * const **l_960 = (void*)0;
        struct S1 * const ***l_959 = &l_960;
        uint64_t l_974[2][5][4] = {{{2UL,18446744073709551609UL,0UL,0UL},{7UL,7UL,2UL,0UL},{0xE29193B34A87D79FLL,18446744073709551609UL,0xE29193B34A87D79FLL,2UL},{0xE29193B34A87D79FLL,2UL,2UL,0xE29193B34A87D79FLL},{7UL,2UL,0UL,2UL}},{{2UL,18446744073709551609UL,0UL,0UL},{7UL,7UL,2UL,0UL},{0xE29193B34A87D79FLL,18446744073709551609UL,0xE29193B34A87D79FLL,2UL},{0xE29193B34A87D79FLL,2UL,2UL,0xE29193B34A87D79FLL},{7UL,2UL,0UL,2UL}}};
        uint16_t l_1023 = 0x2782L;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_925[i] = 0x530D9693L;
        for (i = 0; i < 1; i++)
            l_935[i] = (-1L);
        (*l_922) ^= l_920;
        for (g_116 = 0; (g_116 <= 2); g_116 += 1)
        { 
            uint64_t l_923[5][6] = {{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL}};
            uint16_t *l_924 = (void*)0;
            int32_t **l_926 = &g_253[0];
            union U2 ***l_931 = &g_929;
            int32_t l_934[3];
            int i, j;
            for (i = 0; i < 3; i++)
                l_934[i] = 0xA93CEBE3L;
            (*l_926) = ((((*l_922) <= l_923[0][1]) || (l_924 != l_924)) , (g_94 , func_41(l_925[4], &g_165[0][0][6], p_14, l_921, (*g_32))));
            if (p_13)
                break;
            for (g_121 = 0; (g_121 <= 2); g_121 += 1)
            { 
                union U2 ****l_930[5][3] = {{&g_928,&g_928,&g_928},{&g_928,&g_928,&g_928},{&g_928,&g_928,&g_928},{&g_928,&g_928,&g_928},{&g_928,&g_928,&g_928}};
                int i, j;
                (*l_922) = ((l_927 , ((l_931 = g_928) != (void*)0)) ^ p_16);
                (*l_926) = &g_58;
            }
            for (g_761.f1 = 0; (g_761.f1 <= 2); g_761.f1 += 1)
            { 
                int32_t *l_932[5] = {&g_2,&g_2,&g_2,&g_2,&g_2};
                int i;
                l_936++;
                return p_14;
            }
        }
        for (g_761.f1 = 0; (g_761.f1 <= 2); g_761.f1 += 1)
        { 
            struct S0 **l_940 = &g_767[3][2][0];
            struct S0 ***l_939 = &l_940;
            union U2 **l_943 = &g_32;
            const union U2 ***l_946[3][4];
            struct S1 * const *l_956 = (void*)0;
            struct S1 * const **l_955 = &l_956;
            struct S1 * const ***l_954[1];
            struct S1 * const ****l_957 = (void*)0;
            struct S1 * const ****l_958[5] = {&l_954[0],&l_954[0],&l_954[0],&l_954[0],&l_954[0]};
            uint32_t *l_965 = &g_768.f0;
            int32_t l_971 = 0x9A079836L;
            int32_t l_972 = 0xB5258926L;
            int32_t l_973 = 0xAD3EB488L;
            int32_t l_1022 = 7L;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 4; j++)
                    l_946[i][j] = &l_944;
            }
            for (i = 0; i < 1; i++)
                l_954[i] = &l_955;
            (*l_939) = &g_767[0][3][2];
            l_966[0] = (p_14 == (((*l_965) = (3UL < ((safe_div_func_uint16_t_u_u(((((*g_928) = l_943) == (l_947 = l_944)) , (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_u(((0x261CC3773A5D757FLL == (safe_mod_func_int16_t_s_s(((l_959 = l_954[0]) == l_961), 65535UL))) && 0x3BA4L), l_936)) < 0xC8742AA4L), 12))), g_368)) > g_377.f1))) < p_15));
            for (l_920 = 0; (l_920 <= 2); l_920 += 1)
            { 
                struct S1 l_967 = {0x8D7EC976L,4UL,0xC1L,1L};
                int32_t *l_969 = &l_967.f0;
                int32_t *l_970[6] = {&l_968.f0,&l_968.f0,&l_968.f0,&l_968.f0,&l_968.f0,&l_968.f0};
                int32_t l_991 = (-1L);
                int i;
                l_968 = (l_967 = (*g_272));
                --l_974[0][0][2];
                if (l_972)
                    break;
                for (l_967.f3 = 0; (l_967.f3 <= 2); l_967.f3 += 1)
                { 
                    uint32_t l_977 = 0x6641CA13L;
                    struct S0 ** const l_992 = (void*)0;
                    struct S0 ***l_993 = (void*)0;
                    struct S0 ***l_994[3][2][3] = {{{&l_940,&l_940,&l_940},{(void*)0,&l_940,(void*)0}},{{&l_940,&l_940,&l_940},{(void*)0,&l_940,(void*)0}},{{&l_940,&l_940,&l_940},{(void*)0,&l_940,(void*)0}}};
                    struct S0 ***l_995 = &l_940;
                    int i, j, k;
                    l_977--;
                    l_970[4] = func_41((*l_922), &g_2, (l_972 ^ (safe_rshift_func_uint16_t_u_u((((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((~(l_968.f0 & (safe_unary_minus_func_int8_t_s(((((((safe_mul_func_int16_t_s_s((((((g_768.f4 > (((p_14 , (p_13 , l_977)) == 0x54FCL) >= l_968.f0)) ^ l_990[3]) & p_15) != (*l_922)) ^ l_977), g_522.f0.f4)) >= p_14) , 1UL) | l_968.f2) < l_977) || p_14))))), 6)), l_991)) != l_977) == l_971), p_16))), l_969, (***g_928));
                    (*l_995) = l_992;
                    (*l_969) ^= l_968.f3;
                }
            }
            (*l_922) = (((safe_div_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(1UL, (*l_922))), (safe_mul_func_int8_t_s_s((p_16 > p_13), (((((safe_rshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((0x834C1E71L != (((((**g_271) , (*l_963)) != (**g_484)) > 0x839AL) , 0xF6D40C62L)), 7UL)), g_768.f4)), 0)) == l_971) >= g_35.f0.f3) >= p_16) , 0x5CL))))) < l_972) , p_15);
            for (l_927.f1 = 0; (l_927.f1 <= 2); l_927.f1 += 1)
            { 
                int32_t l_1016 = (-1L);
                int32_t *l_1017[3];
                int32_t **l_1018 = &l_921;
                uint16_t *l_1021[6][2][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,&g_265,&g_94}},{{(void*)0,&l_936,&g_94},{(void*)0,&g_265,&g_265}},{{&g_94,(void*)0,&g_94},{&g_265,&g_94,&g_94}},{{&l_936,&g_94,(void*)0},{&g_265,(void*)0,&g_265}},{{&g_265,&g_265,&g_265},{&g_265,&l_936,(void*)0}},{{&l_936,&g_265,(void*)0},{&g_265,(void*)0,&g_265}}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1017[i] = &l_935[0];
                l_935[0] ^= ((safe_lshift_func_int16_t_s_s((safe_add_func_int64_t_s_s(l_936, ((*l_922) >= (((((p_13 , 0L) , (((safe_div_func_int16_t_s_s((((safe_add_func_uint32_t_u_u((((p_14 , ((l_971 < (-1L)) || g_35.f1)) & p_13) > 0x1AL), g_522.f0.f1)) == p_13) , 0L), p_15)) , g_35.f0.f4) < p_15)) | g_124.f3) , p_16) != l_1016)))), 10)) != p_15);
                (*l_1018) = (p_16 , &l_1016);
                if (p_16)
                    break;
                (**l_1018) = (safe_rshift_func_int8_t_s_s(((g_165[0][0][6] <= (((l_1023--) , g_768.f2) || (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((g_933[3][1] <= (p_16 ^ (safe_div_func_uint8_t_u_u((~(safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((18446744073709551615UL > (safe_lshift_func_int8_t_s_s((((safe_rshift_func_int8_t_s_s(g_522.f1, (p_14 > 255UL))) , g_2) | l_971), 0))), p_16)), p_13))), 0x58L)))) | p_15), 5)), 12)))) > l_973), 0));
            }
        }
    }
    return p_15;
}



static struct S0  func_17(int16_t  p_18, const struct S1  p_19)
{ 
    int32_t l_772 = 0x29A9E40EL;
    int32_t l_793 = 0x05639E4FL;
    union U2 l_810 = {{0x7DF5CD59L,0x39B20DFD779D4389LL,0x43L,-1L,0x968A21E7401682CFLL}};
    uint8_t l_876[7];
    uint64_t ***l_892 = (void*)0;
    int32_t l_904 = (-1L);
    int32_t l_905 = 0L;
    int32_t l_906[1][3][6] = {{{0x69A84F8FL,0x1B30AEFFL,0x69A84F8FL,0x1B30AEFFL,0x69A84F8FL,0x1B30AEFFL},{0xFA4AE5D9L,0x1B30AEFFL,0xFA4AE5D9L,0x1B30AEFFL,0xFA4AE5D9L,0x1B30AEFFL},{0x69A84F8FL,0x1B30AEFFL,0x69A84F8FL,0x1B30AEFFL,0x69A84F8FL,0x1B30AEFFL}}};
    uint32_t l_907 = 0x3F73F2F6L;
    uint8_t l_916 = 1UL;
    int32_t **l_919[1];
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_876[i] = 251UL;
    for (i = 0; i < 1; i++)
        l_919[i] = &g_254[0];
    for (g_768.f3 = 0; (g_768.f3 == 10); g_768.f3 = safe_add_func_int8_t_s_s(g_768.f3, 8))
    { 
        int16_t l_773 = 0L;
        int32_t l_794 = 0xC9AF59DBL;
        struct S1 *** const l_804 = &g_271;
        uint64_t **l_891 = &g_552;
        uint64_t ***l_890 = &l_891;
        int32_t l_903[4] = {0x7B65BCB7L,0x7B65BCB7L,0x7B65BCB7L,0x7B65BCB7L};
        int i;
        if (l_772)
            break;
    }
    for (l_793 = 0; (l_793 >= (-8)); l_793 = safe_sub_func_uint16_t_u_u(l_793, 4))
    { 
        int32_t *l_913 = &g_165[0][1][3];
        int32_t *l_914 = &l_905;
        int32_t *l_915[5][6][1] = {{{&g_124.f0},{&l_906[0][2][5]},{&l_905},{(void*)0},{&g_2},{&l_906[0][0][4]}},{{&g_2},{(void*)0},{&l_905},{&l_906[0][2][5]},{&g_124.f0},{&l_772}},{{&l_772},{&g_124.f0},{&l_906[0][2][5]},{&l_905},{(void*)0},{&g_2}},{{&l_906[0][0][4]},{&g_2},{(void*)0},{&l_905},{&l_906[0][2][5]},{&g_124.f0}},{{&l_772},{&l_772},{&g_124.f0},{&l_906[0][2][5]},{&l_905},{(void*)0}}};
        int i, j, k;
        --l_916;
    }
    g_634 = &g_58;
    return l_810.f0;
}



static uint16_t  func_25(int32_t  p_26, uint64_t  p_27, uint16_t  p_28)
{ 
    return p_28;
}



static int16_t  func_29(const int32_t  p_30)
{ 
    union U2 *l_34 = &g_35;
    struct S0 l_40 = {0x7D4E785EL,1UL,0xF2L,0x5CF69BADL,0UL};
    int32_t *l_47 = &g_2;
    int32_t **l_252[6];
    struct S0 *l_764 = &l_40;
    struct S0 **l_765 = &l_764;
    struct S0 **l_766 = (void*)0;
    int i;
    for (i = 0; i < 6; i++)
        l_252[i] = (void*)0;
    l_34 = g_32;
    g_254[0] = func_36(l_40, (g_254[0] = (g_253[0] = func_41(l_40.f1, l_47, ((safe_sub_func_int64_t_s_s((safe_add_func_int16_t_s_s(6L, (((p_30 <= ((safe_div_func_int16_t_s_s(g_35.f0.f3, (safe_mul_func_int8_t_s_s(((*l_47) > (*l_47)), g_33[1][0][0].f0.f3)))) <= p_30)) , (*l_47)) == p_30))), (*l_47))) != g_33[1][0][0].f1), l_47, (*g_32)))), (*l_47));
    g_767[3][2][0] = ((*l_765) = l_764);
    return g_761.f0.f2;
}



static int32_t * func_36(struct S0  p_37, int32_t * p_38, uint32_t  p_39)
{ 
    int32_t **l_255 = &g_253[2];
    uint16_t *l_258 = &g_94;
    uint32_t *l_268 = &g_121;
    int8_t *l_269 = &g_124.f2;
    int32_t l_270 = 0L;
    struct S1 **l_273[3][2][2] = {{{&g_272,&g_272},{&g_272,&g_272}},{{&g_272,&g_272},{&g_272,&g_272}},{{&g_272,&g_272},{&g_272,&g_272}}};
    int16_t l_289 = 0x728CL;
    int32_t l_290[5][4] = {{0xAFF4077BL,0xAFF4077BL,9L,2L},{0x12A8300FL,0xCFC9BDEFL,0x12A8300FL,9L},{0x12A8300FL,9L,9L,0x12A8300FL},{0xAFF4077BL,9L,2L,9L},{9L,0xCFC9BDEFL,2L,2L}};
    uint64_t l_291[7] = {8UL,7UL,8UL,8UL,7UL,8UL,8UL};
    union U2 *l_312 = &g_33[0][0][0];
    uint64_t ***l_364 = (void*)0;
    uint64_t *l_367 = &g_60;
    uint64_t ** const l_366 = &l_367;
    uint64_t ** const *l_365 = &l_366;
    uint8_t l_369 = 1UL;
    struct S1 ***l_439[3][5];
    uint64_t l_440 = 0x1FBAA4158B8F9F22LL;
    int64_t l_497 = 1L;
    uint32_t l_505 = 0xE33AFF03L;
    const uint16_t *l_526 = &g_94;
    const uint16_t **l_525 = &l_526;
    const uint16_t *** const l_524[6][3] = {{&l_525,&l_525,&l_525},{(void*)0,&l_525,&l_525},{&l_525,(void*)0,&l_525},{&l_525,&l_525,&l_525},{(void*)0,&l_525,&l_525},{&l_525,(void*)0,&l_525}};
    const uint16_t ****l_527 = (void*)0;
    const uint16_t ***l_529 = &l_525;
    const uint16_t ****l_528 = &l_529;
    uint32_t l_539 = 0xDE571D56L;
    uint32_t l_542[3];
    const uint16_t l_553 = 0x7702L;
    uint64_t l_569 = 0UL;
    const int32_t **l_617 = (void*)0;
    const int32_t *l_725 = &g_377.f0;
    uint32_t l_734[1];
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
            l_439[i][j] = &l_273[0][0][1];
    }
    for (i = 0; i < 3; i++)
        l_542[i] = 9UL;
    for (i = 0; i < 1; i++)
        l_734[i] = 0x54C8689AL;
lbl_357:
    (*l_255) = (void*)0;
    if ((safe_mod_func_uint8_t_u_u(((((*l_258) = g_35.f0.f0) | (((((safe_mul_func_int8_t_s_s(((((l_270 |= (safe_add_func_int8_t_s_s(((0x0D99L >= p_37.f2) , ((*l_269) |= ((((((safe_div_func_uint16_t_u_u((g_265 ^= g_58), (((safe_sub_func_uint32_t_u_u(((*l_268) = p_37.f1), 0x985CDAEDL)) && g_244) ^ g_78))) , 3L) ^ (*p_38)) && g_124.f1) > g_60) ^ 0x59L))), 0x6DL))) >= g_124.f0) , 0x9EL) && p_37.f2), p_37.f3)) <= (*p_38)) , g_271) == l_273[2][0][0]) && 0UL)) && g_124.f3), 0xB7L)))
    { 
        int32_t *l_274 = (void*)0;
        int32_t *l_275 = &g_165[0][0][6];
        int32_t *l_276 = (void*)0;
        int32_t *l_277 = (void*)0;
        int32_t *l_278 = &g_165[0][0][6];
        int32_t *l_279 = (void*)0;
        int32_t *l_280 = &g_124.f0;
        int32_t *l_281 = &l_270;
        int32_t *l_282 = (void*)0;
        int32_t *l_283 = (void*)0;
        int32_t *l_284 = &g_165[0][0][6];
        int32_t *l_285 = &l_270;
        int32_t *l_286 = &g_124.f0;
        int32_t *l_287 = (void*)0;
        int32_t *l_288[3];
        uint32_t l_296 = 0UL;
        uint32_t l_318 = 1UL;
        uint64_t **l_354 = (void*)0;
        int i;
        for (i = 0; i < 3; i++)
            l_288[i] = &l_270;
        l_291[6]++;
        for (g_94 = 7; (g_94 != 49); g_94 = safe_add_func_int8_t_s_s(g_94, 7))
        { 
            int32_t l_311[5][1][3] = {{{0x14C64CE8L,0x14C64CE8L,0xDF8C5D97L}},{{1L,1L,0x40380D19L}},{{0x14C64CE8L,0x14C64CE8L,0xDF8C5D97L}},{{1L,1L,0x40380D19L}},{{0x14C64CE8L,0x14C64CE8L,0xDF8C5D97L}}};
            int i, j, k;
            p_38 = l_284;
            if ((*p_38))
            { 
                int64_t *l_308 = &g_124.f3;
                int32_t l_314 = 0x80E55E12L;
                int32_t l_316 = 0xFA88C29AL;
                ++l_296;
                if ((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((~(p_37 , 0xA8D1L)), 0xA5E4L)), 6)), (~(!(((*l_308) ^= 1L) , (((safe_rshift_func_int16_t_s_s(g_116, 0)) < (p_37.f2 == ((*g_32) , l_311[2][0][0]))) >= 1L)))))))
                { 
                    union U2 **l_313 = &l_312;
                    int32_t l_315 = 0x1F47DED6L;
                    int32_t l_317 = 0x97CD6856L;
                    if ((*p_38))
                        break;
                    (*l_313) = l_312;
                    ++l_318;
                }
                else
                { 
                    uint8_t l_323[1];
                    uint64_t *l_332 = &l_291[6];
                    int64_t *l_348 = &g_349;
                    uint8_t *l_350 = &g_351[1];
                    struct S1 l_352[6][2][6] = {{{{0L,5UL,0L,0L},{1L,0x6215CE27L,-4L,0x167D236D1486B357LL},{0x37B87D72L,0x3BBE830DL,-4L,1L},{0x57C8F7ECL,1UL,0x60L,-7L},{1L,18446744073709551615UL,-1L,0x400E4BA2902BD309LL},{-1L,1UL,-4L,0x1F299F02CD76C0A5LL}},{{1L,18446744073709551615UL,-1L,0x400E4BA2902BD309LL},{0L,5UL,0L,0L},{-1L,4UL,0x2CL,-2L},{-8L,1UL,0xD4L,1L},{-8L,1UL,0xD4L,1L},{-1L,4UL,0x2CL,-2L}}},{{{1L,18446744073709551615UL,-1L,0x400E4BA2902BD309LL},{1L,18446744073709551615UL,-1L,0x400E4BA2902BD309LL},{0x8BC994F6L,0x9E9AA596L,0x6BL,0L},{0x57C8F7ECL,1UL,0x60L,-7L},{0L,0x6D176C35L,0xE1L,1L},{1L,1UL,0xA0L,0x2BA8C676644AA76BLL}},{{0L,5UL,0L,0L},{1L,18446744073709551615UL,-1L,0x400E4BA2902BD309LL},{0xC3A19758L,18446744073709551608UL,-1L,0x469EF660DCA2FCF8LL},{1L,18446744073709551607UL,0L,0xF95CFB2E60243F2CLL},{-8L,1UL,0xD4L,1L},{0x8BC994F6L,0x9E9AA596L,0x6BL,0L}}},{{{1L,0x6215CE27L,-4L,0x167D236D1486B357LL},{0L,5UL,0L,0L},{0xC3A19758L,18446744073709551608UL,-1L,0x469EF660DCA2FCF8LL},{1L,0x6215CE27L,-4L,0x167D236D1486B357LL},{1L,18446744073709551615UL,-1L,0x400E4BA2902BD309LL},{1L,1UL,0xA0L,0x2BA8C676644AA76BLL}},{{0x57C8F7ECL,1UL,0x60L,-7L},{1L,0x6215CE27L,-4L,0x167D236D1486B357LL},{0x8BC994F6L,0x9E9AA596L,0x6BL,0L},{1L,0x6215CE27L,-4L,0x167D236D1486B357LL},{0x57C8F7ECL,1UL,0x60L,-7L},{-1L,4UL,0x2CL,-2L}}},{{{1L,0x6215CE27L,-4L,0x167D236D1486B357LL},{0x57C8F7ECL,1UL,0x60L,-7L},{-1L,4UL,0x2CL,-2L},{1L,18446744073709551607UL,0L,0xF95CFB2E60243F2CLL},{0x57C8F7ECL,1UL,0x60L,-7L},{-1L,1UL,-4L,0x1F299F02CD76C0A5LL}},{{0L,5UL,0L,0L},{1L,0x6215CE27L,-4L,0x167D236D1486B357LL},{0x37B87D72L,0x3BBE830DL,-4L,1L},{0x57C8F7ECL,1UL,0x60L,-7L},{1L,18446744073709551615UL,-1L,0x400E4BA2902BD309LL},{-1L,1UL,-4L,0x1F299F02CD76C0A5LL}}},{{{1L,18446744073709551615UL,-1L,0x400E4BA2902BD309LL},{0L,5UL,0L,0L},{-1L,4UL,0x2CL,-2L},{-8L,1UL,0xD4L,1L},{-8L,1UL,0xD4L,1L},{-1L,4UL,0x2CL,-2L}},{{1L,18446744073709551615UL,-1L,0x400E4BA2902BD309LL},{1L,18446744073709551615UL,-1L,0x400E4BA2902BD309LL},{0x8BC994F6L,0x9E9AA596L,0x6BL,0L},{0x57C8F7ECL,1UL,0x60L,-7L},{0L,0x6D176C35L,0xE1L,1L},{1L,1UL,0xA0L,0x2BA8C676644AA76BLL}}},{{{0L,5UL,0L,0L},{1L,18446744073709551615UL,-1L,0x400E4BA2902BD309LL},{0xC3A19758L,18446744073709551608UL,-1L,0x469EF660DCA2FCF8LL},{1L,18446744073709551607UL,0L,0xF95CFB2E60243F2CLL},{-8L,1UL,0xD4L,1L},{0x8BC994F6L,0x9E9AA596L,0x6BL,0L}},{{1L,0x6215CE27L,-4L,0x167D236D1486B357LL},{0L,5UL,0L,0L},{0xC3A19758L,18446744073709551608UL,-1L,0x469EF660DCA2FCF8LL},{1L,0x6215CE27L,-4L,0x167D236D1486B357LL},{1L,18446744073709551615UL,-1L,0x400E4BA2902BD309LL},{1L,1UL,0xA0L,0x2BA8C676644AA76BLL}}}};
                    uint64_t ***l_353 = (void*)0;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_323[i] = 248UL;
                    (*l_286) = (safe_rshift_func_uint8_t_u_s((g_324 |= l_323[0]), (safe_rshift_func_uint8_t_u_u(((*l_350) &= ((safe_add_func_uint64_t_u_u((((*l_332) &= (((*l_308) &= g_33[1][0][0].f0.f2) & (!p_37.f4))) < (((safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(p_37.f0, p_37.f1)), ((((*l_269) ^= (+((safe_sub_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_sub_func_int16_t_s_s(g_265, (safe_div_func_int32_t_s_s((safe_add_func_int64_t_s_s(3L, 0x6AD5141DDC807E20LL)), 4294967290UL)))), g_35.f0.f2)), 3UL)) <= l_314))) < 1L) >= l_323[0]))) , l_348) == (void*)0)), l_323[0])) ^ p_37.f0)), 2))));
                    (**g_271) = l_352[0][1][5];
                    l_354 = (void*)0;
                }
                (*l_285) ^= (g_351[1] | p_37.f4);
                (*l_285) = (l_314 &= (p_38 != (p_37.f2 , func_41((*p_38), p_38, ((l_316 &= (*p_38)) , (safe_div_func_uint16_t_u_u(0x20DAL, (0xB7L | 252UL)))), p_38, (*g_32)))));
            }
            else
            { 
                for (g_324 = 0; (g_324 <= 3); g_324 += 1)
                { 
                    if (g_35.f0.f2)
                        goto lbl_357;
                }
            }
        }
        return (*l_255);
    }
    else
    { 
        uint64_t ****l_363[7][1] = {{&g_362},{&g_362},{&g_362},{&g_362},{&g_362},{&g_362},{&g_362}};
        int32_t l_370 = 0x783B1FB1L;
        struct S1 l_379[2] = {{9L,18446744073709551615UL,0xD2L,-1L},{9L,18446744073709551615UL,0xD2L,-1L}};
        int32_t l_405 = 0x0A175CACL;
        int32_t l_406 = 0L;
        int32_t l_417 = 1L;
        int32_t l_418 = (-9L);
        int32_t l_419[2];
        uint32_t l_420 = 4294967295UL;
        union U2 l_443 = {{7UL,18446744073709551613UL,0x73L,0x6A93B84EL,0xED1435DD59B424B0LL}};
        int16_t *l_518[4];
        int i, j;
        for (i = 0; i < 2; i++)
            l_419[i] = 0L;
        for (i = 0; i < 4; i++)
            l_518[i] = &l_289;
        (*p_38) &= (((g_116 == (safe_div_func_int64_t_s_s((((((*l_312) , g_124.f2) , (safe_lshift_func_uint8_t_u_s((((l_364 = g_362) != (p_37.f4 , l_365)) != 0x7273L), g_368))) , 0L) <= 0x294E54C70C7156E2LL), g_121))) , p_39) != l_369);
        if ((5L != l_370))
        { 
            uint64_t l_373[6][2] = {{0UL,0UL},{18446744073709551615UL,0UL},{0UL,18446744073709551615UL},{0UL,0UL},{0xC013099A9A05F37ALL,18446744073709551615UL},{18446744073709551615UL,0xC013099A9A05F37ALL}};
            int32_t *l_395[1];
            struct S1 * const *l_434 = (void*)0;
            struct S1 * const **l_433 = &l_434;
            const struct S0 l_457 = {4294967295UL,1UL,0x20L,0L,0x2286FC049C0324F8LL};
            uint16_t l_481[1];
            int i, j;
            for (i = 0; i < 1; i++)
                l_395[i] = (void*)0;
            for (i = 0; i < 1; i++)
                l_481[i] = 0UL;
            for (p_37.f0 = 17; (p_37.f0 != 45); p_37.f0++)
            { 
                uint32_t l_374 = 4294967295UL;
                if (l_373[2][1])
                    break;
                l_374 = l_370;
                for (g_124.f1 = 0; (g_124.f1 >= 2); ++g_124.f1)
                { 
                    (*l_255) = p_38;
                }
            }
            for (g_124.f1 = 0; (g_124.f1 <= 1); g_124.f1 += 1)
            { 
                struct S1 l_378 = {0xD610EE2FL,18446744073709551606UL,0x0EL,0xE152A4AC8394970CLL};
                uint16_t * const **l_384 = &g_382[0][5];
                struct S1 **l_385 = &g_272;
                int32_t l_397 = (-4L);
                int32_t l_400 = 0L;
                int32_t l_403 = 0xEB211662L;
                int32_t l_404 = 0x100CADD5L;
                int32_t l_407 = 5L;
                int32_t l_408 = 0L;
                int32_t l_410 = 0x12330210L;
                int32_t l_413 = 0xA2E0405AL;
                int32_t l_414 = (-1L);
                int32_t l_415 = 0xDCC8B6EFL;
                int32_t l_416[4][4] = {{0xA64EAB48L,0xA64EAB48L,0L,0xA64EAB48L},{0xA64EAB48L,0x1A64D302L,0x1A64D302L,0xA64EAB48L},{0x1A64D302L,0xA64EAB48L,0x1A64D302L,0x1A64D302L},{0xA64EAB48L,0xA64EAB48L,0L,0xA64EAB48L}};
                int32_t *l_442 = &l_416[2][2];
                uint8_t *l_468 = &l_369;
                struct S1 ****l_482 = &l_439[1][0];
                uint32_t *l_485 = &l_420;
                int i, j;
                g_377 = (**g_271);
                l_379[0] = l_378;
                if ((g_377.f1 , ((4294967294UL > (safe_mul_func_uint16_t_u_u((&l_258 != ((*l_384) = g_382[0][4])), p_37.f4))) & g_165[0][0][4])))
                { 
                    struct S1 ***l_394 = &g_271;
                    (*p_38) &= ((l_385 != &g_272) == (safe_lshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_div_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((((*l_394) = l_273[2][0][0]) != (g_33[1][0][0].f0 , l_273[1][1][1])) , (0x31FE9B51L && ((g_124.f3 > p_37.f0) != p_37.f1))), p_37.f4)) >= g_60), g_368)), 0L)), 10)));
                    return l_395[0];
                }
                else
                { 
                    int64_t l_396 = 0x52035F4EB63B4B6CLL;
                    int32_t l_398 = 9L;
                    int32_t l_399 = 0x42F1118FL;
                    int32_t l_401 = 0x5CEEA3F1L;
                    int16_t l_402 = 0x761DL;
                    int32_t l_409 = (-1L);
                    int32_t l_411 = (-1L);
                    int32_t l_412[5];
                    uint8_t *l_430 = &g_368;
                    struct S1 ***l_435[5][5];
                    struct S1 ****l_436 = (void*)0;
                    struct S1 ****l_437 = (void*)0;
                    struct S1 ****l_438 = &l_435[2][4];
                    int8_t **l_441 = &l_269;
                    int32_t **l_444 = &g_254[0];
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_412[i] = 0xC70BA9AFL;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_435[i][j] = &l_273[2][0][0];
                    }
                    ++l_420;
                    (*l_444) = ((*l_255) = func_41((+p_37.f0), func_41(((0xA9L < (0x4DL & (&g_78 != ((*l_441) = ((safe_mul_func_uint8_t_u_u(((((safe_mul_func_uint8_t_u_u(((*l_430) = (safe_rshift_func_int8_t_s_s(((*l_269) |= 0x8BL), 3))), (safe_add_func_uint8_t_u_u(((l_433 != (l_439[2][0] = ((*l_438) = l_435[0][3]))) < 0x0EL), g_265)))) > g_35.f0.f1) , g_377.f2) && l_412[3]), l_440)) , &g_78))))) < p_39), l_442, l_370, p_38, l_443), p_37.f1, &g_2, (*g_32)));
                    if (l_379[0].f0)
                        continue;
                    (*l_442) = ((*p_38) = (*p_38));
                }
                if ((*p_38))
                    break;
                (*l_255) = func_41(((safe_add_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_div_func_uint64_t_u_u(((0UL | (safe_mod_func_uint32_t_u_u(((*l_485) = (safe_lshift_func_int16_t_s_u((l_457 , (((++(*l_268)) > (((safe_lshift_func_int8_t_s_s((((g_351[1] < (((safe_add_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((((*l_468)++) <= (4L != (((*l_269) = (*l_442)) , (((safe_add_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s(((l_418 = (safe_sub_func_uint16_t_u_u(p_37.f1, g_351[0]))) == p_37.f4), 2)), p_37.f0)) & l_481[0]), 0xD5ACEDEFAD6B3BE4LL)), p_37.f1)) != 9L) , p_37.f2)))) ^ (*l_442)), p_37.f3)), l_443.f0.f4)) , p_37.f3), 1L)) == p_37.f0) < 0x066E8DCAL)) , (*p_38)) != g_124.f0), 3)) , l_482) == g_483[4][1][0])) , g_368)), p_37.f2))), (*p_38)))) ^ 0L), 18446744073709551615UL)), p_37.f2)), g_35.f0.f1)), 0UL)) , (*p_38)), &g_165[0][1][6], p_39, (*l_255), (*g_32));
                for (l_378.f0 = 0; (l_378.f0 <= 1); l_378.f0 += 1)
                { 
                    int8_t **l_494 = &l_269;
                    int8_t *l_496 = &l_378.f2;
                    int8_t **l_495 = &l_496;
                    int i, j;
                    (*p_38) = (safe_lshift_func_int16_t_s_u(0xF110L, 4));
                    (*p_38) = (safe_rshift_func_uint8_t_u_u((safe_div_func_int64_t_s_s((l_373[(l_378.f0 + 4)][l_378.f0] != (safe_mul_func_uint16_t_u_u((((*l_494) = (((p_39 ^ p_37.f0) < 5UL) , l_468)) != ((*l_495) = (void*)0)), (p_37.f0 == p_37.f0)))), l_370)), 2));
                    return &g_165[0][0][6];
                }
            }
        }
        else
        { 
            int32_t l_498 = 0x9D7F9247L;
            int32_t l_499 = 0x0135A82BL;
            int32_t l_503 = 0x84ED5EE4L;
            int32_t l_504[6][6][3] = {{{0x70A3B843L,0x70A3B843L,0x70A3B843L},{0xCFD5A5D8L,0x6B0B98E6L,0xCFD5A5D8L},{0x70A3B843L,0x70A3B843L,0x70A3B843L},{0xCFD5A5D8L,0x6B0B98E6L,0xCFD5A5D8L},{0x70A3B843L,0x70A3B843L,0x70A3B843L},{0xCFD5A5D8L,0x6B0B98E6L,0xCFD5A5D8L}},{{0x70A3B843L,0x70A3B843L,0x70A3B843L},{0xCFD5A5D8L,0x6B0B98E6L,0xCFD5A5D8L},{0x70A3B843L,0x70A3B843L,0x70A3B843L},{0xCFD5A5D8L,0x6B0B98E6L,0xCFD5A5D8L},{0x70A3B843L,0x70A3B843L,0x70A3B843L},{0xCFD5A5D8L,0x6B0B98E6L,0xCFD5A5D8L}},{{0x70A3B843L,0x70A3B843L,0x70A3B843L},{0xCFD5A5D8L,0x6B0B98E6L,0xCFD5A5D8L},{0x70A3B843L,0x70A3B843L,0x70A3B843L},{0xCFD5A5D8L,0x6B0B98E6L,0xCFD5A5D8L},{0x70A3B843L,0x70A3B843L,0x70A3B843L},{0xCFD5A5D8L,0x6B0B98E6L,0xCFD5A5D8L}},{{0x70A3B843L,0x70A3B843L,0x70A3B843L},{0xCFD5A5D8L,0x6B0B98E6L,0xCFD5A5D8L},{0x70A3B843L,0x70A3B843L,0x70A3B843L},{0xCFD5A5D8L,0x6B0B98E6L,0xCFD5A5D8L},{0x70A3B843L,0x70A3B843L,0x70A3B843L},{0xCFD5A5D8L,0x6B0B98E6L,0xCFD5A5D8L}},{{0x70A3B843L,0x70A3B843L,0x70A3B843L},{0xCFD5A5D8L,0x6B0B98E6L,0xCFD5A5D8L},{0x70A3B843L,0x70A3B843L,0x70A3B843L},{0xCFD5A5D8L,0x6B0B98E6L,0xCFD5A5D8L},{0x70A3B843L,0x70A3B843L,0x70A3B843L},{0xCFD5A5D8L,0x6B0B98E6L,0xCFD5A5D8L}},{{0x70A3B843L,0x70A3B843L,0x70A3B843L},{0xCFD5A5D8L,0x6B0B98E6L,0xCFD5A5D8L},{0x70A3B843L,0x70A3B843L,0x70A3B843L},{0xCFD5A5D8L,0x6B0B98E6L,0xCFD5A5D8L},{0x70A3B843L,0x70A3B843L,0x70A3B843L},{0xCFD5A5D8L,0x6B0B98E6L,0xCFD5A5D8L}}};
            int16_t *l_517 = (void*)0;
            uint32_t l_519 = 1UL;
            int64_t *l_523 = (void*)0;
            int i, j, k;
            if (l_497)
            { 
                int32_t *l_500 = (void*)0;
                int32_t *l_501 = &l_290[3][3];
                int32_t *l_502[5][2][3];
                int i, j, k;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_502[i][j][k] = (void*)0;
                    }
                }
                (*g_272) = l_379[0];
                --l_505;
            }
            else
            { 
                (*g_272) = (*g_272);
                return p_38;
            }
            (*l_255) = &g_165[0][0][6];
            (*l_255) = func_41((l_503 = ((*p_38) = ((safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((l_504[1][1][2] |= ((safe_lshift_func_uint8_t_u_s((!0x73DD27856D3206F6LL), (((**l_366) = (0xDBC8L ^ p_37.f2)) <= (p_37.f4++)))) || ((p_37.f0 |= ((l_518[3] = l_517) != (void*)0)) && (p_37.f3 != l_519)))), 7)), 1L)) , 2L))), &l_417, l_519, &l_499, (*l_312));
            (*p_38) |= 0x3723473BL;
            l_406 ^= ((*p_38) = ((safe_lshift_func_int8_t_s_u((g_522 , ((&g_121 != ((**g_271) , &g_121)) != (g_522.f0 , ((l_405 = (p_37.f4 != (p_37.f3 <= l_499))) || p_37.f3)))), 5)) || p_37.f2));
        }
        (*p_38) = 8L;
    }
    (*l_528) = l_524[5][2];
    for (p_37.f4 = (-17); (p_37.f4 != 7); p_37.f4++)
    { 
        int8_t l_532[6][4] = {{0L,2L,2L,0L},{2L,0L,2L,2L},{0L,0L,0x98L,0L},{0L,2L,2L,0L},{2L,0L,2L,2L},{0L,0L,0x98L,0L}};
        int32_t *l_533 = &g_377.f0;
        int32_t *l_534 = &g_377.f0;
        int32_t *l_535 = (void*)0;
        int32_t *l_536 = (void*)0;
        int32_t *l_537 = &g_124.f0;
        int32_t *l_538[4] = {&l_270,&l_270,&l_270,&l_270};
        int i, j;
        ++l_539;
        --l_542[2];
        (*p_38) = ((safe_mul_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u(0UL, ((((0x6F16797CL && ((((p_37.f1 <= (g_551 != (void*)0)) > g_35.f0.f0) || (((void*)0 == &g_522) || (*p_38))) != p_37.f3)) > p_39) & 1UL) && g_522.f0.f4))) != g_522.f1) & p_37.f3), p_39)) == l_553);
        (*l_534) ^= ((safe_sub_func_int32_t_s_s((*p_38), g_124.f3)) > (safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s((*p_38), (safe_mod_func_int64_t_s_s((~7L), (+p_39))))), (p_37.f1 | (safe_sub_func_int16_t_s_s(g_35.f1, p_39))))));
    }
    for (l_497 = 9; (l_497 >= 9); l_497 = safe_add_func_int32_t_s_s(l_497, 3))
    { 
        int32_t *l_568[3];
        uint64_t l_583 = 18446744073709551610UL;
        struct S1 ***l_674 = &l_273[1][1][0];
        int64_t l_693 = 1L;
        uint16_t l_694[2];
        uint16_t l_699 = 0xE221L;
        uint16_t **l_710 = &l_258;
        uint16_t ***l_709 = &l_710;
        union U2 l_726 = {{0x8D8F27FEL,18446744073709551607UL,0x12L,0x3FFBE855L,0xDED17F660222D491LL}};
        int8_t ** const l_744 = &l_269;
        int i;
        for (i = 0; i < 3; i++)
            l_568[i] = &l_270;
        for (i = 0; i < 2; i++)
            l_694[i] = 1UL;
        g_253[2] = func_41((p_38 != ((**g_271) , (void*)0)), p_38, l_553, &g_165[0][1][1], (*g_32));
        l_569++;
        for (g_244 = 0; (g_244 <= 4); g_244 += 1)
        { 
            int64_t l_582 = (-5L);
            int32_t l_618 = 0x9BFFD404L;
            struct S1 ****l_626 = &g_484;
            const int32_t *l_632 = &g_633;
            uint8_t *l_644 = &g_351[1];
            uint64_t **l_677 = &l_367;
            int8_t l_687 = 4L;
            int64_t l_689 = 0x0B82601891B5028ALL;
            int32_t l_690 = (-10L);
            int32_t l_691 = 0x279EF38AL;
            int32_t l_692[5] = {0xFE9AC74CL,0xFE9AC74CL,0xFE9AC74CL,0xFE9AC74CL,0xFE9AC74CL};
            struct S1 *****l_703 = &g_702[0];
            uint16_t **l_708 = &l_258;
            uint16_t ***l_707[3][5] = {{&l_708,&l_708,&l_708,&l_708,&l_708},{&l_708,(void*)0,(void*)0,&l_708,&l_708},{&l_708,&l_708,(void*)0,(void*)0,&l_708}};
            uint16_t l_750 = 0x721DL;
            uint8_t l_762 = 0x2EL;
            int i, j;
        }
        if ((*p_38))
            break;
    }
    return p_38;
}



static int32_t * func_41(int32_t  p_42, int32_t * p_43, uint64_t  p_44, const int32_t * p_45, union U2  p_46)
{ 
    int32_t *l_56 = (void*)0;
    int32_t *l_57 = &g_58;
    int32_t *l_59 = &g_58;
    int8_t *l_77[4][3][5] = {{{&g_78,&g_78,&g_78,(void*)0,&g_78},{(void*)0,(void*)0,&g_78,(void*)0,(void*)0},{&g_78,&g_78,&g_78,&g_78,&g_78}},{{&g_78,&g_78,&g_78,&g_78,&g_78},{&g_78,&g_78,&g_78,&g_78,&g_78},{&g_78,&g_78,&g_78,&g_78,&g_78}},{{&g_78,&g_78,(void*)0,&g_78,(void*)0},{&g_78,&g_78,&g_78,&g_78,&g_78},{&g_78,&g_78,(void*)0,(void*)0,&g_78}},{{&g_78,&g_78,&g_78,&g_78,(void*)0},{&g_78,&g_78,&g_78,&g_78,&g_78},{&g_78,&g_78,&g_78,(void*)0,&g_78}}};
    int8_t **l_79 = (void*)0;
    int8_t **l_80 = &l_77[0][2][3];
    int32_t **l_81 = &l_57;
    struct S0 l_95 = {0x53ACC8D4L,0x572A9630A554F1F2LL,0xDDL,2L,18446744073709551615UL};
    struct S1 l_99 = {-4L,1UL,0x09L,0x245565C6936EE377LL};
    union U2 *l_214 = &g_33[1][0][0];
    int32_t l_221 = 0xB78D8231L;
    int32_t l_229 = (-1L);
    int32_t l_232 = 0xC428B281L;
    int32_t l_236 = 0x1D169B56L;
    int32_t l_239[5] = {(-2L),(-2L),(-2L),(-2L),(-2L)};
    int i, j, k;
    ++g_60;
    g_58 ^= ((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(255UL, 7)), 6)) < p_44);
    (*l_81) = ((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((1L <= (safe_div_func_uint64_t_u_u(18446744073709551614UL, (safe_mod_func_int8_t_s_s(p_46.f0.f3, ((*l_59) ^= g_33[1][0][0].f0.f2)))))), 5)) <= (&g_2 == (p_43 = l_56))), (((*l_80) = &g_78) == &g_78))) , (void*)0);
    for (p_44 = (-7); (p_44 < 53); p_44++)
    { 
        int32_t l_86 = 8L;
        uint16_t *l_93 = &g_94;
        int32_t l_100 = 0x427463D6L;
        int32_t l_223 = 0x57BC1926L;
        int32_t l_224 = 1L;
        int32_t l_226 = 0xE8BCC898L;
        int32_t l_230 = 2L;
        int32_t l_233 = 0xDA42983AL;
        int32_t l_234 = (-1L);
        int32_t l_235 = 3L;
        int32_t l_238 = 4L;
        int32_t l_240[2];
        int i;
        for (i = 0; i < 2; i++)
            l_240[i] = 0x056CAB57L;
    }
    return &g_58;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_33[i][j][k].f0.f0, "g_33[i][j][k].f0.f0", print_hash_value);
                transparent_crc(g_33[i][j][k].f0.f1, "g_33[i][j][k].f0.f1", print_hash_value);
                transparent_crc(g_33[i][j][k].f0.f2, "g_33[i][j][k].f0.f2", print_hash_value);
                transparent_crc(g_33[i][j][k].f0.f3, "g_33[i][j][k].f0.f3", print_hash_value);
                transparent_crc(g_33[i][j][k].f0.f4, "g_33[i][j][k].f0.f4", print_hash_value);
                transparent_crc(g_33[i][j][k].f1, "g_33[i][j][k].f1", print_hash_value);

            }
        }
    }
    transparent_crc(g_35.f0.f0, "g_35.f0.f0", print_hash_value);
    transparent_crc(g_35.f0.f1, "g_35.f0.f1", print_hash_value);
    transparent_crc(g_35.f0.f2, "g_35.f0.f2", print_hash_value);
    transparent_crc(g_35.f0.f3, "g_35.f0.f3", print_hash_value);
    transparent_crc(g_35.f0.f4, "g_35.f0.f4", print_hash_value);
    transparent_crc(g_35.f1, "g_35.f1", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_124.f0, "g_124.f0", print_hash_value);
    transparent_crc(g_124.f1, "g_124.f1", print_hash_value);
    transparent_crc(g_124.f2, "g_124.f2", print_hash_value);
    transparent_crc(g_124.f3, "g_124.f3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_165[i][j][k], "g_165[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_324, "g_324", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_351[i], "g_351[i]", print_hash_value);

    }
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_377.f0, "g_377.f0", print_hash_value);
    transparent_crc(g_377.f1, "g_377.f1", print_hash_value);
    transparent_crc(g_377.f2, "g_377.f2", print_hash_value);
    transparent_crc(g_377.f3, "g_377.f3", print_hash_value);
    transparent_crc(g_522.f0.f0, "g_522.f0.f0", print_hash_value);
    transparent_crc(g_522.f0.f1, "g_522.f0.f1", print_hash_value);
    transparent_crc(g_522.f0.f2, "g_522.f0.f2", print_hash_value);
    transparent_crc(g_522.f0.f3, "g_522.f0.f3", print_hash_value);
    transparent_crc(g_522.f0.f4, "g_522.f0.f4", print_hash_value);
    transparent_crc(g_522.f1, "g_522.f1", print_hash_value);
    transparent_crc(g_633, "g_633", print_hash_value);
    transparent_crc(g_706, "g_706", print_hash_value);
    transparent_crc(g_724, "g_724", print_hash_value);
    transparent_crc(g_761.f1, "g_761.f1", print_hash_value);
    transparent_crc(g_768.f0, "g_768.f0", print_hash_value);
    transparent_crc(g_768.f1, "g_768.f1", print_hash_value);
    transparent_crc(g_768.f2, "g_768.f2", print_hash_value);
    transparent_crc(g_768.f3, "g_768.f3", print_hash_value);
    transparent_crc(g_768.f4, "g_768.f4", print_hash_value);
    transparent_crc(g_790, "g_790", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_912[i], "g_912[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_933[i][j], "g_933[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1073, "g_1073", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
