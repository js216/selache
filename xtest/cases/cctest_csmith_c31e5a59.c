// SPDX-License-Identifier: MIT
// cctest_csmith_c31e5a59.c --- cctest case csmith_c31e5a59 (csmith seed 3273546329)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2b061826 */
/* @exp_ticks 0x8b26 */

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

// Options:   -s 3273546329 -o /tmp/csmith_gen_dnq2lfcp/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int8_t  f0;
   uint16_t  f1;
};
#pragma pack(pop)

struct S1 {
   uint32_t  f0;
   int8_t  f1;
   uint8_t  f2;
   uint32_t  f3;
   int16_t  f4;
   const uint8_t  f5;
   uint16_t  f6;
};

union U2 {
   uint8_t  f0;
   uint64_t  f1;
   int8_t * f2;
   uint32_t  f3;
   int8_t  f4;
};


static int8_t g_7 = (-1L);
static uint64_t g_13 = 18446744073709551615UL;
static uint64_t g_44 = 0x41DBC46D767C8FA1LL;
static uint8_t g_50 = 5UL;
static int32_t g_67 = 0xE1C21029L;
static struct S1 g_71 = {18446744073709551609UL,0x00L,0xDFL,0xCBC3393AL,0x9D8EL,0xDFL,0xF73EL};
static int64_t g_91 = 0x8DC8D62BAD2CC01ELL;
static int16_t g_97[5][6] = {{0x0B9FL,(-7L),(-7L),0x0B9FL,0L,0xFE43L},{0xFE43L,0x0B9FL,0x1687L,0x0B9FL,0xFE43L,(-4L)},{0x0B9FL,0xFE43L,(-4L),(-4L),0xFE43L,0x0B9FL},{(-7L),0x0B9FL,0L,0xFE43L,0L,0x0B9FL},{0L,(-7L),(-4L),0x1687L,0x1687L,(-4L)}};
static int8_t g_128 = 1L;
static struct S0 g_130 = {0xC9L,65528UL};
static union U2 g_146 = {246UL};
static uint16_t g_164[4] = {0xB608L,0xB608L,0xB608L,0xB608L};
static uint16_t g_185 = 8UL;
static uint64_t g_270 = 0x5CE39C1A7F16BB94LL;
static int32_t g_287 = (-1L);
static int32_t g_289 = 0x7ED3B33AL;
static uint64_t g_290 = 18446744073709551607UL;
static const int32_t *g_299 = &g_67;
static const int32_t **g_298[1][5] = {{&g_299,&g_299,&g_299,&g_299,&g_299}};
static int32_t *g_301 = (void*)0;
static int32_t **g_300 = &g_301;
static int16_t g_308 = 0x677EL;
static const int8_t g_311 = 0xF5L;
static const int8_t g_313 = 1L;
static const int8_t *g_312 = &g_313;
static struct S1 g_317 = {0x0610EA44L,0L,4UL,0UL,-8L,0x7FL,65534UL};
static const struct S1 *g_316 = &g_317;
static const uint32_t g_342[5][4][5] = {{{0xCF0B9372L,0UL,4294967288UL,0x3EF3CD14L,4294967288UL},{0x3EF3CD14L,0x3EF3CD14L,0UL,0x7A3C4AB2L,4294967288UL},{1UL,4294967286UL,0UL,0x3EF3CD14L,0xF6385176L},{0xE1D2EC96L,0UL,1UL,0UL,0xE1D2EC96L}},{{0x7A3C4AB2L,4294967286UL,4294967288UL,0xE1D2EC96L,4294967295UL},{0x7A3C4AB2L,4294967295UL,0xF6385176L,0xCF0B9372L,0xCF0B9372L},{0xE1D2EC96L,4294967292UL,0xE1D2EC96L,4294967286UL,4294967295UL},{1UL,0xCF0B9372L,4294967295UL,4294967286UL,0xE1D2EC96L}},{{4294967295UL,0xF6385176L,0xCF0B9372L,0xCF0B9372L,0xF6385176L},{0xF6385176L,0x8D9B2E33L,4294967295UL,0xE1D2EC96L,4294967288UL},{4294967292UL,0x8D9B2E33L,0xE1D2EC96L,0UL,1UL},{0x3EF3CD14L,0xF6385176L,0xF6385176L,0x3EF3CD14L,0UL}},{{4294967292UL,0xCF0B9372L,4294967288UL,0x7A3C4AB2L,0UL},{0xF6385176L,4294967292UL,1UL,4294967295UL,1UL},{4294967295UL,4294967295UL,0UL,0x7A3C4AB2L,4294967288UL},{1UL,4294967286UL,0UL,0x3EF3CD14L,0xF6385176L}},{{0xE1D2EC96L,0UL,1UL,0UL,0xE1D2EC96L},{0x7A3C4AB2L,4294967286UL,4294967288UL,0xE1D2EC96L,4294967295UL},{0x7A3C4AB2L,4294967295UL,0xF6385176L,0xCF0B9372L,0xCF0B9372L},{0xE1D2EC96L,4294967292UL,0xE1D2EC96L,4294967286UL,4294967295UL}}};
static int32_t ****g_347 = (void*)0;
static uint8_t g_359 = 0xA5L;
static int64_t g_419 = 1L;
static int64_t g_420 = (-1L);
static uint64_t g_421 = 0x0CF6ABFE5755B596LL;
static int32_t g_427 = 0xE6F619C1L;
static uint64_t g_428 = 18446744073709551608UL;
static uint16_t g_447 = 0x7EE1L;
static struct S1 *g_467 = &g_317;
static struct S1 **g_466[4][3][2] = {{{&g_467,&g_467},{&g_467,&g_467},{&g_467,&g_467}},{{&g_467,&g_467},{&g_467,&g_467},{&g_467,&g_467}},{{&g_467,&g_467},{&g_467,&g_467},{&g_467,&g_467}},{{&g_467,&g_467},{&g_467,&g_467},{&g_467,&g_467}}};
static struct S1 ***g_465[7] = {&g_466[3][1][1],&g_466[3][1][1],&g_466[3][1][1],&g_466[3][1][1],&g_466[3][1][1],&g_466[3][1][1],&g_466[3][1][1]};
static uint8_t g_470[7] = {255UL,255UL,255UL,255UL,255UL,255UL,255UL};
static struct S0 *g_491 = &g_130;
static uint32_t g_506 = 1UL;
static uint8_t g_581[4] = {9UL,9UL,9UL,9UL};
static int32_t g_602 = 0x8071C9BAL;
static uint32_t g_604 = 0x685BBDA4L;
static uint32_t g_608 = 5UL;
static int64_t g_659 = 5L;
static int64_t g_660 = 0x349CA7C1253F8450LL;
static uint8_t g_662[4] = {255UL,255UL,255UL,255UL};
static uint16_t g_688 = 0UL;
static uint32_t g_729 = 1UL;
static uint32_t *g_754[3] = {&g_146.f3,&g_146.f3,&g_146.f3};
static uint32_t **g_753 = &g_754[0];
static int64_t g_780 = 4L;
static int32_t g_781 = 0xC784389FL;
static int8_t g_782 = (-1L);
static int64_t g_783 = 0x2ADD214105471A57LL;
static int8_t g_784 = 0x0BL;
static uint32_t g_785 = 0xF5A689DBL;
static uint32_t g_816[4] = {0xE4BB363BL,0xE4BB363BL,0xE4BB363BL,0xE4BB363BL};
static struct S1 ****g_833[4][5][3] = {{{&g_465[4],(void*)0,(void*)0},{&g_465[4],(void*)0,&g_465[4]},{&g_465[4],&g_465[4],(void*)0},{(void*)0,(void*)0,(void*)0},{&g_465[4],(void*)0,(void*)0}},{{&g_465[4],(void*)0,&g_465[4]},{&g_465[4],&g_465[4],(void*)0},{(void*)0,(void*)0,(void*)0},{&g_465[4],(void*)0,(void*)0},{&g_465[4],(void*)0,&g_465[4]}},{{&g_465[4],&g_465[4],(void*)0},{(void*)0,(void*)0,(void*)0},{&g_465[4],(void*)0,(void*)0},{&g_465[4],(void*)0,&g_465[4]},{&g_465[4],&g_465[4],(void*)0}},{{(void*)0,(void*)0,(void*)0},{&g_465[4],(void*)0,(void*)0},{&g_465[4],(void*)0,&g_465[4]},{&g_465[4],&g_465[4],(void*)0},{(void*)0,(void*)0,(void*)0}}};
static uint64_t g_844 = 18446744073709551613UL;
static int8_t g_873[4] = {4L,4L,4L,4L};
static uint64_t g_874[1] = {0UL};
static struct S0 **g_899[4] = {&g_491,&g_491,&g_491,&g_491};
static struct S0 ***g_898 = &g_899[1];
static union U2 *g_914 = (void*)0;
static const uint16_t *g_959 = (void*)0;
static const uint16_t ** const g_958 = &g_959;
static int32_t g_1099[2] = {0x58D1F864L,0x58D1F864L};
static uint64_t g_1128 = 0x2664D54C91FB0A96LL;
static uint32_t g_1206 = 4294967289UL;
static uint32_t g_1249 = 0x992F9A22L;
static struct S0 ****g_1266 = &g_898;
static struct S0 *****g_1265 = &g_1266;
static int32_t ***g_1269 = &g_300;
static uint32_t g_1279 = 4294967293UL;
static int16_t g_1291 = 0xAC93L;
static int16_t g_1408[7][3][4] = {{{0x9A43L,0xE5A2L,(-7L),0L},{0x51A0L,0xB132L,(-5L),0xDBA9L},{(-5L),0xDBA9L,0x91AFL,0xE5A2L}},{{0xD43EL,1L,0L,0L},{0x319FL,0x319FL,0xCC54L,0xB132L},{(-7L),(-1L),(-1L),0x91AFL}},{{0xB132L,0L,(-1L),(-1L)},{0xCC54L,0L,0x7E9AL,0x91AFL},{0L,(-1L),1L,0xB132L}},{{0x0EB7L,0x319FL,0xCB84L,0L},{(-1L),1L,0x9DCBL,0xE5A2L},{0xCB84L,0xDBA9L,0x51A0L,0xDBA9L}},{{(-1L),0xB132L,0xE5A2L,0L},{0L,0xE5A2L,(-1L),0x9A43L},{0xDBA9L,0x7E9AL,(-2L),0xD43EL}},{{0xDBA9L,0x4C49L,(-1L),0xCC54L},{0L,0xD43EL,0xE5A2L,(-1L)},{(-1L),(-7L),0x51A0L,0x9DCBL}},{{0xCB84L,(-1L),0x9DCBL,1L},{(-1L),0xCB84L,0xCB84L,(-1L)},{0x0EB7L,0x91AFL,1L,(-1L)}}};
static uint64_t g_1413 = 18446744073709551615UL;
static uint32_t **g_1423 = &g_754[1];
static uint64_t *g_1561 = &g_874[0];
static uint64_t **g_1560 = &g_1561;
static int64_t *g_1590 = (void*)0;
static int64_t **g_1589 = &g_1590;



static uint8_t  func_1(void);
static int16_t  func_2(uint8_t  p_3, int8_t  p_4);
static int16_t  func_8(int32_t  p_9, uint64_t  p_10, const struct S1  p_11);
static const struct S1  func_14(uint16_t  p_15, int32_t  p_16, int64_t  p_17);
static int32_t  func_20(uint32_t  p_21);
static uint32_t  func_22(int8_t  p_23);
static uint8_t  func_25(const int8_t * p_26, int8_t * p_27, uint64_t * p_28);
static const int8_t * func_29(int32_t  p_30);




static uint8_t  func_1(void)
{ 
    int16_t l_5 = (-4L);
    int8_t *l_6[5] = {&g_7,&g_7,&g_7,&g_7,&g_7};
    int16_t *l_1649 = (void*)0;
    int32_t l_1650 = 1L;
    int32_t *l_1655 = &g_602;
    const struct S0 l_1656 = {0x0FL,65535UL};
    struct S0 l_1657 = {-1L,4UL};
    int i;
    (*l_1655) = ((l_1650 ^= func_2(l_5, (g_7 = l_5))) , (safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((1UL >= (((**g_1560) & 18446744073709551610UL) || l_5)), 2)), l_5)));
    (*g_300) = &l_1650;
    l_1657 = l_1656;
    return (*l_1655);
}



static int16_t  func_2(uint8_t  p_3, int8_t  p_4)
{ 
    uint64_t *l_12 = &g_13;
    const int32_t l_800 = 0L;
    int32_t l_1645 = 0x3A2111ACL;
    const int32_t **l_1646 = (void*)0;
    const int32_t **l_1647 = (void*)0;
    const int32_t **l_1648 = &g_299;
    l_1645 ^= (func_8(p_4, ((*l_12) &= 18446744073709551610UL), func_14(((0xF5F40E13L == (func_20(g_7) > (safe_div_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(l_800, (safe_rshift_func_int8_t_s_s(g_470[3], p_3)))), 0xDFL)) <= 0xD674BFF226BDC066LL), p_4)))) < 9L), p_3, l_800)) > l_800);
    (*l_1648) = &l_800;
    return p_3;
}



static int16_t  func_8(int32_t  p_9, uint64_t  p_10, const struct S1  p_11)
{ 
    union U2 *l_912 = &g_146;
    union U2 **l_913 = (void*)0;
    int16_t *l_915 = &g_308;
    uint8_t *l_916 = &g_662[2];
    int32_t l_919 = 0xADF54E1AL;
    uint8_t l_927 = 246UL;
    int32_t l_930 = 0L;
    struct S0 l_968 = {1L,0xFD6AL};
    int32_t ***l_973 = &g_300;
    int16_t l_998 = (-4L);
    const struct S0 *l_1012 = &l_968;
    uint16_t l_1021[1][4];
    struct S1 ***l_1055 = &g_466[0][2][1];
    int32_t ** const **l_1069 = (void*)0;
    int64_t *l_1076 = &g_91;
    int32_t l_1098 = 8L;
    int32_t l_1101[4];
    uint64_t l_1103 = 1UL;
    int32_t l_1152 = (-1L);
    uint32_t l_1160 = 18446744073709551613UL;
    int32_t l_1202 = 0xD35DEC37L;
    uint8_t l_1235[3][3];
    uint32_t l_1236 = 18446744073709551609UL;
    struct S1 *l_1246 = &g_317;
    struct S0 **l_1258 = &g_491;
    struct S0 *****l_1277[1][1];
    int32_t ** const ***l_1283 = &l_1069;
    struct S0 l_1301 = {0x8BL,0x2494L};
    const uint32_t l_1334 = 1UL;
    int32_t l_1343 = (-1L);
    uint16_t l_1376 = 0xD60DL;
    uint16_t * const l_1380[5][3][4] = {{{(void*)0,&l_968.f1,&l_1301.f1,(void*)0},{&l_1021[0][3],(void*)0,(void*)0,&l_968.f1},{(void*)0,&g_164[1],(void*)0,(void*)0}},{{&l_1021[0][3],&l_1021[0][3],&l_1301.f1,&g_447},{(void*)0,&l_1021[0][2],&l_1021[0][3],&l_968.f1},{&l_1021[0][3],&l_968.f1,(void*)0,&l_1021[0][3]}},{{&l_1021[0][3],&l_968.f1,&l_1021[0][2],&l_968.f1},{&l_968.f1,&l_1021[0][2],(void*)0,&g_447},{&l_1301.f1,&l_1021[0][3],(void*)0,(void*)0}},{{(void*)0,&g_164[1],&g_317.f6,&l_968.f1},{(void*)0,(void*)0,(void*)0,(void*)0},{&l_1301.f1,&l_968.f1,(void*)0,(void*)0}},{{&l_968.f1,&g_164[1],&l_1021[0][2],&g_447},{&l_1021[0][3],&l_1301.f1,(void*)0,&g_447},{&l_1021[0][3],&g_164[1],&l_1021[0][3],(void*)0}}};
    uint16_t * const *l_1379 = &l_1380[1][1][3];
    int32_t l_1411 = 1L;
    struct S0 ** const *l_1438 = &l_1258;
    struct S0 ** const **l_1437 = &l_1438;
    struct S0 ** const ***l_1436 = &l_1437;
    int16_t l_1451 = 0xB0AAL;
    uint16_t *l_1511 = &g_185;
    uint16_t **l_1510 = &l_1511;
    uint32_t l_1562 = 4294967291UL;
    uint64_t **l_1573[2][7][4] = {{{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561}},{{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561},{&g_1561,&g_1561,&g_1561,&g_1561}}};
    int16_t l_1591 = (-1L);
    int64_t l_1638 = (-1L);
    uint32_t l_1639[1][1][3];
    uint16_t l_1642 = 65526UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_1021[i][j] = 0x6A1DL;
    }
    for (i = 0; i < 4; i++)
        l_1101[i] = 1L;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            l_1235[i][j] = 246UL;
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_1277[i][j] = (void*)0;
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
                l_1639[i][j][k] = 0x609FB270L;
        }
    }
lbl_935:
    g_914 = l_912;
    if ((((l_915 != &g_97[2][2]) & 0x0D61115B5BD84A99LL) < (--(*l_916))))
    { 
        uint16_t *l_924 = &g_164[1];
        uint16_t *l_925[1][6][4] = {{{&g_71.f6,&g_71.f6,&g_71.f6,&g_71.f6},{&g_71.f6,&g_71.f6,&g_71.f6,&g_71.f6},{&g_71.f6,&g_71.f6,&g_71.f6,&g_71.f6},{&g_71.f6,&g_71.f6,&g_71.f6,&g_71.f6},{&g_71.f6,&g_71.f6,&g_71.f6,&g_71.f6},{&g_71.f6,&g_71.f6,&g_71.f6,&g_71.f6}}};
        struct S0 l_926 = {-3L,3UL};
        int32_t *l_936 = &g_602;
        int32_t l_938 = (-8L);
        int32_t *l_939 = &g_67;
        int i, j, k;
        l_930 &= (l_919 , (safe_mul_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(((*l_924) = g_289), (g_447 &= p_11.f3))) & (g_91 = 0xBAB608E4F9B41EA6LL)), ((l_926 , ((l_927--) && ((*l_915) |= p_9))) , ((*l_912) , l_926.f1)))));
lbl_937:
        for (p_9 = 28; (p_9 >= (-6)); --p_9)
        { 
            for (g_50 = 0; (g_50 == 32); g_50 = safe_add_func_int64_t_s_s(g_50, 3))
            { 
                if (g_308)
                    goto lbl_935;
                (*g_300) = &p_9;
                if (l_926.f0)
                    goto lbl_937;
            }
            l_936 = &p_9;
            return p_11.f4;
        }
        (*l_939) |= (l_938 ^= (l_919 , ((*l_936) = p_9)));
    }
    else
    { 
        uint32_t l_943[1][6] = {{0UL,0x48BC6336L,0UL,0UL,0x48BC6336L,0UL}};
        int8_t l_957 = 0x3BL;
        int32_t l_963 = 0xF7120173L;
        struct S0 l_965[5][1] = {{{8L,0x71C0L}},{{-7L,0x64C8L}},{{8L,0x71C0L}},{{-7L,0x64C8L}},{{8L,0x71C0L}}};
        int32_t *l_969 = &g_781;
        int32_t *l_1013[2][3] = {{(void*)0,(void*)0,(void*)0},{&g_67,&g_67,&g_67}};
        uint8_t l_1014 = 0x68L;
        int64_t *l_1026 = &g_91;
        int16_t l_1027 = 0xB39DL;
        int64_t l_1085 = 0xF3980FCB56AD109BLL;
        struct S1 **l_1150 = &g_467;
        int i, j;
        for (g_317.f3 = 1; (g_317.f3 <= 4); g_317.f3 += 1)
        { 
            int8_t l_941 = 0x6AL;
            int32_t l_942 = 0x2E43F03FL;
            int32_t l_946 = 0xD7A27C3CL;
            int32_t l_947[4][2] = {{2L,3L},{2L,2L},{3L,2L},{2L,3L}};
            int32_t *l_1009 = &l_919;
            int i, j;
            for (p_9 = 3; (p_9 >= 0); p_9 -= 1)
            { 
                int32_t *l_940[7];
                uint16_t l_948 = 1UL;
                uint32_t l_960 = 0xBF48CDCBL;
                struct S0 l_964 = {0x26L,0x1DE8L};
                struct S0 *l_966 = &g_130;
                int i, j;
                for (i = 0; i < 7; i++)
                    l_940[i] = &g_602;
                l_943[0][2]++;
                l_948++;
                l_930 = (g_581[p_9] , (((safe_mod_func_uint32_t_u_u((g_97[p_9][g_317.f3] , ((safe_mod_func_uint8_t_u_u((((safe_add_func_int32_t_s_s((l_942 = (l_927 <= l_957)), (g_311 != ((l_947[3][0] ^= ((void*)0 != g_958)) || g_317.f1)))) < l_960) & 0xC0L), 0x89L)) >= g_317.f3)), l_957)) > (-10L)) , p_11.f4));
                (*l_966) = ((safe_rshift_func_int8_t_s_s(l_963, 4)) , (l_965[4][0] = l_964));
                return l_965[4][0].f1;
            }
            for (g_44 = 1; (g_44 <= 4); g_44 += 1)
            { 
                struct S0 l_967 = {0xFBL,65535UL};
                int i, j;
                for (g_783 = 0; (g_783 <= 4); g_783 += 1)
                { 
                    l_968 = l_967;
                }
                if (g_97[g_317.f3][g_44])
                    continue;
            }
            for (g_780 = 3; (g_780 >= 1); g_780 -= 1)
            { 
                struct S1 l_972 = {0xCC51C595L,5L,0x44L,0xC5D5B3A3L,0x1927L,0xECL,0xC454L};
                struct S1 ****l_975 = &g_465[4];
                int i;
                if (g_44)
                    goto lbl_935;
                (*g_300) = l_969;
                for (g_844 = 0; (g_844 <= 4); g_844 += 1)
                { 
                    struct S1 *****l_976 = &g_833[1][0][2];
                    const struct S1 **l_979 = (void*)0;
                    const struct S1 *** const l_978 = &l_979;
                    const struct S1 *** const *l_977 = &l_978;
                    int i, j;
                    (**g_300) = (safe_sub_func_uint8_t_u_u(((l_972 , ((*g_467) , l_973)) != &g_298[0][0]), g_581[g_780]));
                    (**g_300) = (+(((*l_976) = l_975) != (l_977 = (p_11 , (void*)0))));
                    p_9 ^= ((***l_973) = g_97[g_317.f3][(g_317.f3 + 1)]);
                    (*l_969) |= 0xA81C4BE1L;
                    if (g_662[g_780])
                        continue;
                }
                if (g_581[g_780])
                { 
                    int32_t **l_1001 = &l_969;
                    int64_t *l_1005 = (void*)0;
                    int64_t *l_1006[7];
                    int32_t *l_1007[3][6][5] = {{{(void*)0,&l_930,&l_930,&l_919,&l_946},{&l_947[1][1],&l_930,&l_947[0][0],&l_919,&l_947[0][0]},{&l_947[2][0],&l_947[2][0],&l_942,&l_942,&l_919},{&l_942,&l_946,&l_930,&l_947[2][0],(void*)0},{&l_942,&l_919,&l_930,&l_919,&l_947[1][1]},{&l_947[2][0],&l_946,&l_930,&l_947[2][0],&l_942}},{{&l_930,&l_947[2][0],&l_947[2][0],&g_602,&g_602},{&l_947[2][0],&l_930,&l_919,&g_602,&g_602},{&l_930,&l_930,&l_930,&l_946,&l_942},{&l_930,&l_946,(void*)0,&l_947[0][0],&l_947[1][1]},{&l_946,&g_67,&l_946,&l_947[1][1],(void*)0},{&l_942,&l_947[1][1],(void*)0,&l_947[1][1],&l_919}},{{&l_930,&l_942,&l_930,&l_946,&l_947[0][0]},{&l_930,&l_930,&l_919,&l_946,&l_946},{&l_930,&l_947[2][0],&l_947[2][0],&l_930,&g_67},{&l_930,&l_947[1][1],&l_930,&l_942,&l_930},{&l_942,&l_947[2][0],&l_930,(void*)0,&l_946},{&l_946,&l_947[0][0],&l_930,&l_942,&l_947[1][1]}}};
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_1006[i] = &g_420;
                    (*l_969) = (g_581[g_780] <= ((safe_div_func_uint32_t_u_u((1UL || (safe_rshift_func_uint16_t_u_u((((safe_div_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u(g_97[g_317.f3][(g_317.f3 + 1)], 5)) ^ (safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(g_287, g_581[g_780])), (safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(p_11.f4, 4)), 5UL)), l_998))))), l_946)) , g_785) || 0UL), p_11.f2))), 7L)) , 0x9AL));
                    g_781 = (((safe_mod_func_uint8_t_u_u((((**l_973) = &p_9) == ((*l_1001) = &g_781)), (-6L))) , (((g_419 = (safe_mod_func_uint64_t_u_u(((((((~((*l_915) = (-1L))) == ((g_164[g_780] = ((**l_1001) > ((g_347 != (g_185 , (void*)0)) <= p_11.f5))) | (-7L))) || g_660) , g_421) && 0L) == g_130.f1), p_11.f4))) , (***l_973)) != 1L)) != p_11.f4);
                    if (g_71.f6)
                        goto lbl_935;
                }
                else
                { 
                    int32_t **l_1008[6][7] = {{&l_969,&l_969,&l_969,&l_969,&l_969,&l_969,&l_969},{&l_969,&l_969,&l_969,(void*)0,&l_969,&l_969,(void*)0},{&l_969,&l_969,&l_969,&l_969,&l_969,&l_969,&l_969},{&l_969,(void*)0,(void*)0,&l_969,&l_969,&l_969,&l_969},{&l_969,&l_969,&l_969,&l_969,&l_969,&l_969,&l_969},{&l_969,&l_969,(void*)0,(void*)0,&l_969,&l_969,&l_969}};
                    const struct S0 *l_1010 = &l_968;
                    const struct S0 **l_1011[1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_1011[i] = (void*)0;
                    l_1009 = ((*g_300) = &p_9);
                    if (g_130.f1)
                        goto lbl_935;
                    l_1012 = l_1010;
                    return p_11.f3;
                }
                for (l_972.f3 = 0; (l_972.f3 <= 3); l_972.f3 += 1)
                { 
                    (*g_300) = l_969;
                    return g_428;
                }
            }
        }
        l_919 = (*l_969);
        l_1014--;
        (*l_969) |= p_11.f4;
        if (((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(g_71.f4, (l_1021[0][3] > (g_688 <= ((((&l_912 != &g_914) , (*g_312)) ^ ((safe_mul_func_int16_t_s_s(((*l_915) &= ((safe_div_func_int64_t_s_s(((*l_1026) |= g_816[3]), p_11.f0)) == 0x28L)), g_447)) <= p_10)) & p_11.f2))))), g_782)) != l_1027))
        { 
            struct S0 l_1028 = {-7L,0x3699L};
            struct S0 *l_1029 = &l_965[4][0];
            int32_t *l_1043 = &l_930;
            int32_t ** const ***l_1070 = (void*)0;
            int32_t ** const ***l_1071 = &l_1069;
            struct S1 **l_1090 = &g_467;
            int32_t l_1100 = 0xE50F3EAAL;
            int32_t l_1102[5];
            union U2 l_1157 = {0x39L};
            uint64_t l_1207 = 0xD70F9FEA2469C853LL;
            int i;
            for (i = 0; i < 5; i++)
                l_1102[i] = (-9L);
            (*l_1029) = l_1028;
            for (l_1027 = 0; (l_1027 <= 10); ++l_1027)
            { 
                uint64_t l_1040[7] = {0x01FDD981C91034D3LL,0x01FDD981C91034D3LL,0x01FDD981C91034D3LL,0x01FDD981C91034D3LL,0x01FDD981C91034D3LL,0x01FDD981C91034D3LL,0x01FDD981C91034D3LL};
                int32_t * const l_1041 = &g_602;
                int32_t **l_1042 = &l_1013[1][1];
                struct S1 ***l_1054 = &g_466[2][0][0];
                struct S0 l_1059[2][3] = {{{0x09L,0UL},{0xA9L,0UL},{0xA9L,0UL}},{{0x09L,0UL},{0xA9L,0UL},{0xA9L,0UL}}};
                int i, j;
                l_1040[4] = (~(255UL || (safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((safe_div_func_int32_t_s_s(((g_688 , ((*l_912) = (*l_912))) , (~g_146.f0)), 0x6371896CL)), 8UL)), 0))));
                (*l_1042) = ((*l_1012) , l_1041);
                (*g_300) = l_1043;
                if ((safe_mod_func_uint32_t_u_u(0UL, ((*l_1043) , (p_11 , p_11.f1)))))
                { 
                    const struct S1 **l_1046 = &g_316;
                    struct S0 l_1047 = {-2L,2UL};
                    uint32_t *l_1056 = (void*)0;
                    uint32_t *l_1057 = &g_506;
                    uint32_t l_1058 = 4294967295UL;
                    (*l_1046) = &p_11;
                    (**g_300) = (((((((*l_1026) = ((l_1047 , (p_9 != (safe_add_func_uint32_t_u_u(((*l_1057) = (safe_rshift_func_int16_t_s_u(((p_11.f5 ^ (safe_div_func_int8_t_s_s((((*l_969) |= ((((*l_1041) == 247UL) , (((g_270 , l_1054) != l_1055) < (***l_973))) < (***l_973))) < (*g_299)), (*g_312)))) <= (*l_1041)), 4))), (*l_1043))))) <= g_342[1][3][3])) != 0x901EAE450F44B469LL) , g_317.f2) < l_1058) < 5UL) || g_44);
                }
                else
                { 
                    (*l_1029) = l_1059[1][2];
                    if ((**g_300))
                        break;
                }
            }
            p_9 |= (safe_lshift_func_int8_t_s_s((*g_312), (~p_10)));
            if ((safe_mul_func_uint16_t_u_u((p_11 , ((safe_mul_func_uint16_t_u_u(((((((p_9 = (-1L)) < ((safe_sub_func_int32_t_s_s((&l_973 != ((*l_1071) = l_1069)), (safe_sub_func_int16_t_s_s(1L, (((*g_914) = (*g_914)) , (safe_rshift_func_int8_t_s_u(0x7BL, g_13))))))) <= g_447)) , l_1076) == (void*)0) && p_11.f0) > p_11.f0), g_130.f0)) & 0xA7L)), (*l_1043))))
            { 
                uint64_t l_1080 = 0x26FAC4DA6B08FA53LL;
                struct S1 *****l_1093 = &g_833[1][1][1];
                int32_t l_1096[1];
                int8_t *l_1110 = &l_1028.f0;
                uint32_t l_1113 = 1UL;
                uint32_t l_1127 = 0x804B755FL;
                union U2 *l_1129 = &g_146;
                int i;
                for (i = 0; i < 1; i++)
                    l_1096[i] = 0x31FEA88AL;
                (*l_1043) ^= p_11.f5;
                if ((safe_mul_func_uint16_t_u_u((*l_969), p_11.f6)))
                { 
                    struct S0 **l_1079 = &g_491;
                    int8_t *l_1091 = &g_71.f1;
                    int32_t ***l_1092 = (void*)0;
                    struct S1 *****l_1094 = &g_833[1][1][1];
                    int32_t l_1095 = (-9L);
                    int32_t l_1097[7] = {1L,1L,1L,1L,1L,1L,1L};
                    int i;
                    (*l_1079) = (void*)0;
                    --l_1080;
                    g_67 ^= ((*l_1043) ^= (safe_sub_func_uint32_t_u_u(((0UL < ((((*l_1029) , (l_1085 < ((p_11.f2 ^ (((!(*l_969)) || ((((*l_1091) = (safe_unary_minus_func_uint32_t_u((p_10 ^ ((void*)0 == l_1090))))) , l_1092) != (void*)0)) == p_11.f5)) || 0xDBB3DC13L))) != 0x1B5DL) ^ 0x8933E2C73AC2CF3ALL)) , p_9), 6L)));
                    l_1094 = l_1093;
                    l_1103++;
                }
                else
                { 
                    uint64_t *l_1114 = &g_146.f1;
                    uint64_t *l_1115 = &l_1103;
                    int32_t *****l_1116[3];
                    int32_t l_1117 = 0L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1116[i] = &g_347;
                    p_9 = ((((safe_lshift_func_uint16_t_u_s(((((*l_1115) &= ((*l_1114) = ((safe_div_func_int64_t_s_s(((void*)0 != l_1110), (((1UL ^ 6L) && g_342[1][3][3]) , 0x2139C61CC87D8D8FLL))) , ((safe_mul_func_uint8_t_u_u(((l_1113 = p_11.f0) <= p_11.f4), 0xDDL)) ^ 0xE960C5C8L)))) || g_146.f4) == p_10), g_427)) , l_1070) == l_1116[2]) != l_1117);
                }
                for (g_782 = 0; (g_782 < (-18)); g_782 = safe_sub_func_uint16_t_u_u(g_782, 3))
                { 
                    int32_t l_1120 = 0xE485E858L;
                    union U2 **l_1130 = &g_914;
                    (*l_1130) = ((l_1120 & (safe_sub_func_uint16_t_u_u(65535UL, ((safe_mul_func_uint8_t_u_u((p_9 & (((((((safe_rshift_func_int8_t_s_s(0xDBL, (l_1127 = ((*l_1110) = (0x5761EC93B0FB83B4LL || 0UL))))) && p_11.f0) | p_11.f3) ^ 0UL) ^ g_1128) || p_10) >= 1UL)), 0x0CL)) == l_1120)))) , l_1129);
                    return l_1120;
                }
            }
            else
            { 
                int16_t l_1133 = 1L;
                int32_t l_1134[3];
                int32_t l_1151[2][6][5] = {{{0x9460F9CFL,(-1L),6L,0x5C140069L,6L},{6L,6L,(-1L),0x5C140069L,0x1FD6C5B0L},{(-1L),0x9460F9CFL,0x9460F9CFL,(-1L),6L},{(-1L),0x5C140069L,0x25DB5D86L,0x25DB5D86L,0x5C140069L},{6L,0x9460F9CFL,0x25DB5D86L,(-1L),(-1L)},{0x9460F9CFL,6L,0x9460F9CFL,0x25DB5D86L,(-1L)}},{{0x5C140069L,(-1L),(-1L),(-1L),0x5C140069L},{0x9460F9CFL,(-1L),6L,0x5C140069L,6L},{6L,6L,(-1L),0x5C140069L,0x1FD6C5B0L},{(-1L),0x9460F9CFL,0x9460F9CFL,(-1L),6L},{(-1L),0x5C140069L,0x25DB5D86L,0x25DB5D86L,0x5C140069L},{6L,0x9460F9CFL,0x25DB5D86L,(-1L),(-1L)}}};
                uint16_t *l_1161[2][3][2] = {{{&g_688,&g_688},{&g_688,&g_185},{&g_164[3],(void*)0}},{{&g_185,(void*)0},{&g_164[3],&g_185},{&g_688,&g_688}}};
                uint32_t *l_1162 = &g_146.f3;
                int32_t ****l_1234 = &l_973;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1134[i] = (-2L);
                for (l_963 = 0; (l_963 <= 26); ++l_963)
                { 
                    uint16_t l_1135 = 3UL;
                    l_1135++;
                }
                (*l_1043) |= (safe_mul_func_int16_t_s_s(g_317.f2, ((((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(0UL, (l_1134[2] ^ ((*l_969) = (safe_lshift_func_uint8_t_u_u((g_602 ^ ((((l_1151[0][5][0] &= (safe_add_func_uint8_t_u_u((l_1150 == l_1090), (g_581[0] &= 6UL)))) >= l_1152) != 65526UL) | p_10)), (*l_969))))))) | g_311), (*g_312))), 0x4B36DD6BL)) , l_1134[2]) > l_1134[1]) & 7UL)));
                p_9 |= ((g_311 , (p_11.f6 < ((((*l_1162) = ((*l_1043) = (safe_mul_func_int16_t_s_s((((void*)0 == &g_347) , (safe_sub_func_uint32_t_u_u((l_1157 , (safe_mod_func_uint16_t_u_u((g_688 = ((((0x75EFL == p_11.f3) > p_10) ^ l_1160) != l_1134[1])), 1UL))), 1L))), p_11.f0)))) , 0xBCL) >= 0xAFL))) >= 4294967287UL);
                p_9 ^= (safe_mul_func_int16_t_s_s((((*l_916) = 255UL) , (safe_mod_func_int8_t_s_s((*g_312), (safe_sub_func_int32_t_s_s((*g_299), ((safe_sub_func_uint8_t_u_u(0x75L, p_11.f4)) , 6L)))))), ((((((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u((*l_969), l_1151[0][5][0])), g_873[3])), p_11.f0)), p_11.f5)), 14)), p_11.f6)) ^ p_11.f4), p_11.f1)) != (*l_1043)) , 1UL) , p_11.f4) != p_11.f0) && 0x28B7L)));
                for (g_317.f4 = (-30); (g_317.f4 < 5); g_317.f4 = safe_add_func_int16_t_s_s(g_317.f4, 1))
                { 
                    int8_t *l_1203[4][5][7] = {{{(void*)0,&g_130.f0,&g_317.f1,&g_130.f0,(void*)0,&g_873[1],&g_873[2]},{&g_7,&g_130.f0,&g_130.f0,&g_71.f1,&g_146.f4,&g_130.f0,&l_965[4][0].f0},{(void*)0,&g_873[3],&g_317.f1,&g_873[1],(void*)0,&g_873[2],(void*)0},{&g_7,&g_71.f1,(void*)0,(void*)0,&g_317.f1,&g_130.f0,&l_968.f0},{(void*)0,&g_128,&g_873[1],&g_873[1],(void*)0,&g_873[1],&g_873[1]}},{{&g_782,&g_71.f1,(void*)0,&g_71.f1,&g_782,&g_7,&l_968.f0},{&l_957,&g_873[3],&g_873[1],&g_130.f0,(void*)0,&g_782,(void*)0},{&g_146.f4,&g_130.f0,(void*)0,&l_957,&g_317.f1,&l_968.f0,&l_965[4][0].f0},{&l_957,&g_130.f0,&g_873[1],&g_71.f1,(void*)0,&g_782,&g_873[2]},{&g_782,&l_957,(void*)0,&l_957,&g_146.f4,(void*)0,(void*)0}},{{&g_873[2],&g_784,(void*)0,&g_784,&g_873[2],&g_873[1],&g_873[1]},{&l_968.f0,&l_968.f0,&g_128,(void*)0,&g_130.f0,(void*)0,&l_1157.f4},{&g_782,(void*)0,(void*)0,&l_957,&g_873[1],&g_873[1],&g_873[1]},{&l_968.f0,(void*)0,&g_71.f1,&g_784,&g_7,(void*)0,&g_130.f0},{&g_873[2],(void*)0,(void*)0,&l_957,&g_782,&g_873[1],&g_873[1]}},{{&l_968.f0,(void*)0,&g_873[1],(void*)0,&l_968.f0,(void*)0,&g_130.f0},{(void*)0,(void*)0,&l_957,&g_784,&g_782,&g_317.f1,&g_873[1]},{&g_130.f0,&l_968.f0,&g_873[1],&g_873[2],&g_7,&g_130.f0,&l_1157.f4},{(void*)0,&g_784,(void*)0,&l_957,&g_873[1],&g_317.f1,&g_873[1]},{&l_968.f0,&l_1028.f0,&g_71.f1,&g_873[2],&g_130.f0,(void*)0,(void*)0}}};
                    int32_t l_1204 = 0x9DEAB061L;
                    int32_t l_1205 = 0xF062921AL;
                    int64_t *l_1233 = &g_660;
                    int16_t *l_1237 = &l_1133;
                    int i, j, k;
                    p_9 |= ((safe_unary_minus_func_int8_t_s(((((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(((0x85L || ((*l_1043) &= (safe_lshift_func_int16_t_s_s((-2L), ((safe_div_func_uint64_t_u_u((((safe_rshift_func_int8_t_s_s((((l_1134[1] | (l_1204 = ((((*l_1026) = p_11.f5) , (safe_lshift_func_int8_t_s_s((l_1202 , 1L), 7))) < (((((g_785 > p_11.f4) | 1UL) , p_11.f0) , 0x4B89L) > p_11.f1)))) | 0x8648L) & 0x7B8BL), l_1151[0][2][4])) || l_1204) & 0UL), g_50)) < (*g_312)))))) | l_1205), 6)) , p_11.f4), g_1206)) & g_317.f5) || (-1L)) , p_11.f1))) ^ l_1207);
                    p_9 |= (safe_rshift_func_int16_t_s_s(((*l_1237) = ((safe_lshift_func_uint8_t_u_u(((*l_916) = (((g_659 = (l_1157 , ((*l_969) = (safe_sub_func_int16_t_s_s((l_1134[0] == (((safe_mod_func_int32_t_s_s((((((safe_mul_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((safe_sub_func_int64_t_s_s(((0xDE3E3A599C3167CCLL == ((g_71.f3 >= ((l_1235[0][1] = (safe_lshift_func_uint16_t_u_s((((((((*l_1233) = (safe_unary_minus_func_uint32_t_u(((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(l_1204, (((*l_915) |= ((((*l_1026) = ((safe_sub_func_uint16_t_u_u(p_11.f4, 0xB94FL)) & (-1L))) || g_470[3]) & 0UL)) || p_11.f2))), l_1134[1])) < (*g_312))))) , p_11.f6) ^ l_1204) >= p_11.f6) , l_1234) == (void*)0), g_97[3][3]))) == g_428)) && 0xF08C53E8DDEDE743LL)) >= l_1134[2]), g_289)) <= p_11.f4), 0x291627FCD4156F4ALL)), 0x8BL)) , 0xA93DL) ^ 0xF007L) || l_1205) ^ l_1205), 0x145902F6L)) >= p_11.f4) || 0x75F7L)), g_71.f5))))) && g_428) & 0x5C5CL)), g_50)) != l_1236)), 6));
                }
            }
        }
        else
        { 
            uint8_t l_1250 = 0x2DL;
            for (g_447 = 0; (g_447 <= 0); g_447 += 1)
            { 
                return p_11.f2;
            }
            (*l_969) = (((safe_mod_func_uint32_t_u_u(p_9, (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((safe_div_func_uint16_t_u_u(65535UL, (p_11.f3 ^ (l_1246 == &p_11)))) | ((safe_div_func_int64_t_s_s(((p_11.f4 ^ ((l_1026 == (void*)0) ^ g_1249)) , g_688), g_1128)) | p_10)), 4)), 0x58L)))) <= p_11.f3) ^ l_1250);
        }
    }
    for (g_420 = 1; (g_420 >= 0); g_420 -= 1)
    { 
        int16_t l_1251 = (-6L);
        struct S0 l_1252 = {0x90L,0x3E3BL};
        struct S0 **l_1260[6][4][6] = {{{&g_491,&g_491,(void*)0,&g_491,&g_491,(void*)0},{&g_491,&g_491,&g_491,&g_491,&g_491,&g_491},{&g_491,&g_491,&g_491,&g_491,&g_491,&g_491},{&g_491,&g_491,&g_491,&g_491,&g_491,&g_491}},{{&g_491,&g_491,&g_491,&g_491,&g_491,(void*)0},{&g_491,&g_491,(void*)0,&g_491,(void*)0,(void*)0},{&g_491,&g_491,&g_491,&g_491,&g_491,&g_491},{(void*)0,&g_491,&g_491,&g_491,&g_491,&g_491}},{{&g_491,&g_491,(void*)0,&g_491,&g_491,&g_491},{&g_491,&g_491,&g_491,&g_491,&g_491,&g_491},{(void*)0,&g_491,&g_491,&g_491,&g_491,&g_491},{&g_491,&g_491,&g_491,&g_491,&g_491,&g_491}},{{&g_491,&g_491,&g_491,&g_491,(void*)0,&g_491},{&g_491,&g_491,&g_491,&g_491,&g_491,&g_491},{&g_491,&g_491,(void*)0,&g_491,&g_491,&g_491},{&g_491,&g_491,&g_491,&g_491,(void*)0,&g_491}},{{&g_491,&g_491,&g_491,&g_491,&g_491,(void*)0},{&g_491,&g_491,(void*)0,&g_491,&g_491,(void*)0},{&g_491,&g_491,&g_491,&g_491,&g_491,&g_491},{&g_491,&g_491,&g_491,&g_491,&g_491,&g_491}},{{&g_491,&g_491,&g_491,(void*)0,&g_491,&g_491},{(void*)0,&g_491,&g_491,&g_491,&g_491,&g_491},{&g_491,&g_491,&g_491,&g_491,&g_491,&g_491},{&g_491,&g_491,&g_491,&g_491,&g_491,(void*)0}}};
        struct S0 ** const l_1261 = &g_491;
        struct S0 *****l_1276 = &g_1266;
        int32_t l_1300 = 0xB195D598L;
        int i, j, k;
        if (l_1251)
            break;
        l_1252 = l_1252;
        for (g_784 = 1; (g_784 >= 0); g_784 -= 1)
        { 
            struct S1 ***l_1253 = (void*)0;
            struct S1 ****l_1254 = &l_1055;
            int32_t l_1255 = (-8L);
            struct S0 ***l_1259[7][5] = {{&g_899[1],&g_899[1],&g_899[1],&g_899[1],&g_899[1]},{&l_1258,&l_1258,&l_1258,&l_1258,&l_1258},{&g_899[1],&g_899[1],&g_899[1],&g_899[1],&g_899[1]},{&l_1258,&l_1258,&l_1258,&l_1258,&l_1258},{&g_899[1],&g_899[1],&g_899[1],&g_899[1],&g_899[1]},{&l_1258,&l_1258,&l_1258,&l_1258,&l_1258},{&g_899[1],&g_899[1],&g_899[1],&g_899[1],&g_899[1]}};
            int32_t l_1278 = 0L;
            int32_t ***** const l_1292 = &g_347;
            int i, j;
            (*l_1254) = l_1253;
            if ((l_1255 == (p_11.f3 || (safe_sub_func_uint64_t_u_u(p_11.f1, ((l_1260[5][2][0] = l_1258) == l_1261))))))
            { 
                int64_t l_1262 = (-4L);
                struct S0 ****l_1264 = &g_898;
                struct S0 *****l_1263 = &l_1264;
                if (l_1262)
                { 
                    int32_t ***l_1267 = (void*)0;
                    int32_t ****l_1268[4][2] = {{&l_1267,&l_1267},{&l_1267,&l_1267},{&l_1267,&l_1267},{&l_1267,&l_1267}};
                    int i, j;
                    g_1265 = l_1263;
                    g_1269 = l_1267;
                    return p_11.f2;
                }
                else
                { 
                    return p_11.f2;
                }
            }
            else
            { 
                int64_t **l_1274 = &l_1076;
                int64_t * const l_1275 = &g_420;
                struct S0 *l_1282 = (void*)0;
                if (((g_816[2] , p_11.f1) >= (((((((safe_div_func_uint64_t_u_u(((safe_sub_func_uint32_t_u_u((l_1255 = (g_662[1] >= ((((*l_1274) = &g_91) == l_1275) && ((l_1277[0][0] = (g_317.f4 , l_1276)) != (void*)0)))), p_11.f6)) > (-4L)), g_311)) < g_844) >= g_71.f0) > l_1278) >= l_1252.f0) , p_11.f3) || p_11.f5)))
                { 
                    g_1279--;
                    (**g_1269) = &l_1278;
                    if (p_11.f2)
                        continue;
                    return g_660;
                }
                else
                { 
                    uint64_t *l_1290 = &g_874[0];
                    int32_t *l_1298 = &l_1152;
                    int32_t l_1299 = 0x9912FDBBL;
                    (*l_1261) = l_1282;
                    l_1283 = &l_1069;
                    l_1300 = (((g_506 ^ (safe_unary_minus_func_int16_t_s(((safe_div_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((~0UL), ((*l_1290) |= l_1251))), g_1291)) > (((void*)0 != l_1292) >= (((*l_1298) = (((safe_add_func_uint8_t_u_u(((*l_916) &= ((safe_add_func_int32_t_s_s((~((p_9 == p_10) , p_11.f6)), p_11.f2)) , g_660)), 1UL)) , (-1L)) , p_11.f2)) , l_1299)))))) , 0xE7EA97D3177A7F04LL) | p_11.f2);
                    return p_11.f0;
                }
            }
        }
    }
    if (((l_1301 , 0xA95B88A1577A4436LL) || ((safe_add_func_uint8_t_u_u(g_308, p_11.f3)) ^ g_128)))
    { 
        int32_t l_1306[5];
        int64_t l_1351 = (-1L);
        uint64_t l_1352 = 18446744073709551610UL;
        struct S0 *l_1365[1];
        union U2 *l_1366 = (void*)0;
        int32_t ***l_1396 = &g_300;
        uint32_t * const *l_1416 = &g_754[0];
        uint32_t **l_1417 = &g_754[1];
        int32_t *l_1429 = &g_602;
        int32_t *l_1434 = &l_1202;
        int64_t l_1461[7];
        union U2 l_1500 = {0xE6L};
        uint16_t *l_1508 = &g_130.f1;
        uint16_t **l_1507 = &l_1508;
        int32_t ** const *l_1551 = (void*)0;
        struct S1 ** const *l_1599 = &g_466[0][2][1];
        struct S1 ** const **l_1598 = &l_1599;
        int16_t **l_1633 = &l_915;
        int i;
        for (i = 0; i < 5; i++)
            l_1306[i] = 0xA7DA4699L;
        for (i = 0; i < 1; i++)
            l_1365[i] = &l_1301;
        for (i = 0; i < 7; i++)
            l_1461[i] = 0xD47CF2AADFEBD5FBLL;
lbl_1594:
        l_930 = p_10;
        for (g_359 = 0; (g_359 <= 3); g_359 += 1)
        { 
            uint64_t *l_1328 = &g_270;
            int16_t *l_1329 = &g_97[2][1];
            int32_t l_1330 = (-1L);
            uint16_t *l_1331 = &g_130.f1;
            struct S1 l_1332 = {0x698FD8EFL,0x30L,0UL,5UL,0x94F6L,9UL,65533UL};
            uint32_t *l_1333 = &g_506;
            int32_t l_1340 = 0xE8BC2692L;
            int32_t l_1341 = 0xA00175B3L;
            int32_t l_1342 = 0x8EAE4681L;
            int32_t l_1344 = 0x41607F80L;
            int32_t l_1345 = 4L;
            int32_t l_1346 = (-1L);
            int32_t l_1347 = 0xFA6E2C9AL;
            int32_t l_1348 = (-1L);
            int32_t l_1349 = 0xE1E06E33L;
            int32_t l_1350 = 0xC8671AAFL;
            int8_t *l_1357[2][2][7] = {{{&l_968.f0,&l_968.f0,&l_968.f0,&l_968.f0,&l_968.f0,&l_968.f0,&l_968.f0},{&g_71.f1,&g_71.f1,&g_71.f1,&g_71.f1,&g_71.f1,&g_71.f1,&g_71.f1}},{{&l_968.f0,&l_968.f0,&l_968.f0,&l_968.f0,&l_968.f0,&l_968.f0,&l_968.f0},{&g_71.f1,&g_71.f1,&g_71.f1,&g_71.f1,&g_71.f1,&g_71.f1,&g_71.f1}}};
            int8_t **l_1356 = &l_1357[1][0][5];
            struct S1 **l_1363 = &g_467;
            struct S0 *l_1364 = &g_130;
            int32_t l_1409 = 0x6C4A8591L;
            int32_t l_1410[6] = {0x5D110842L,0x5D110842L,0x5D110842L,0x5D110842L,0x5D110842L,0x5D110842L};
            uint32_t l_1452 = 7UL;
            uint64_t * const l_1466 = (void*)0;
            uint16_t l_1474 = 0xBCF1L;
            int32_t l_1529 = 0L;
            union U2 l_1548 = {1UL};
            int32_t ** const *l_1549 = &g_300;
            int32_t ** const **l_1550[5][2];
            struct S0 ** const l_1564 = &l_1365[0];
            int64_t l_1607[4];
            const uint16_t l_1611[4] = {0x2200L,0x2200L,0x2200L,0x2200L};
            int i, j, k;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1550[i][j] = &l_1549;
            }
            for (i = 0; i < 4; i++)
                l_1607[i] = 0L;
            if ((safe_mul_func_int8_t_s_s((l_1306[4] , (safe_sub_func_uint32_t_u_u(0x1A25820AL, (safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(((*g_914) , ((((*l_1333) = (safe_mod_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((g_873[g_359] = (((safe_add_func_uint64_t_u_u((((((*l_1331) = (safe_unary_minus_func_uint32_t_u((safe_lshift_func_int16_t_s_s(((*l_1329) = ((*l_915) = (safe_add_func_uint64_t_u_u(g_873[3], (g_290 = ((*l_1328) = p_10)))))), l_1330))))) || (((*l_1076) = (g_7 & 9L)) == p_9)) != p_11.f2) | 65535UL), l_1306[4])) , l_1332) , p_11.f5)), g_506)), 0xE3CCL))) , (void*)0) == l_1333)), p_11.f6)), 1)) == l_1306[0]), l_1334))))), l_1332.f2)))
            { 
                int32_t *l_1335 = &l_1202;
                int32_t *l_1336 = &l_1202;
                int32_t *l_1337 = &l_919;
                int32_t *l_1338 = &l_930;
                int32_t *l_1339[1][5];
                uint16_t l_1358 = 65535UL;
                struct S0 l_1359 = {2L,0x91BEL};
                struct S1 **l_1361 = &g_467;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_1339[i][j] = (void*)0;
                }
                --l_1352;
                p_9 = 0L;
                for (g_185 = 0; (g_185 <= 0); g_185 += 1)
                { 
                    struct S1 ***l_1362[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i, j;
                    l_1306[4] ^= p_11.f6;
                    (*l_1338) = ((((~(&g_312 != l_1356)) | (((((0UL ^ ((p_10 == l_1358) || ((((l_1340 |= (l_1359 , (p_11.f2 ^ 0x24DF5BB30D51CA35LL))) <= p_11.f0) , 18446744073709551606UL) , p_11.f5))) == 0x6E20L) >= (*l_1335)) < p_11.f2) && l_1306[3])) > g_287) & (*l_1337));
                    l_1363 = ((~0x714BA2053F5FF98DLL) , l_1361);
                }
                l_1365[0] = l_1364;
            }
            else
            { 
                union U2 **l_1367 = (void*)0;
                union U2 **l_1368 = (void*)0;
                union U2 **l_1369 = (void*)0;
                int32_t *l_1373[5][5] = {{(void*)0,&l_1340,&l_1340,(void*)0,&g_602},{(void*)0,&l_1340,(void*)0,(void*)0,&l_1340},{&g_602,&l_1340,(void*)0,&l_1306[4],&l_1306[4]},{&l_1340,&g_602,&l_1340,(void*)0,&l_1306[4]},{&l_1340,(void*)0,&l_1306[4],(void*)0,&l_1340}};
                struct S0 l_1375 = {-1L,0UL};
                int i, j;
                l_912 = l_1366;
                for (g_428 = (-14); (g_428 > 48); ++g_428)
                { 
                    int32_t *l_1372 = &l_1101[1];
                    (*l_1372) &= p_11.f3;
                    l_1373[0][2] = &p_9;
                    (*l_1372) = 0x35768C25L;
                    (*g_300) = (void*)0;
                    return g_688;
                }
                for (g_427 = 0; (g_427 >= 0); g_427 -= 1)
                { 
                    struct S0 l_1374 = {0x10L,65535UL};
                    int i;
                    l_1375 = l_1374;
                    return g_874[g_427];
                }
                return p_11.f5;
            }
            if ((l_1376 == (safe_mul_func_uint8_t_u_u(((*l_916) = ((((*l_1364) = (*l_1364)) , &g_959) == l_1379)), 246UL))))
            { 
                uint32_t l_1387 = 5UL;
                for (l_1347 = 0; (l_1347 <= (-23)); l_1347--)
                { 
                    int32_t *l_1383 = &g_1099[1];
                    int32_t *l_1384 = &l_1349;
                    int32_t *l_1385 = &l_1348;
                    int32_t *l_1386[5][1] = {{&l_1101[1]},{(void*)0},{&l_1101[1]},{(void*)0},{&l_1101[1]}};
                    int32_t ***l_1397[5];
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_1397[i] = &g_300;
                    --l_1387;
                    (*l_1385) = ((safe_rshift_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((l_1396 != l_1397[1]), l_1387)) <= (safe_mul_func_uint8_t_u_u(p_11.f4, ((*l_916) = (p_11.f2 && 251UL))))), 8)) == (((0x505BL && p_11.f2) && p_9) < g_659));
                    if ((*l_1383))
                        break;
                }
            }
            else
            { 
                int32_t *l_1400 = &g_781;
                int32_t *l_1401 = &l_1344;
                int32_t *l_1402 = &l_1098;
                int32_t l_1403 = 1L;
                int32_t *l_1404 = &l_1347;
                int32_t *l_1405 = &l_1346;
                int32_t *l_1406 = &l_1101[2];
                int32_t *l_1407[6][2] = {{&l_1348,&g_602},{&g_602,&l_1348},{&g_602,&g_602},{&l_1348,&g_602},{&g_602,&l_1348},{&g_602,&g_602}};
                int64_t l_1412 = (-1L);
                uint32_t ***l_1418 = &g_753;
                uint32_t ***l_1419 = &g_753;
                uint32_t ***l_1420 = &g_753;
                uint32_t ***l_1421 = &g_753;
                uint32_t ***l_1422[5];
                uint16_t l_1431 = 0xD97CL;
                struct S0 ** const ***l_1439 = &l_1437;
                union U2 l_1499 = {249UL};
                int32_t l_1501 = (-1L);
                int32_t ****l_1513 = &l_1396;
                int i, j;
                for (i = 0; i < 5; i++)
                    l_1422[i] = &l_1417;
                --g_1413;
                if (((*l_1405) = (l_1344 = ((l_1416 == (g_1423 = l_1417)) ^ ((safe_mod_func_uint64_t_u_u((((*l_1402) & (safe_mul_func_int8_t_s_s(((**l_1356) = (~(((((((*l_1364) , (*g_299)) , &g_347) != (void*)0) , p_11.f0) , p_11.f5) || 5L))), p_11.f4))) || p_11.f4), p_11.f2)) ^ 0x0CL)))))
                { 
                    int32_t *l_1430 = &g_67;
                    (**l_973) = &p_9;
                    (*g_300) = l_1429;
                    (*l_1406) &= l_1349;
                    (**l_1396) = (*g_300);
                    l_1430 = (void*)0;
                }
                else
                { 
                    (*l_1364) = (*l_1364);
                    (*l_1429) = 0L;
                    l_1431--;
                    (**l_973) = l_1434;
                }
                if ((safe_unary_minus_func_int16_t_s(((((l_1439 = l_1436) != (void*)0) ^ 0x43L) > ((*l_1329) = (((g_1408[6][2][0] & 0x41D3L) , (***l_973)) , (safe_div_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((***l_1396), (*l_1402))) , 5L), (***l_973)))))))))
                { 
                    uint32_t l_1444 = 0x1E0E987BL;
                    int32_t l_1447 = 2L;
                    int32_t l_1448 = 0x3FBF78B1L;
                    int32_t l_1449 = 1L;
                    int32_t l_1450 = 0xDC4E60ADL;
                    uint64_t **l_1465 = &l_1328;
                    int32_t **l_1473 = &l_1400;
                    ++l_1444;
                    l_1452++;
                    (*l_1401) &= (p_9 ^ ((safe_add_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((g_317.f6 | ((((p_11.f2 , l_1448) , (l_1461[0] > p_11.f1)) == (((!(safe_div_func_int32_t_s_s((((*l_1465) = &p_10) != l_1466), p_11.f5))) >= 0xD00953737AB4FA85LL) | (-4L))) , l_1348)), (*g_312))), 1UL)) > p_11.f4), 0x729E98C4D86A1F7ALL)) != (***g_1269)));
                    (*l_1402) &= (safe_add_func_uint64_t_u_u((0x4A11L | ((*g_1269) != ((((*g_312) , (g_581[1] = (safe_mul_func_uint16_t_u_u((g_1413 != ((l_1331 != &l_1431) , (l_1447 ^= g_1408[5][0][3]))), p_11.f6)))) > 0x6CL) , l_1473))), 0x4D03CC2F4C4065C9LL));
                    return g_874[0];
                }
                else
                { 
                    struct S0 l_1477 = {0L,0xADA5L};
                    uint64_t **l_1490 = (void*)0;
                    int32_t l_1502 = 0x8DA63D95L;
                    uint16_t ***l_1509[5][5][1];
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 5; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_1509[i][j][k] = &l_1507;
                        }
                    }
                    --l_1474;
                    if ((*l_1405))
                        break;
                    (*l_1364) = l_1477;
                    l_1502 ^= ((safe_sub_func_int8_t_s_s(((safe_div_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((((safe_mod_func_uint64_t_u_u((safe_add_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_u(p_11.f1, 1)) | (((void*)0 == l_1490) , (safe_unary_minus_func_uint16_t_u(((safe_mod_func_uint64_t_u_u(((~(func_14((safe_mod_func_int32_t_s_s(((p_11.f6 , p_11.f0) , (safe_add_func_uint8_t_u_u((((*l_1328) = ((((func_14((((l_1500 = ((*g_914) = l_1499)) , (l_1477.f0 <= (*l_1400))) && 0xB2C8L), p_11.f0, g_1099[0]) , (*l_1404)) || 0UL) >= 0x7294L) | p_11.f4)) == 9L), 0L))), (-1L))), l_1349, g_164[3]) , p_11.f5)) == g_71.f4), (*l_1434))) != 0xD709L))))), p_9)), p_11.f2)) , l_1341) , p_11.f6), l_1348)), p_11.f3)) != 0xE8L), 1UL)) && l_1501);
                    (*l_1401) = (safe_rshift_func_int8_t_s_s((((l_1510 = l_1507) == &g_959) || (((((**l_1507) &= ((*l_1429) && (+(1UL && ((&g_1269 != l_1513) <= (((*l_1405) , p_11.f5) , p_11.f1)))))) != p_11.f5) & 0xA4F790FDL) > g_67)), (*g_312)));
                }
                if ((*g_299))
                    break;
            }
            for (g_1291 = (-15); (g_1291 > (-3)); g_1291++)
            { 
                int32_t l_1518 = 0x859BB91CL;
                int32_t l_1528 = 0x670F0059L;
                int32_t l_1530 = 0x1FF59701L;
                int32_t l_1531[2];
                int32_t *l_1539 = &g_67;
                int32_t *l_1540 = (void*)0;
                int32_t *l_1541[5];
                int32_t l_1542 = 1L;
                uint32_t l_1543 = 0x0D55DFE8L;
                int i;
                for (i = 0; i < 2; i++)
                    l_1531[i] = 0xE57331E1L;
                for (i = 0; i < 5; i++)
                    l_1541[i] = (void*)0;
                if ((safe_add_func_int32_t_s_s(p_9, (l_1518 ^= 0x76F14ECCL))))
                { 
                    int32_t *l_1519 = &l_1346;
                    int32_t *l_1520 = &l_1340;
                    int32_t *l_1521 = &l_1306[4];
                    int32_t *l_1522 = &l_1101[0];
                    int32_t *l_1523 = &l_1346;
                    int32_t *l_1524 = &l_1202;
                    int32_t *l_1525 = &l_1409;
                    int32_t *l_1526 = &l_1202;
                    int32_t *l_1527[1][5];
                    uint8_t l_1532 = 0xDDL;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_1527[i][j] = (void*)0;
                    }
                    l_1532--;
                    if (p_11.f1)
                        break;
                    (**g_1269) = &p_9;
                    (*l_1525) = (safe_sub_func_uint16_t_u_u(l_1349, 65535UL));
                }
                else
                { 
                    (*l_1429) = 0xD550BF1DL;
                    if (p_11.f2)
                        break;
                }
                for (l_1342 = 0; (l_1342 != (-1)); l_1342--)
                { 
                    p_9 = l_1452;
                    (**g_1269) = l_1539;
                }
                --l_1543;
            }
            if (((safe_sub_func_uint16_t_u_u(l_1410[5], ((*l_1329) |= 0x8027L))) & (p_11.f6 || ((l_1551 = (l_1548 , l_1549)) != ((*g_914) , l_1396)))))
            { 
                int32_t l_1563 = 1L;
                struct S0 *l_1567 = &l_1301;
                int64_t **l_1587[1][1];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1587[i][j] = &l_1076;
                }
                if ((safe_add_func_uint64_t_u_u(g_308, (9L ^ ((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u((p_11.f1 & (p_11 , (((*l_1434) = (safe_rshift_func_int16_t_s_u((((g_1560 != (void*)0) > ((void*)0 != &g_1423)) ^ g_604), p_9))) >= l_1562))), l_1563)), 0)) == p_11.f2)))))
                { 
                    (*l_1429) = ((((void*)0 != l_1564) & (((*l_1329) = (safe_lshift_func_uint16_t_u_u(((****l_1436) == l_1567), 12))) < (((((safe_rshift_func_int16_t_s_u(((((**g_1560) = ((~(((safe_add_func_int8_t_s_s((*g_312), (((((void*)0 != l_1573[0][6][3]) || 5UL) | l_1563) != p_11.f4))) && p_11.f0) & p_11.f3)) , p_11.f3)) , 0x7DD81EF54AB26C91LL) >= 0UL), 13)) < 0L) , 0x053CL) | g_164[3]) <= p_11.f3))) , p_11.f1);
                    if (p_11.f5)
                        break;
                    if (p_11.f2)
                        continue;
                }
                else
                { 
                    int32_t l_1579 = 0x5B2CC75CL;
                    int64_t ***l_1588 = &l_1587[0][0];
                    (**l_1396) = (void*)0;
                    p_9 = (safe_add_func_uint16_t_u_u((((safe_add_func_int16_t_s_s((l_1591 ^= (((l_1563 > (0x5C54D9B7D5DB45BALL > (!(g_659 != ((l_1579 != (-1L)) || (((*l_1588) = (((*g_1561) ^= (+(safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s(((*l_1429) = p_10), ((p_9 < p_11.f5) || p_11.f3))), 0x63L)), 0)))) , l_1587[0][0])) != g_1589)))))) || (*g_312)) <= l_1563)), g_780)) > 0x03EF7F34L) ^ (-1L)), g_130.f0));
                    if (p_10)
                        continue;
                }
                for (l_1330 = 0; (l_1330 <= 16); l_1330 = safe_add_func_int8_t_s_s(l_1330, 8))
                { 
                    if (l_1563)
                        break;
                }
                if (g_1249)
                    goto lbl_1594;
            }
            else
            { 
                struct S1 ** const ***l_1600 = &l_1598;
                const struct S0 l_1617 = {0xCDL,8UL};
                if ((safe_add_func_uint32_t_u_u((!(((((*l_1600) = l_1598) != &g_465[(g_359 + 1)]) == ((((safe_sub_func_int64_t_s_s(((*l_1076) |= p_11.f3), (safe_sub_func_uint32_t_u_u((safe_mod_func_int64_t_s_s(((l_1607[3] & ((*l_916) |= (safe_lshift_func_uint16_t_u_s(p_11.f0, 14)))) >= (safe_unary_minus_func_uint16_t_u((0x9CL | ((void*)0 == (*l_973)))))), (*g_1561))), 0x842E3977L)))) || l_1611[1]) < (-1L)) , g_470[3])) <= 0L)), p_11.f4)))
                { 
                    uint16_t l_1614 = 0xCAC3L;
                    union U2 *l_1615 = &g_146;
                    union U2 **l_1616 = &l_912;
                    (**g_1269) = &p_9;
                    (***g_1269) |= (*g_299);
                    (*l_1434) ^= ((safe_rshift_func_int8_t_s_s(p_11.f6, ((**l_1356) = (&g_347 == &g_347)))) && l_1614);
                    (*l_1434) = (g_447 , p_11.f5);
                    (*l_1616) = l_1615;
                }
                else
                { 
                    int16_t l_1627 = 0x33E9L;
                    (*l_1364) = l_1617;
                    (*l_1429) = (safe_rshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((((p_9 = 0xF2E59E44L) ^ ((*l_1434) = 0L)) & 0L), (~p_10))) , (safe_rshift_func_uint16_t_u_u(l_1627, 9))), ((safe_mod_func_uint16_t_u_u((((void*)0 == (*g_1265)) != g_1249), p_11.f6)) && p_11.f1)));
                    (**l_1564) = (*l_1364);
                }
            }
            for (g_419 = 0; (g_419 > 23); g_419 = safe_add_func_uint32_t_u_u(g_419, 5))
            { 
                for (g_1249 = 0; (g_1249 <= 0); g_1249 += 1)
                { 
                    struct S0 l_1632 = {0xB5L,5UL};
                    int16_t ***l_1634 = &l_1633;
                    (*l_1634) = (l_1632 , l_1633);
                    return g_729;
                }
            }
        }
        (**l_1396) = &p_9;
        return g_71.f6;
    }
    else
    { 
        int32_t *l_1635[7];
        int64_t l_1636 = 1L;
        int32_t l_1637 = (-1L);
        int i;
        for (i = 0; i < 7; i++)
            l_1635[i] = &l_1098;
        l_1639[0][0][2]--;
        --l_1642;
    }
    return p_11.f4;
}



static const struct S1  func_14(uint16_t  p_15, int32_t  p_16, int64_t  p_17)
{ 
    struct S1 **l_809 = &g_467;
    int32_t ***l_810 = &g_300;
    int32_t *l_821 = &g_67;
    struct S1 ****l_830 = &g_465[5];
    uint8_t l_839 = 255UL;
    int32_t l_872[6][1];
    const uint16_t l_892 = 7UL;
    uint32_t **l_904 = &g_754[2];
    int8_t *l_909 = &g_146.f4;
    int32_t l_910 = 1L;
    const struct S1 l_911 = {0xB5C6EE98L,-1L,1UL,3UL,2L,247UL,0x764DL};
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
            l_872[i][j] = 2L;
    }
    for (g_44 = 0; (g_44 <= 1); g_44 += 1)
    { 
        int32_t l_813 = 0L;
        uint64_t *l_817 = &g_146.f1;
        int32_t l_818 = 0x43039E4AL;
        int i;
        l_818 &= (safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((*l_817) = ((safe_rshift_func_int16_t_s_s((l_809 == (void*)0), 1)) , ((l_810 != (void*)0) <= ((safe_mod_func_uint8_t_u_u((l_813 ^ 3UL), (safe_rshift_func_uint8_t_u_s((g_659 == g_816[1]), l_813)))) , p_15)))) <= p_16), 0x00L)), p_15));
        for (g_688 = 0; (g_688 <= 4); g_688 += 1)
        { 
            int32_t *l_819 = (void*)0;
            int32_t *l_820 = &g_67;
            int32_t l_862[1];
            struct S0 l_881[6] = {{-9L,0x3FE4L},{-1L,65535UL},{-9L,0x3FE4L},{-9L,0x3FE4L},{-1L,65535UL},{-9L,0x3FE4L}};
            uint64_t *l_886[5][7][1] = {{{&g_874[0]},{&g_874[0]},{(void*)0},{&g_844},{&g_421},{&g_874[0]},{&g_874[0]}},{{&g_844},{(void*)0},{&g_428},{(void*)0},{&g_844},{&g_874[0]},{&g_874[0]}},{{&g_421},{&g_844},{(void*)0},{&g_874[0]},{&g_874[0]},{(void*)0},{&g_844}},{{&g_421},{&g_874[0]},{&g_874[0]},{&g_844},{(void*)0},{&g_428},{(void*)0}},{{&g_844},{&g_421},{(void*)0},{&g_874[0]},{(void*)0},{&g_290},{&g_844}}};
            const struct S1 l_887 = {5UL,-10L,0x6CL,0x2DE4D526L,-1L,0xD2L,65535UL};
            struct S1 **l_889 = (void*)0;
            union U2 * const l_890 = &g_146;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_862[i] = 0x087BE189L;
            (*l_820) &= g_97[g_688][(g_688 + 1)];
            (**l_810) = l_821;
            if (p_17)
            { 
                int16_t l_824 = (-9L);
                struct S1 *l_825 = &g_71;
                uint32_t *l_826 = &g_729;
                struct S1 ****l_832 = &g_465[0];
                struct S1 *****l_831[7][5][3] = {{{&l_830,&l_830,&l_832},{(void*)0,&l_830,&l_832},{&l_832,&l_832,&l_830},{&l_832,&l_830,(void*)0},{&l_832,&l_830,&l_832}},{{(void*)0,(void*)0,&l_830},{&l_830,&l_832,&l_832},{&l_830,&l_832,&l_830},{&l_832,&l_830,&l_832},{&l_830,&l_830,&l_830}},{{&l_830,(void*)0,&l_832},{&l_830,&l_832,&l_830},{&l_832,&l_830,&l_832},{&l_830,&l_830,(void*)0},{&l_830,&l_832,&l_830}},{{&l_832,(void*)0,&l_832},{&l_830,&l_830,&l_832},{&l_830,&l_830,&l_830},{&l_832,&l_830,&l_832},{&l_830,&l_832,&l_832}},{{&l_830,&l_830,&l_830},{&l_830,&l_830,(void*)0},{&l_832,&l_830,&l_830},{&l_830,&l_832,&l_830},{&l_830,&l_830,&l_830}},{{(void*)0,&l_830,&l_832},{&l_832,&l_830,&l_832},{&l_832,(void*)0,&l_830},{&l_832,&l_832,&l_832},{(void*)0,&l_830,&l_832}},{{&l_830,&l_830,&l_830},{(void*)0,&l_832,&l_830},{&l_832,(void*)0,&l_830},{&l_832,&l_830,(void*)0},{&l_830,&l_830,&l_830}}};
                uint16_t *l_838 = &g_185;
                int32_t l_858 = (-1L);
                int32_t *l_859 = &g_602;
                int32_t *l_860 = &g_67;
                int32_t *l_861 = &g_602;
                int32_t *l_863 = (void*)0;
                int32_t l_864 = (-5L);
                int32_t *l_865 = (void*)0;
                int32_t l_866 = 0x0E0F9241L;
                int32_t *l_867 = (void*)0;
                int32_t *l_868 = &g_67;
                int32_t *l_869 = (void*)0;
                int32_t *l_870 = (void*)0;
                int32_t *l_871[6][4][4] = {{{&l_858,(void*)0,&l_858,&l_862[0]},{&l_858,&l_862[0],&l_858,(void*)0},{&l_858,(void*)0,&l_858,&l_862[0]},{&l_858,&l_862[0],&l_858,(void*)0}},{{&l_858,(void*)0,&l_858,&l_862[0]},{&l_858,&l_862[0],&l_858,(void*)0},{&l_858,(void*)0,&l_858,&l_862[0]},{&l_858,&l_862[0],&l_858,(void*)0}},{{&l_858,(void*)0,&l_858,&l_862[0]},{&l_858,&l_862[0],&l_858,(void*)0},{&l_858,(void*)0,&l_858,&l_862[0]},{&l_858,&l_862[0],&l_858,(void*)0}},{{&l_858,(void*)0,&l_858,&l_862[0]},{&l_858,&l_862[0],&l_858,(void*)0},{&l_858,(void*)0,&l_858,&l_862[0]},{&l_858,&l_862[0],&l_858,(void*)0}},{{&l_858,(void*)0,&l_858,&l_862[0]},{&l_858,&l_862[0],&l_858,(void*)0},{&l_858,(void*)0,&l_858,&l_862[0]},{&l_858,&l_862[0],&l_858,(void*)0}},{{&l_858,(void*)0,&l_858,&l_862[0]},{&l_858,&l_862[0],&l_858,(void*)0},{&l_858,(void*)0,&l_858,&l_862[0]},{&l_858,&l_862[0],&l_858,(void*)0}}};
                int i, j, k;
                (***l_810) = (((*l_826) ^= ((l_824 != ((void*)0 != l_825)) < 0x3DC563EF6D47E534LL)) & ((safe_mul_func_uint8_t_u_u((+((l_830 != (g_833[1][1][1] = (void*)0)) , ((safe_add_func_int16_t_s_s((~(!((*l_838) = p_16))), (-1L))) , p_15))), (*l_821))) <= l_839));
                if (p_17)
                { 
                    int32_t *l_840 = &l_813;
                    int32_t *l_841 = &l_818;
                    int32_t *l_842 = &l_813;
                    int32_t *l_843[4][5][7] = {{{&g_781,&l_813,&l_813,&g_602,&g_781,&g_781,&g_67},{&g_602,&g_781,&l_818,&g_602,&g_602,&l_813,&g_67},{&g_602,(void*)0,&g_781,&g_67,&g_781,(void*)0,&g_602},{&g_781,&l_813,&g_602,(void*)0,&g_781,(void*)0,(void*)0},{&g_602,&l_818,(void*)0,&l_818,&g_602,&g_781,&g_781}},{{(void*)0,&g_781,&g_67,&g_67,&g_781,&l_818,&g_781},{&l_813,&l_813,&l_818,&g_602,&g_67,&g_602,&g_67},{(void*)0,&g_67,&g_781,&g_602,(void*)0,&g_781,&g_67},{&g_602,&l_813,&g_67,&g_67,(void*)0,(void*)0,&g_781},{&g_781,&g_67,&l_813,&g_67,(void*)0,&l_813,(void*)0}},{{&g_602,&g_781,&g_781,&g_602,&g_67,&g_602,&l_813},{&g_602,&g_602,(void*)0,&g_602,&g_781,&g_67,&l_818},{&g_781,&g_602,(void*)0,&g_67,(void*)0,&g_67,&l_813},{&g_781,&l_818,&l_813,&l_818,(void*)0,&l_818,(void*)0},{&l_818,&g_781,&g_602,(void*)0,&l_818,&l_818,&g_781}},{{&l_818,&g_67,&g_602,&g_67,&g_781,&g_781,&g_67},{&l_813,(void*)0,&l_813,&g_602,&g_602,(void*)0,&g_67},{&g_602,&g_602,(void*)0,&g_602,&g_781,&g_781,&g_781},{&l_813,&g_67,(void*)0,(void*)0,&g_781,(void*)0,&g_781},{&l_813,(void*)0,&g_781,(void*)0,(void*)0,&g_781,(void*)0}}};
                    int i, j, k;
                    if (p_17)
                        break;
                    g_844++;
                }
                else
                { 
                    int16_t l_856 = 1L;
                    const struct S1 l_857 = {0xA1E0E372L,0x22L,0x12L,4UL,0L,0x1EL,0UL};
                    (*g_301) |= (safe_mul_func_int16_t_s_s((((((safe_sub_func_int8_t_s_s((l_830 != (void*)0), (safe_unary_minus_func_uint64_t_u(g_91)))) | g_164[3]) && 4294967292UL) | ((p_15 < (((safe_mod_func_int8_t_s_s((l_813 ^ 0x4185L), 0xEBL)) || g_659) && p_16)) != p_16)) > p_15), l_856));
                    return l_857;
                }
                g_874[0]++;
                (**l_810) = &p_16;
                (*g_300) = ((((safe_sub_func_uint16_t_u_u(((g_317.f5 < (safe_lshift_func_int16_t_s_s((l_881[0] , (safe_sub_func_int32_t_s_s((((safe_add_func_int16_t_s_s((g_465[(g_44 + 1)] == (void*)0), (l_886[1][0][0] == &g_874[0]))) == (g_71.f5 | 0x9FD27FD990C76380LL)) != p_15), p_15))), g_342[2][2][0]))) && (*g_301)), p_15)) ^ (*l_820)) ^ l_818) , (void*)0);
            }
            else
            { 
                int32_t *l_888 = &g_781;
                for (g_290 = 0; (g_290 <= 1); g_290 += 1)
                { 
                    return l_887;
                }
                (*g_301) = ((*l_888) |= ((*l_821) || 0xD9FA77D6L));
                for (g_427 = 0; (g_427 <= 4); g_427 += 1)
                { 
                    (**l_810) = &l_813;
                }
                (**l_830) = l_889;
            }
            for (g_780 = 1; (g_780 >= 0); g_780 -= 1)
            { 
                struct S1 l_895 = {0xE2176797L,1L,254UL,18446744073709551615UL,0xE7B7L,255UL,1UL};
                int8_t l_896 = 0x6DL;
                struct S0 ****l_897[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_897[i] = (void*)0;
                for (g_602 = 0; (g_602 >= 0); g_602 -= 1)
                { 
                    int i;
                    l_862[g_602] = l_862[g_602];
                }
                g_898 = ((((((void*)0 != l_890) & (g_662[0] > ((!(l_892 < (safe_add_func_int32_t_s_s((l_895 , ((((l_813 || (&l_839 != (void*)0)) <= p_17) >= g_688) || l_896)), p_16)))) == (*l_820)))) & p_16) | l_895.f4) , (void*)0);
            }
        }
    }
    l_910 ^= (18446744073709551615UL <= (((*l_821) = (*l_821)) > ((((safe_div_func_uint32_t_u_u((((*l_904) = l_821) == l_821), (((safe_rshift_func_int16_t_s_s(((safe_div_func_uint8_t_u_u(p_17, ((*l_909) = 0x59L))) && (l_872[4][0] , 0x6350L)), 5)) && p_16) , l_872[4][0]))) | 0x70CC58CCL) , &l_810) != &l_810)));
    return l_911;
}



static int32_t  func_20(uint32_t  p_21)
{ 
    int64_t l_24 = 0xBDA99DA972737AE9LL;
    uint8_t *l_543 = (void*)0;
    uint64_t l_544[1];
    uint32_t *l_545 = (void*)0;
    uint32_t *l_546 = &g_146.f3;
    int32_t l_576 = (-9L);
    int32_t l_580[3][6][2] = {{{(-9L),0x0DAFADD3L},{(-1L),0x0DAFADD3L},{(-9L),2L},{2L,(-9L)},{0x0DAFADD3L,(-1L)},{0x0DAFADD3L,(-9L)}},{{2L,2L},{(-9L),0x0DAFADD3L},{(-1L),0x0DAFADD3L},{(-9L),2L},{2L,(-9L)},{0x0DAFADD3L,(-1L)}},{{0x0DAFADD3L,(-9L)},{2L,2L},{(-9L),0x0DAFADD3L},{(-1L),0x0DAFADD3L},{(-9L),2L},{2L,(-1L)}}};
    int32_t l_603 = (-1L);
    uint8_t l_611 = 0x1CL;
    int32_t ** const l_634 = &g_301;
    int32_t l_656 = 0xB3A87A30L;
    int8_t l_657 = (-2L);
    struct S0 l_682 = {0x5EL,0xDF4AL};
    union U2 l_744 = {0x9BL};
    uint16_t *l_757 = &g_317.f6;
    uint16_t **l_756[2][4][5] = {{{&l_757,(void*)0,(void*)0,(void*)0,&l_757},{&l_757,&l_757,&l_757,&l_757,&l_757},{&l_757,(void*)0,&l_757,(void*)0,&l_757},{&l_757,&l_757,&l_757,&l_757,&l_757}},{{&l_757,(void*)0,&l_757,(void*)0,&l_757},{&l_757,&l_757,&l_757,&l_757,&l_757},{&l_757,(void*)0,(void*)0,(void*)0,&l_757},{&l_757,&l_757,&l_757,&l_757,&l_757}}};
    uint64_t l_789 = 0xBBEBD128B2B986D1LL;
    uint16_t l_792 = 7UL;
    int32_t *l_793 = &l_603;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_544[i] = 18446744073709551613UL;
lbl_728:
    if (((func_22(l_24) , ((+((*l_546) = (((((safe_add_func_uint8_t_u_u(l_24, p_21)) != (((((l_544[0] = ((safe_sub_func_uint8_t_u_u((p_21 == p_21), (safe_div_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u(l_24, l_24)) | l_24), l_24)))) | g_419)) , g_428) > 0x2DF7L) != (-3L)) , 0x72F3AB5CL)) > 0xFA15D6A9L) , l_544[0]) | 0UL))) , 0L)) , p_21))
    { 
        int32_t *l_547 = &g_67;
        int32_t **l_548 = &l_547;
        (*l_548) = ((*g_300) = l_547);
        return (**g_300);
    }
    else
    { 
        int64_t l_565 = 0xFD4E167334D9CF9BLL;
        struct S1 ****l_566 = &g_465[6];
        int32_t l_577 = 0L;
        int32_t l_578 = 0x498909DCL;
        int32_t l_579 = (-1L);
        struct S1 l_597 = {0x018A7B43L,1L,255UL,0x9836500BL,7L,255UL,0xC3EFL};
        union U2 l_614 = {248UL};
        int32_t **l_621 = &g_301;
        struct S1 ***l_644 = &g_466[1][0][0];
        uint32_t l_672 = 0x764D6738L;
        int32_t *l_677 = (void*)0;
        for (g_130.f0 = (-16); (g_130.f0 == (-22)); g_130.f0--)
        { 
            struct S0 l_554 = {2L,0x81C7L};
            int32_t l_574[2];
            int32_t l_635 = 0L;
            int i;
            for (i = 0; i < 2; i++)
                l_574[i] = 0xF531857FL;
            for (g_428 = (-13); (g_428 <= 54); g_428++)
            { 
                int32_t * const *l_553 = (void*)0;
                int32_t l_556[2];
                int64_t *l_560 = &l_24;
                const union U2 *l_568[4] = {&g_146,&g_146,&g_146,&g_146};
                const union U2 **l_567 = &l_568[1];
                int32_t **l_631 = &g_301;
                int i;
                for (i = 0; i < 2; i++)
                    l_556[i] = 1L;
                if (((void*)0 == l_553))
                { 
                    struct S0 *l_555 = &l_554;
                    (*l_555) = l_554;
                }
                else
                { 
                    return l_556[0];
                }
                (*l_567) = ((((~(((safe_add_func_int16_t_s_s(((((*l_560) = p_21) || g_50) >= (g_313 || (safe_sub_func_int64_t_s_s((g_146.f3 > 0x21197C76L), (safe_rshift_func_int16_t_s_u(((l_565 , ((void*)0 == l_566)) , g_146.f0), l_554.f0)))))), g_427)) && 1L) , p_21)) <= l_554.f0) > 0UL) , (void*)0);
            }
        }
        l_577 = p_21;
    }
    for (l_603 = (-10); (l_603 > 23); l_603 = safe_add_func_int8_t_s_s(l_603, 1))
    { 
        struct S0 *l_680 = (void*)0;
        struct S0 *l_681[5];
        int32_t *l_683 = &g_602;
        int32_t *l_684 = &l_656;
        int32_t l_685 = 0x500BD0FCL;
        int32_t *l_686 = &l_576;
        int32_t *l_687[1];
        struct S1 *** const *l_697[5][3] = {{&g_465[3],&g_465[5],&g_465[3]},{&g_465[4],&g_465[4],&g_465[4]},{&g_465[3],&g_465[5],&g_465[3]},{&g_465[4],&g_465[4],&g_465[4]},{&g_465[3],&g_465[5],&g_465[3]}};
        struct S0 **l_727 = &l_680;
        uint32_t ** const l_752[7] = {&l_546,&l_546,&l_546,&l_546,&l_546,&l_546,&l_546};
        union U2 *l_760 = (void*)0;
        struct S0 l_788[2][1][2] = {{{{0x53L,0x12C6L},{0x53L,0x12C6L}}},{{{0x53L,0x12C6L},{0x53L,0x12C6L}}}};
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_681[i] = &g_130;
        for (i = 0; i < 1; i++)
            l_687[i] = &g_67;
        l_682 = g_130;
        g_688--;
        (*g_300) = (void*)0;
        for (g_185 = (-11); (g_185 == 59); g_185 = safe_add_func_int16_t_s_s(g_185, 5))
        { 
            struct S1 ** const *l_696 = &g_466[3][0][0];
            struct S1 ** const **l_695 = &l_696;
            int32_t *l_698[2][4][4] = {{{&l_685,(void*)0,&l_576,&l_580[1][5][1]},{&l_576,&l_580[1][5][1],&l_576,(void*)0},{&l_685,&l_580[1][5][1],&l_580[1][5][1],&l_580[1][5][1]},{&l_685,(void*)0,&l_576,&l_580[1][5][1]}},{{&l_576,&l_580[1][5][1],&l_576,(void*)0},{&l_685,&l_580[1][5][1],&l_580[1][5][1],&l_580[1][5][1]},{&l_685,(void*)0,&l_576,&l_580[1][5][1]},{&l_576,&l_580[1][5][1],&l_576,(void*)0}}};
            uint16_t l_750[1][4];
            int64_t l_751 = (-4L);
            int16_t l_771[2][6][7] = {{{0xE025L,6L,6L,0xE025L,1L,0x48A7L,(-4L)},{0xEE52L,7L,1L,0L,0L,1L,7L},{1L,0xF0B8L,0x3981L,0x9D98L,6L,(-4L),(-4L)},{0x941AL,0xEE52L,0L,0xEE52L,0x941AL,1L,9L},{0x82C2L,0x48A7L,0xF0B8L,0x9D98L,(-1L),0x9D98L,0xF0B8L},{9L,9L,0x4894L,0L,7L,(-5L),1L}},{{0x82C2L,0x9D98L,0xE025L,0xE025L,0x9D98L,0x82C2L,(-1L)},{0x941AL,0x4894L,0xEE52L,0x71CBL,7L,7L,0x71CBL},{1L,0xD2DCL,1L,(-4L),(-1L),0x3981L,0x82C2L},{0xEE52L,0x4894L,0x941AL,(-5L),0x941AL,0x4894L,0xEE52L},{0xE025L,0x9D98L,0x82C2L,(-1L),6L,0x3981L,6L},{0x4894L,9L,9L,0x4894L,0L,7L,(-5L)}}};
            uint8_t l_773 = 0xFBL;
            int8_t *l_775 = &l_682.f0;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_750[i][j] = 65535UL;
            }
            if ((safe_add_func_int8_t_s_s(((g_317.f5 , l_695) != l_697[0][0]), (&g_97[2][5] == &g_97[4][1]))))
            { 
                int16_t l_718 = 0L;
                struct S1 l_719 = {18446744073709551609UL,-1L,253UL,0UL,0x8571L,0x3DL,0x7BA0L};
                for (g_420 = 1; (g_420 <= 4); g_420 += 1)
                { 
                    int32_t *l_699 = &l_685;
                    int16_t *l_716 = (void*)0;
                    int16_t *l_717 = &g_317.f4;
                    int i, j;
                    l_699 = (l_682 , l_698[1][1][0]);
                    l_718 &= (safe_lshift_func_int16_t_s_u(((*l_717) = (g_97[g_420][(g_420 + 1)] = ((safe_mul_func_int16_t_s_s(p_21, 7L)) ^ ((safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((&g_506 != &g_506), (safe_add_func_int16_t_s_s((safe_div_func_int64_t_s_s(p_21, (safe_rshift_func_int8_t_s_s(p_21, ((*g_300) == &l_685))))), p_21)))), g_506)), g_602)) | p_21)))), g_602));
                    (*l_684) = p_21;
                    (*l_683) = (g_290 && (l_719 , ((safe_lshift_func_int16_t_s_u((+(safe_add_func_int8_t_s_s(((5L > ((*l_684) > ((safe_lshift_func_uint16_t_u_u((((l_727 == (void*)0) & (g_44 <= p_21)) < g_421), 0)) < g_428))) && g_185), g_185))), g_67)) >= p_21)));
                }
            }
            else
            { 
                if (g_146.f0)
                    goto lbl_728;
            }
            g_729--;
            if (((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(254UL, ((safe_mul_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s((6L != (0x8BL == 0UL)), 6)) <= (l_744 , ((*g_312) >= (((safe_unary_minus_func_int16_t_s((safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((void*)0 != &g_97[4][1]), (*g_312))), p_21)))) < p_21) != 65528UL)))) && l_750[0][0]), 0xA9L)) == 0x40EC099BL))), (*g_312))) || l_751))
            { 
                struct S0 l_755 = {0x62L,0x6328L};
                union U2 *l_759 = &l_744;
                union U2 **l_758 = &l_759;
                int8_t *l_772[7][6] = {{(void*)0,(void*)0,&l_657,&l_744.f4,&l_744.f4,(void*)0},{&l_744.f4,&l_744.f4,(void*)0,&l_744.f4,&l_744.f4,(void*)0},{&l_744.f4,&l_744.f4,(void*)0,&l_744.f4,&l_744.f4,(void*)0},{&l_744.f4,&l_744.f4,(void*)0,&l_744.f4,&l_744.f4,(void*)0},{&l_744.f4,&l_744.f4,(void*)0,&l_744.f4,&l_744.f4,(void*)0},{&l_744.f4,&l_744.f4,(void*)0,&l_744.f4,&l_744.f4,(void*)0},{&l_744.f4,&l_744.f4,(void*)0,&l_744.f4,&l_744.f4,(void*)0}};
                int32_t *l_774 = &l_576;
                int i, j;
                g_753 = l_752[1];
                g_130 = l_755;
                l_773 = ((l_756[0][3][0] == ((((*l_758) = (void*)0) == l_760) , &l_757)) == ((*l_686) = (((g_146.f4 &= (((*l_683) = ((*l_683) , (safe_sub_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((((((safe_mod_func_int64_t_s_s(((safe_add_func_int8_t_s_s((l_771[0][2][5] & 0xE910AABAL), g_130.f0)) == 254UL), p_21)) <= 1UL) , l_744) , 0x34C5L) != p_21) & 0x801D9C593780470DLL), g_506)), p_21)), 0x4D50E084A395457CLL)))) <= g_91)) && p_21) , p_21)));
                for (g_428 = 0; (g_428 <= 0); g_428 += 1)
                { 
                    (*l_634) = l_774;
                }
            }
            else
            { 
                uint32_t l_778 = 0x1665124FL;
                int32_t *l_779 = (void*)0;
                (*l_684) |= (((void*)0 == l_775) || 0x79F89F86L);
                for (g_128 = 0; (g_128 >= (-23)); g_128 = safe_sub_func_int16_t_s_s(g_128, 5))
                { 
                    (*l_683) ^= (-8L);
                    return l_778;
                }
                (*g_300) = l_779;
                --g_785;
                if (p_21)
                    continue;
            }
            l_788[0][0][1] = l_682;
        }
    }
    (*l_793) &= ((l_789 ^ ((safe_rshift_func_int8_t_s_u((*g_312), ((g_289 & (p_21 | l_792)) >= 0x3EL))) & 1L)) <= 0x7452L);
    return p_21;
}



static uint32_t  func_22(int8_t  p_23)
{ 
    uint64_t *l_43 = &g_44;
    struct S0 l_49 = {0x21L,65535UL};
    const int8_t *l_310 = &g_311;
    const int8_t **l_309[7][2][6] = {{{(void*)0,&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,&l_310,&l_310,&l_310,&l_310}},{{&l_310,&l_310,&l_310,&l_310,(void*)0,&l_310},{&l_310,&l_310,&l_310,&l_310,(void*)0,(void*)0}},{{&l_310,&l_310,&l_310,&l_310,&l_310,&l_310},{&l_310,&l_310,&l_310,&l_310,&l_310,&l_310}},{{&l_310,&l_310,(void*)0,&l_310,(void*)0,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310,&l_310}},{{&l_310,&l_310,&l_310,&l_310,&l_310,&l_310},{&l_310,&l_310,&l_310,(void*)0,&l_310,(void*)0}},{{(void*)0,&l_310,&l_310,&l_310,(void*)0,&l_310},{(void*)0,&l_310,&l_310,(void*)0,&l_310,&l_310}},{{&l_310,&l_310,&l_310,&l_310,&l_310,&l_310},{&l_310,&l_310,&l_310,&l_310,(void*)0,&l_310}}};
    int32_t *l_505[6] = {(void*)0,(void*)0,&g_67,(void*)0,(void*)0,&g_67};
    uint32_t *l_511 = &g_506;
    uint32_t **l_510 = &l_511;
    uint32_t *l_512 = &g_146.f3;
    uint32_t *l_513[3][1];
    uint64_t *l_514 = &g_290;
    struct S0 **l_533[1];
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_513[i][j] = (void*)0;
    }
    for (i = 0; i < 1; i++)
        l_533[i] = &g_491;
    g_506 = (func_25((g_312 = func_29((safe_div_func_int64_t_s_s((&g_7 != &p_23), (safe_sub_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((p_23 != (-8L)), (!g_7))), (g_50 |= (((safe_add_func_uint64_t_u_u(((*l_43) = (!p_23)), ((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u((l_49 , p_23), 0x7520L)), 2)) == g_7))) && g_7) || 0x4FL)))) || l_49.f0), g_7)))))), &g_7, l_43) > p_23);
lbl_532:
    (*g_300) = l_505[1];
    g_67 &= (p_23 || ((p_23 | (!p_23)) , 0x4EL));
    if ((safe_sub_func_uint8_t_u_u(((((g_506 |= (((*l_510) = &g_506) == (void*)0)) > ((g_270 = 1UL) == ((*l_514) = ((*l_43) ^= ((void*)0 != l_513[1][0]))))) && (safe_mul_func_uint8_t_u_u(p_23, (l_310 == l_310)))) != 255UL), 6L)))
    { 
        uint8_t l_517[5][6] = {{248UL,253UL,0x42L,253UL,248UL,248UL},{0UL,253UL,253UL,0UL,255UL,0UL},{0UL,255UL,0UL,253UL,253UL,0UL},{248UL,248UL,253UL,0x42L,253UL,248UL},{253UL,255UL,0x42L,0x42L,255UL,253UL}};
        struct S1 * const l_520 = &g_71;
        uint32_t l_522 = 0x9336E04FL;
        const int32_t * const l_523 = &g_67;
        const int32_t **l_524 = &g_299;
        int i, j;
        ++l_517[0][2];
        for (g_419 = 4; (g_419 >= 0); g_419 -= 1)
        { 
            struct S1 **l_521 = &g_467;
            (*l_521) = l_520;
            return l_522;
        }
        (*l_524) = l_523;
        for (g_289 = 0; (g_289 > (-1)); g_289 = safe_sub_func_int8_t_s_s(g_289, 5))
        { 
            for (g_317.f3 = 0; (g_317.f3 == 35); ++g_317.f3)
            { 
                uint32_t l_529 = 18446744073709551615UL;
                --l_529;
                if (g_67)
                    goto lbl_532;
            }
        }
    }
    else
    { 
        (*g_300) = l_505[5];
    }
    g_491 = (void*)0;
    return p_23;
}



static uint8_t  func_25(const int8_t * p_26, int8_t * p_27, uint64_t * p_28)
{ 
    const struct S1 *l_315 = &g_71;
    struct S1 **l_318 = (void*)0;
    int32_t l_320 = 0L;
    int32_t *l_321 = &g_67;
    int32_t l_322 = 0x80DDD84BL;
    int32_t l_345 = 0x3819C18BL;
    int32_t l_426 = 0xF66FD786L;
    uint16_t *l_444[2][4][4] = {{{&g_71.f6,&g_71.f6,&g_71.f6,&g_71.f6},{&g_71.f6,&g_71.f6,&g_71.f6,&g_71.f6},{&g_71.f6,&g_71.f6,&g_71.f6,&g_71.f6},{&g_71.f6,&g_71.f6,&g_71.f6,&g_71.f6}},{{&g_71.f6,&g_71.f6,&g_71.f6,&g_71.f6},{&g_71.f6,&g_71.f6,&g_71.f6,&g_71.f6},{&g_71.f6,&g_71.f6,&g_71.f6,&g_71.f6},{&g_71.f6,&g_71.f6,&g_71.f6,&g_71.f6}}};
    uint16_t **l_443[7][7][5] = {{{&l_444[0][2][1],&l_444[0][2][1],&l_444[1][1][2],(void*)0,&l_444[0][2][1]},{&l_444[1][2][2],&l_444[1][1][2],&l_444[0][0][2],&l_444[0][1][3],&l_444[0][2][1]},{(void*)0,(void*)0,(void*)0,(void*)0,&l_444[0][2][1]},{&l_444[1][0][1],(void*)0,(void*)0,&l_444[1][0][1],&l_444[0][2][1]},{&l_444[0][2][1],&l_444[0][2][1],&l_444[0][0][3],(void*)0,(void*)0},{(void*)0,&l_444[0][3][3],&l_444[1][3][3],(void*)0,&l_444[0][2][1]},{(void*)0,&l_444[0][2][1],&l_444[0][2][1],(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_444[0][1][3],&l_444[1][0][1],&l_444[1][3][3]},{(void*)0,&l_444[0][2][1],&l_444[0][3][3],(void*)0,(void*)0},{(void*)0,&l_444[0][0][2],&l_444[0][2][1],&l_444[0][1][3],&l_444[0][2][1]},{&l_444[0][2][1],&l_444[0][2][1],&l_444[0][2][1],(void*)0,&l_444[1][1][2]},{&l_444[1][1][2],(void*)0,&l_444[0][3][3],(void*)0,&l_444[0][3][3]},{&l_444[0][2][1],&l_444[0][2][1],&l_444[0][1][3],(void*)0,(void*)0},{(void*)0,(void*)0,&l_444[0][2][1],&l_444[0][2][1],&l_444[0][0][2]}},{{&l_444[0][0][2],&l_444[0][2][1],&l_444[1][3][3],&l_444[0][2][1],&l_444[0][2][1]},{(void*)0,(void*)0,&l_444[0][0][3],&l_444[1][1][2],(void*)0},{&l_444[0][0][0],&l_444[0][2][1],(void*)0,&l_444[1][1][2],&l_444[1][0][0]},{&l_444[0][2][1],(void*)0,(void*)0,&l_444[0][0][2],&l_444[1][2][2]},{&l_444[0][2][1],&l_444[0][2][1],&l_444[0][0][2],&l_444[0][0][3],(void*)0},{&l_444[0][2][1],&l_444[0][0][2],&l_444[1][1][2],&l_444[0][2][1],&l_444[0][2][1]},{&l_444[0][2][1],&l_444[0][2][1],(void*)0,&l_444[0][2][1],&l_444[0][2][1]}},{{&l_444[0][0][0],(void*)0,&l_444[1][0][0],&l_444[0][2][1],&l_444[0][2][1]},{(void*)0,&l_444[0][2][1],&l_444[0][2][1],&l_444[0][2][1],&l_444[0][2][1]},{&l_444[0][0][2],&l_444[0][3][3],&l_444[0][2][1],(void*)0,&l_444[0][2][1]},{(void*)0,&l_444[0][2][1],&l_444[0][0][1],&l_444[0][2][1],&l_444[0][2][1]},{&l_444[0][2][1],(void*)0,&l_444[1][1][2],&l_444[1][0][0],&l_444[0][2][1]},{&l_444[1][1][2],(void*)0,&l_444[0][2][1],&l_444[1][3][2],(void*)0},{&l_444[0][2][1],&l_444[1][1][2],&l_444[0][0][2],&l_444[1][3][2],&l_444[1][2][2]}},{{(void*)0,&l_444[0][2][1],&l_444[0][2][1],&l_444[1][0][0],&l_444[1][0][0]},{(void*)0,&l_444[1][2][2],(void*)0,&l_444[0][2][1],(void*)0},{(void*)0,&l_444[0][0][2],(void*)0,(void*)0,&l_444[0][2][1]},{(void*)0,&l_444[0][0][1],&l_444[0][0][2],&l_444[0][2][1],&l_444[0][0][2]},{(void*)0,&l_444[0][0][3],(void*)0,&l_444[0][2][1],(void*)0},{&l_444[0][2][1],(void*)0,(void*)0,&l_444[0][2][1],&l_444[0][3][3]},{&l_444[1][0][1],&l_444[1][3][3],&l_444[0][2][1],&l_444[0][2][1],&l_444[1][1][2]}},{{(void*)0,&l_444[0][0][0],&l_444[0][0][2],&l_444[0][0][3],&l_444[0][2][1]},{&l_444[1][2][2],&l_444[0][0][0],&l_444[0][2][1],&l_444[0][0][2],(void*)0},{&l_444[0][2][1],&l_444[1][3][3],&l_444[1][1][2],&l_444[1][1][2],&l_444[1][3][3]},{&l_444[0][0][2],&l_444[1][3][2],(void*)0,(void*)0,&l_444[0][2][1]},{(void*)0,&l_444[0][2][1],&l_444[0][0][3],&l_444[0][0][2],&l_444[0][0][0]},{&l_444[0][2][1],(void*)0,&l_444[1][1][2],&l_444[0][2][1],&l_444[0][2][1]},{(void*)0,&l_444[1][1][2],&l_444[0][2][1],(void*)0,&l_444[1][1][2]}},{{&l_444[1][1][2],&l_444[1][0][1],&l_444[1][3][2],&l_444[1][0][0],&l_444[0][2][1]},{&l_444[0][0][3],(void*)0,(void*)0,&l_444[1][2][2],&l_444[0][2][1]},{&l_444[1][0][1],(void*)0,&l_444[0][1][3],(void*)0,&l_444[0][2][1]},{&l_444[1][0][0],(void*)0,(void*)0,&l_444[0][2][1],&l_444[0][2][1]},{&l_444[0][2][1],&l_444[0][2][1],&l_444[0][2][1],&l_444[0][2][1],&l_444[1][1][2]},{&l_444[0][2][1],&l_444[0][2][1],&l_444[0][2][1],&l_444[0][2][1],&l_444[0][2][1]},{(void*)0,(void*)0,&l_444[0][2][1],&l_444[0][2][1],&l_444[0][0][0]}}};
    uint8_t *l_456 = (void*)0;
    int i, j, k;
lbl_323:
    for (g_71.f2 = 0; (g_71.f2 <= 3); g_71.f2 += 1)
    { 
        int32_t *l_314 = &g_67;
        struct S1 ***l_319 = &l_318;
        (*l_314) |= (p_27 == p_27);
        g_316 = l_315;
        (*l_319) = l_318;
    }
    l_322 ^= ((*l_321) = l_320);
    for (g_71.f2 = 0; (g_71.f2 <= 3); g_71.f2 += 1)
    { 
        uint16_t *l_334[4][7] = {{&g_164[g_71.f2],(void*)0,&g_317.f6,&g_317.f6,(void*)0,&g_164[g_71.f2],&g_185},{&g_164[g_71.f2],&g_317.f6,&g_164[3],&g_185,(void*)0,&g_164[g_71.f2],&g_164[g_71.f2]},{&g_164[g_71.f2],(void*)0,(void*)0,(void*)0,&g_164[g_71.f2],&g_130.f1,&g_164[g_71.f2]},{&g_71.f6,&g_317.f6,&g_164[g_71.f2],&g_71.f6,&g_164[g_71.f2],&g_164[g_71.f2],&g_164[g_71.f2]}};
        uint16_t **l_333 = &l_334[3][5];
        union U2 l_341 = {1UL};
        int16_t *l_343 = &g_71.f4;
        int16_t *l_344 = &g_97[4][1];
        int32_t **l_381 = &l_321;
        uint16_t l_413 = 1UL;
        int32_t l_416 = 0L;
        int32_t l_418 = 0x7D036A4EL;
        struct S0 l_448 = {0L,0xD68CL};
        struct S1 ** const *l_468 = (void*)0;
        uint32_t l_475[7] = {9UL,0UL,9UL,9UL,0UL,9UL,9UL};
        union U2 *l_489 = &l_341;
        int i, j;
        if (g_164[g_71.f2])
            break;
        if (g_71.f2)
            goto lbl_323;
    }
    return (*l_321);
}



static const int8_t * func_29(int32_t  p_30)
{ 
    uint64_t *l_51 = &g_44;
    union U2 l_54[1][4][6] = {{{{1UL},{1UL},{0x31L},{1UL},{1UL},{0x31L}},{{1UL},{1UL},{0x31L},{1UL},{1UL},{0x31L}},{{1UL},{1UL},{0x31L},{1UL},{1UL},{0x31L}},{{1UL},{1UL},{0x31L},{1UL},{1UL},{0x31L}}}};
    uint32_t *l_56 = &l_54[0][3][0].f3;
    uint32_t *l_57 = &l_54[0][3][0].f3;
    uint32_t *l_58 = (void*)0;
    uint32_t *l_59 = (void*)0;
    uint32_t *l_60 = &l_54[0][3][0].f3;
    uint32_t *l_61 = &l_54[0][3][0].f3;
    uint32_t *l_62 = (void*)0;
    uint32_t *l_63 = &l_54[0][3][0].f3;
    int32_t l_64 = 0x8F781BE2L;
    int8_t *l_65 = &g_7;
    int32_t *l_66 = &g_67;
    struct S1 *l_73 = (void*)0;
    struct S1 **l_80[5][3][3] = {{{&l_73,&l_73,&l_73},{&l_73,&l_73,&l_73},{&l_73,&l_73,&l_73}},{{&l_73,(void*)0,&l_73},{&l_73,&l_73,&l_73},{(void*)0,&l_73,&l_73}},{{&l_73,&l_73,&l_73},{&l_73,&l_73,&l_73},{&l_73,&l_73,&l_73}},{{&l_73,(void*)0,&l_73},{&l_73,&l_73,&l_73},{(void*)0,&l_73,&l_73}},{{&l_73,&l_73,&l_73},{&l_73,&l_73,&l_73},{&l_73,&l_73,&l_73}}};
    struct S0 l_155 = {-10L,0xAA90L};
    int32_t l_181 = 1L;
    int32_t l_182 = 0xF446B025L;
    int32_t l_183 = 0xACA09A69L;
    int32_t l_184 = (-6L);
    const uint64_t l_200 = 18446744073709551611UL;
    int64_t l_293 = 7L;
    int i, j, k;
    return &g_7;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_71.f0, "g_71.f0", print_hash_value);
    transparent_crc(g_71.f1, "g_71.f1", print_hash_value);
    transparent_crc(g_71.f2, "g_71.f2", print_hash_value);
    transparent_crc(g_71.f3, "g_71.f3", print_hash_value);
    transparent_crc(g_71.f4, "g_71.f4", print_hash_value);
    transparent_crc(g_71.f5, "g_71.f5", print_hash_value);
    transparent_crc(g_71.f6, "g_71.f6", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_97[i][j], "g_97[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_130.f0, "g_130.f0", print_hash_value);
    transparent_crc(g_130.f1, "g_130.f1", print_hash_value);
    transparent_crc(g_146.f0, "g_146.f0", print_hash_value);
    transparent_crc(g_146.f4, "g_146.f4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_164[i], "g_164[i]", print_hash_value);

    }
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_287, "g_287", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    transparent_crc(g_317.f0, "g_317.f0", print_hash_value);
    transparent_crc(g_317.f1, "g_317.f1", print_hash_value);
    transparent_crc(g_317.f2, "g_317.f2", print_hash_value);
    transparent_crc(g_317.f3, "g_317.f3", print_hash_value);
    transparent_crc(g_317.f4, "g_317.f4", print_hash_value);
    transparent_crc(g_317.f5, "g_317.f5", print_hash_value);
    transparent_crc(g_317.f6, "g_317.f6", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_342[i][j][k], "g_342[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_359, "g_359", print_hash_value);
    transparent_crc(g_419, "g_419", print_hash_value);
    transparent_crc(g_420, "g_420", print_hash_value);
    transparent_crc(g_421, "g_421", print_hash_value);
    transparent_crc(g_427, "g_427", print_hash_value);
    transparent_crc(g_428, "g_428", print_hash_value);
    transparent_crc(g_447, "g_447", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_470[i], "g_470[i]", print_hash_value);

    }
    transparent_crc(g_506, "g_506", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_581[i], "g_581[i]", print_hash_value);

    }
    transparent_crc(g_602, "g_602", print_hash_value);
    transparent_crc(g_604, "g_604", print_hash_value);
    transparent_crc(g_608, "g_608", print_hash_value);
    transparent_crc(g_659, "g_659", print_hash_value);
    transparent_crc(g_660, "g_660", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_662[i], "g_662[i]", print_hash_value);

    }
    transparent_crc(g_688, "g_688", print_hash_value);
    transparent_crc(g_729, "g_729", print_hash_value);
    transparent_crc(g_780, "g_780", print_hash_value);
    transparent_crc(g_781, "g_781", print_hash_value);
    transparent_crc(g_782, "g_782", print_hash_value);
    transparent_crc(g_783, "g_783", print_hash_value);
    transparent_crc(g_784, "g_784", print_hash_value);
    transparent_crc(g_785, "g_785", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_816[i], "g_816[i]", print_hash_value);

    }
    transparent_crc(g_844, "g_844", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_873[i], "g_873[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_874[i], "g_874[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1099[i], "g_1099[i]", print_hash_value);

    }
    transparent_crc(g_1128, "g_1128", print_hash_value);
    transparent_crc(g_1206, "g_1206", print_hash_value);
    transparent_crc(g_1249, "g_1249", print_hash_value);
    transparent_crc(g_1279, "g_1279", print_hash_value);
    transparent_crc(g_1291, "g_1291", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1408[i][j][k], "g_1408[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1413, "g_1413", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
