// SPDX-License-Identifier: MIT
// cctest_csmith_8d647fef.c --- cctest case csmith_8d647fef (csmith seed 2372173807)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa78bb839 */
/* @exp_ticks 0x4402 */

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

// Options:   -s 2372173807 -o /tmp/csmith_gen_aazbxu63/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   int32_t  f1;
   uint32_t  f2;
};
#pragma pack(pop)

struct S1 {
   struct S0  f0;
   int8_t  f1;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint32_t  f0;
   const int32_t  f1;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
   int32_t  f0;
};
#pragma pack(pop)

union U4 {
   int32_t  f0;
   uint32_t  f1;
   uint32_t  f2;
};


static struct S2 g_4 = {18446744073709551615UL,-9L};
static uint32_t g_8[4][4] = {{4294967289UL,0x670012AFL,0x98AB5457L,0x98AB5457L},{0x488F4F36L,0x488F4F36L,4294967289UL,0x98AB5457L},{0x47706695L,0x670012AFL,0x47706695L,4294967289UL},{0x47706695L,4294967289UL,4294967289UL,0x47706695L}};
static int16_t g_31[5][1][3] = {{{(-1L),0xA2E5L,0x8805L}},{{(-1L),(-1L),0xA2E5L}},{{(-2L),0xA2E5L,0xA2E5L}},{{0xA2E5L,1L,0x8805L}},{{(-2L),1L,(-2L)}}};
static uint8_t g_40 = 1UL;
static int8_t g_55 = 8L;
static struct S3 g_58 = {-8L};
static uint32_t g_64 = 3UL;
static struct S0 g_65 = {0xD104A743L,-3L,4294967295UL};
static int32_t g_74 = 0x715E5E7DL;
static uint32_t g_75 = 0x74AE622EL;
static uint32_t g_85 = 4294967295UL;
static uint32_t g_99 = 0x5016CB79L;
static int32_t g_100 = 0L;
static int16_t g_101 = (-1L);
static struct S1 g_102 = {{0L,0x70219873L,0UL},0L};
static struct S1 g_103[1] = {{{0x7D7650D9L,0xA5E2435FL,0x338A2FE6L},0x78L}};
static uint64_t g_129 = 0xA416096333BD9002LL;
static uint16_t g_163 = 1UL;
static uint32_t g_221 = 0x0A0710ADL;
static uint32_t g_242[1][5][4] = {{{0x31836CB4L,0UL,0UL,0x31836CB4L},{0UL,0x31836CB4L,0UL,0UL},{0x31836CB4L,0x31836CB4L,4294967289UL,0x31836CB4L},{0x31836CB4L,0UL,4294967289UL,0UL},{4294967289UL,0UL,4294967289UL,4294967289UL}}};



static uint64_t  func_1(void);
static union U4  func_2(struct S2  p_3);
static int32_t  func_11(int8_t  p_12, struct S1  p_13, int32_t  p_14);
static struct S1  func_15(int64_t  p_16);




static uint64_t  func_1(void)
{ 
    uint64_t l_6 = 1UL;
    int32_t l_7 = 3L;
    int32_t l_265 = 7L;
    l_7 = (func_2(g_4) , l_6);
    for (g_4.f0 = 0; (g_4.f0 <= 3); g_4.f0 += 1)
    { 
        uint32_t l_9 = 6UL;
        int32_t l_10 = 0x7D1DC6B7L;
        struct S1 l_246 = {{1L,-3L,0x0DA124CAL},0x3AL};
        uint16_t l_260[2][5][5] = {{{65535UL,1UL,0x1E8BL,1UL,65535UL},{0UL,0x7585L,0UL,0UL,0x7585L},{65535UL,0UL,0UL,65535UL,0UL},{1UL,65535UL,0x1E8BL,0x7585L,0x7585L},{0UL,65535UL,0UL,0UL,65535UL}},{{0x7585L,0UL,0UL,0x7585L,0UL},{0x7585L,0x7585L,0x1E8BL,65535UL,1UL},{0UL,1UL,0UL,0UL,1UL},{1UL,0UL,0UL,1UL,0UL},{65535UL,1UL,0x1E8BL,1UL,65535UL}}};
        int i, j, k;
        l_10 = l_9;
        if (g_4.f1)
            continue;
        if ((l_6 , (0x74ADF298L ^ l_6)))
        { 
            const uint32_t l_247[5] = {4UL,4UL,4UL,4UL,4UL};
            int i;
            for (l_6 = 0; (l_6 <= 3); l_6 += 1)
            { 
                int32_t l_245 = 3L;
                int i, j;
                l_245 = func_11(g_8[g_4.f0][g_4.f0], (g_103[0] = (g_102 = func_15((l_10 == (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(l_9, (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((((safe_mod_func_int8_t_s_s((((g_31[1][0][2] &= (g_4.f1 && g_4.f0)) || l_6) && l_7), l_10)) && g_31[4][0][2]) || 0UL) ^ 0UL), 3)), g_8[g_4.f0][g_4.f0])))), g_8[0][2])), 0)), 6)))))), g_99);
                return l_10;
            }
            l_246 = g_103[0];
            if (l_247[3])
                continue;
        }
        else
        { 
            int16_t l_264 = (-8L);
            if (l_7)
                break;
            if (((g_99 , g_65.f1) >= (safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((((~(safe_div_func_uint32_t_u_u(4294967288UL, (safe_unary_minus_func_uint64_t_u((((safe_div_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u(g_102.f0.f0, l_7)) < l_260[1][4][2]) , l_7), g_242[0][0][0])) & 0xB4L) > 0x4D6ACB4F6E9D70C3LL)))))) || g_31[2][0][1]) || 0L), l_6)), g_100))))
            { 
                uint32_t l_261 = 7UL;
                l_261++;
                if (l_9)
                    break;
                g_74 = 1L;
            }
            else
            { 
                g_58.f0 = l_264;
            }
        }
        for (g_55 = 0; (g_55 <= 3); g_55 += 1)
        { 
            int i, j;
            return g_8[g_4.f0][g_4.f0];
        }
    }
    return l_265;
}



static union U4  func_2(struct S2  p_3)
{ 
    union U4 l_5 = {-1L};
    return l_5;
}



static int32_t  func_11(int8_t  p_12, struct S1  p_13, int32_t  p_14)
{ 
    int64_t l_108 = 0xD4EE7BA79B21912DLL;
    int32_t l_121 = 0x1E3A2289L;
    int32_t l_122 = 9L;
    int32_t l_123 = 0xF46FD790L;
    int64_t l_124 = (-1L);
    int16_t l_130 = (-7L);
    struct S1 l_162 = {{5L,4L,0x15947182L},1L};
    const struct S3 l_222 = {0x91C4A874L};
    struct S3 l_223 = {0L};
    int16_t l_229 = 6L;
    int32_t l_240 = 1L;
    int32_t l_241 = 0x5034D1DAL;
    if (((safe_mod_func_int32_t_s_s((((safe_mod_func_int16_t_s_s((((((((l_108 != (safe_add_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u(((((safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s(g_103[0].f0.f2, ((g_129 |= (safe_mod_func_int32_t_s_s(((l_108 < (((g_40++) , ((safe_mod_func_int32_t_s_s(l_122, l_108)) & 0x85L)) > l_108)) >= 1UL), 0x8E21F576L))) && g_65.f1))), g_103[0].f0.f0)) ^ g_85) || 0x42384D70L) == g_85), l_124)) == p_13.f0.f0) < 0x4FEBL), p_14)) < 0xA047L), g_103[0].f0.f2))) > 0xDE84L) >= 18446744073709551614UL) ^ l_130) || g_31[3][0][1]) < 8L) <= l_124), l_123)) , p_12) ^ p_13.f0.f2), l_123)) | (-2L)))
    { 
        int32_t l_135 = (-7L);
        for (g_100 = 23; (g_100 <= (-13)); --g_100)
        { 
            int8_t l_138 = 1L;
            int32_t l_164 = 0xF050D5A8L;
            struct S0 l_165[4][3] = {{{-1L,-1L,0xE4861E4FL},{0x104BA815L,1L,4UL},{0x104BA815L,1L,4UL}},{{0x104BA815L,1L,4UL},{-1L,0xF6A3D26EL,4294967295UL},{-1L,-1L,0xB6346332L}},{{-1L,-1L,0xE4861E4FL},{-1L,0xF6A3D26EL,4294967295UL},{-1L,-1L,0xE4861E4FL}},{{0xF5C48625L,0x22557A72L,4294967294UL},{0x104BA815L,1L,4UL},{-1L,-1L,0xB6346332L}}};
            int i, j;
            for (g_85 = 0; (g_85 < 10); g_85 = safe_add_func_int64_t_s_s(g_85, 3))
            { 
                g_58.f0 ^= ((((((-8L) || (((p_14 >= ((l_135 = 0x9AEB8056L) , ((safe_sub_func_uint32_t_u_u(p_13.f0.f1, g_31[1][0][2])) > l_138))) <= g_4.f1) & g_101)) < g_65.f2) && g_4.f1) >= 1UL) | 65535UL);
                p_13.f0.f1 = (((safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((((safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((l_164 = (safe_mul_func_uint8_t_u_u((g_31[1][0][2] != g_55), (!((safe_lshift_func_uint16_t_u_u(((-7L) || (safe_div_func_uint64_t_u_u(((l_135 = (((safe_sub_func_int64_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(l_130, l_108)), 0x78BEL)), 0x992E5D78F8258141LL)) , l_162) , g_103[0].f0.f0)) >= g_4.f0), g_163))), g_101)) < g_100))))), 11)) == p_14), (-6L))), g_31[4][0][1])) < 0xE4FF998BL) == l_138) , g_4.f1), (-2L))), g_99)) == (-2L)) ^ 0x37L);
            }
            l_123 ^= (l_165[3][2] , (g_75 | (safe_div_func_uint8_t_u_u((safe_div_func_int32_t_s_s((g_31[1][0][0] < l_135), l_165[3][2].f1)), g_4.f0))));
        }
    }
    else
    { 
        struct S3 l_174 = {0xDFDEEC52L};
        for (p_13.f0.f0 = 0; (p_13.f0.f0 <= 3); p_13.f0.f0 += 1)
        { 
            uint16_t l_171 = 0xCC1AL;
            struct S3 l_200 = {0L};
            if (g_85)
            { 
                int64_t l_170 = 0L;
                l_171++;
                g_74 |= (((l_174 , (safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((((-1L) >= (l_162.f0 , (safe_div_func_uint16_t_u_u((safe_div_func_int32_t_s_s(p_13.f0.f0, l_171)), l_170)))) | l_171), l_162.f0.f1)), g_163))) | l_171) == l_174.f0);
            }
            else
            { 
                return l_174.f0;
            }
            if (p_13.f0.f0)
            { 
                uint16_t l_197 = 0x2B22L;
                int32_t l_198 = 0L;
                int32_t l_199 = 0L;
                l_199 = (((8L > ((~(l_198 = (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((l_197 = ((safe_lshift_func_int16_t_s_u(0x1369L, (safe_sub_func_uint64_t_u_u(0xE767DA599C36F569LL, (safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(((+0x989A696EL) , g_31[1][0][2]), 6)), 2)))))) <= g_64)), 0xD3L)), 0x98C7L)))) || 0x49A5D95BAE7EB1C1LL)) > p_13.f0.f2) & 253UL);
                g_74 = 0L;
                p_14 |= l_171;
            }
            else
            { 
                l_200 = l_200;
            }
            for (g_129 = 0; (g_129 <= 3); g_129 += 1)
            { 
                uint32_t l_202[5] = {0xCE875DABL,0xCE875DABL,0xCE875DABL,0xCE875DABL,0xCE875DABL};
                int i, j;
                p_14 = (!0x152D3AD3L);
                ++l_202[1];
                if (g_8[g_129][p_13.f0.f0])
                    continue;
            }
        }
        g_102 = func_15((g_221 = ((safe_lshift_func_int8_t_s_u((((safe_lshift_func_int16_t_s_u(0x293DL, (4L && ((0x44L < ((safe_rshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s((g_103[0].f0.f1 = ((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(0x4B8BL, g_8[1][1])), 0)), 0xB2L)) , (-5L))), l_174.f0)) > l_162.f0.f0), l_174.f0)) & g_103[0].f1)) != p_13.f0.f0)))) , 2UL) == 1UL), 6)) ^ p_12)));
        l_223 = l_222;
    }
    p_13.f0.f1 = (!(safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s((g_40 = 255UL), ((l_229 != (safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u(((((-2L) || ((~(l_122 = (safe_div_func_int8_t_s_s((+((l_123 = (0x4C50D35BL ^ 1UL)) > p_13.f0.f0)), 9UL)))) > 0x9CDA35C18D9A8096LL)) ^ g_101) <= (-1L)), g_31[1][0][1])), p_12)), 253UL))) > l_124))), g_75)));
    ++g_242[0][0][0];
    return l_108;
}



static struct S1  func_15(int64_t  p_16)
{ 
    struct S1 l_39 = {{0x25AC9500L,4L,9UL},0xC0L};
    struct S3 l_57 = {-3L};
    struct S0 l_66 = {2L,0xF7CDB244L,0x5C6DFA21L};
    struct S0 l_82 = {0L,-5L,0UL};
    for (p_16 = 0; (p_16 <= 0); p_16 += 1)
    { 
        const union U4 l_34 = {-3L};
        struct S0 l_67 = {8L,0xF92AC6B8L,1UL};
        int32_t l_71 = 1L;
        if ((safe_mul_func_uint16_t_u_u((l_34 , (safe_mul_func_uint8_t_u_u(248UL, ((safe_lshift_func_uint8_t_u_u((l_39 , 9UL), 4)) >= p_16)))), 65532UL)))
        { 
            int16_t l_56 = 0x4AADL;
            ++g_40;
            g_58 = ((safe_sub_func_uint32_t_u_u((((safe_add_func_uint16_t_u_u((((g_4.f1 , (((safe_mod_func_uint16_t_u_u(((l_56 = ((l_39.f0.f1 |= (safe_rshift_func_int16_t_s_u(g_4.f1, (safe_rshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s((((g_55 &= p_16) || (l_34.f2 && p_16)) && p_16), l_39.f0.f0)) < 0xCA91L), g_31[1][0][2]))))) > (-1L))) | g_8[0][2]), 1UL)) <= g_31[4][0][1]) == g_8[1][2])) != g_31[1][0][2]) , g_55), 0x800BL)) , 0UL) != g_31[4][0][0]), g_40)) , l_57);
            l_39.f0.f1 ^= (l_34.f1 < (g_64 = (safe_lshift_func_int8_t_s_s((safe_add_func_uint64_t_u_u((+(((((l_34 , (g_58.f0 = p_16)) , l_34.f1) >= l_56) && g_40) || 0xA74FL)), g_4.f0)), 1))));
        }
        else
        { 
            l_67 = (l_66 = g_65);
        }
        for (l_39.f0.f0 = 0; (l_39.f0.f0 <= 0); l_39.f0.f0 += 1)
        { 
            uint64_t l_68 = 0xB9B03F06E9126721LL;
            int32_t l_72[2][3][2];
            union U4 l_83 = {0L};
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_72[i][j][k] = 0L;
                }
            }
            if (g_40)
                break;
            --l_68;
            for (l_67.f1 = 0; (l_67.f1 <= 0); l_67.f1 += 1)
            { 
                int8_t l_73[5][2][3] = {{{0L,0L,0x5BL},{1L,0xCEL,0xCEL}},{{0x5BL,(-1L),0xB0L},{1L,0xAFL,1L}},{{0L,0x5BL,0xB0L},{(-4L),(-4L),0xCEL}},{{(-1L),0x5BL,0x5BL},{0xCEL,0xAFL,1L}},{{(-1L),(-1L),(-1L)},{(-4L),0xCEL,1L}}};
                int i, j, k;
                --g_75;
                l_71 |= g_31[(l_39.f0.f0 + 2)][l_67.f1][(p_16 + 2)];
            }
            for (l_66.f0 = 0; (l_66.f0 <= 0); l_66.f0 += 1)
            { 
                l_67.f1 ^= (-9L);
                g_58.f0 = (safe_mul_func_uint16_t_u_u(((l_67.f2 != (safe_mod_func_uint32_t_u_u((l_72[1][1][0] ^ ((l_82 , l_83) , l_72[1][2][1])), p_16))) ^ 0x3770L), 0L));
                if (g_55)
                    continue;
            }
        }
        for (l_82.f1 = 0; (l_82.f1 <= 0); l_82.f1 += 1)
        { 
            struct S1 l_84 = {{0xDE7498C5L,0L,3UL},-4L};
            l_71 |= (-1L);
            if (g_65.f2)
            { 
                return l_84;
            }
            else
            { 
                g_65 = g_65;
                ++g_85;
                g_65.f1 = ((safe_mul_func_int16_t_s_s(0xA0C5L, (g_101 &= (g_100 &= ((g_31[3][0][0] <= ((((!((safe_div_func_int8_t_s_s(g_31[1][0][2], (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((l_84.f0.f1 = (safe_rshift_func_uint8_t_u_s((l_66.f1 = (g_99 | g_8[2][1])), g_58.f0))), g_64)), 11)))) > l_67.f0)) < l_34.f2) <= l_84.f0.f0) == p_16)) & g_85))))) > 0x0B5BC345L);
            }
            for (l_84.f0.f1 = 0; (l_84.f0.f1 >= 0); l_84.f0.f1 -= 1)
            { 
                l_71 &= 0L;
            }
        }
    }
    return g_102;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4.f0, "g_4.f0", print_hash_value);
    transparent_crc(g_4.f1, "g_4.f1", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_8[i][j], "g_8[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_31[i][j][k], "g_31[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_58.f0, "g_58.f0", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_65.f0, "g_65.f0", print_hash_value);
    transparent_crc(g_65.f1, "g_65.f1", print_hash_value);
    transparent_crc(g_65.f2, "g_65.f2", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_102.f0.f0, "g_102.f0.f0", print_hash_value);
    transparent_crc(g_102.f0.f1, "g_102.f0.f1", print_hash_value);
    transparent_crc(g_102.f0.f2, "g_102.f0.f2", print_hash_value);
    transparent_crc(g_102.f1, "g_102.f1", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_103[i].f0.f0, "g_103[i].f0.f0", print_hash_value);
        transparent_crc(g_103[i].f0.f1, "g_103[i].f0.f1", print_hash_value);
        transparent_crc(g_103[i].f0.f2, "g_103[i].f0.f2", print_hash_value);
        transparent_crc(g_103[i].f1, "g_103[i].f1", print_hash_value);

    }
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_242[i][j][k], "g_242[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
