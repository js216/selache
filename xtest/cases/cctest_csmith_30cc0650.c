// SPDX-License-Identifier: MIT
// cctest_csmith_30cc0650.c --- cctest case csmith_30cc0650 (csmith seed 818677328)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd55246f0 */
/* @exp_ticks 0x35f2 */

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

// Options:   -s 818677328 -o /tmp/csmith_gen_pfxkblcd/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint64_t  f0;
   int32_t  f1;
   uint64_t  f2;
   uint8_t  f3;
   uint32_t  f4;
};
#pragma pack(pop)

struct S0 {
   uint16_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint8_t  f0;
   struct S1  f1;
   struct S0  f2;
   struct S1  f3;
};
#pragma pack(pop)

union U3 {
   uint32_t  f0;
};


static uint16_t g_6[1] = {0xAFBBL};
static const union U3 g_31 = {0UL};
static int64_t g_34 = 0xD65FE96F77D900D2LL;
static uint8_t g_36[1] = {252UL};
static uint32_t g_62 = 0xF63D7CB6L;
static uint32_t g_63 = 0x27CCDDECL;
static uint32_t g_67 = 2UL;
static struct S2 g_68 = {0x46L,{3UL,0x252BC438L,0xE533B9E22A4178B3LL,0xD5L,0xED510FEDL},{0x2739L},{0UL,-1L,0xC2988D6DCB749617LL,0x66L,1UL}};
static int32_t g_86 = 0x3D13A51BL;
static uint32_t g_87 = 0x20038BE2L;
static uint32_t g_92 = 0UL;
static uint32_t g_155[5] = {1UL,1UL,1UL,1UL,1UL};
static int32_t g_156[3] = {0L,0L,0L};
static int32_t g_168 = 0xD2DB4316L;



static uint32_t  func_1(void);
static union U3  func_15(const int16_t  p_16);
static int8_t  func_21(uint16_t  p_22);
static struct S2  func_24(uint64_t  p_25, uint32_t  p_26, union U3  p_27, int32_t  p_28);




static uint32_t  func_1(void)
{ 
    int16_t l_2[1][4];
    int32_t l_7 = 0L;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_2[i][j] = 1L;
    }
    if (((l_2[0][1] , ((safe_lshift_func_int8_t_s_u((!((4294967295UL == g_6[0]) > 6L)), 4)) < 0x9FL)) || 3UL))
    { 
        l_7 |= 0xCD409884L;
    }
    else
    { 
        uint32_t l_14 = 0UL;
        uint64_t l_210 = 0xE152159D9BB4E383LL;
        l_210 = (safe_add_func_int32_t_s_s(((safe_mod_func_int16_t_s_s(((((l_14 | (func_15(l_14) , (((safe_div_func_uint16_t_u_u((0x3B7618F1L & l_14), 0x81F7L)) > 18446744073709551615UL) != g_67))) >= g_68.f1.f4) > g_31.f0) , g_68.f1.f0), g_68.f1.f0)) > l_7), g_68.f1.f2));
    }
    return g_68.f1.f4;
}



static union U3  func_15(const int16_t  p_16)
{ 
    uint64_t l_23 = 0x31966C4779D44F4CLL;
    int32_t l_169 = 0x0FA6E5D1L;
    union U3 l_207 = {0xB95D9890L};
    if ((((((((safe_rshift_func_int8_t_s_u((g_156[1] = func_21(l_23)), (((safe_mul_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((((safe_div_func_uint16_t_u_u((0x00L ^ (safe_div_func_int64_t_s_s((((g_168 = (safe_unary_minus_func_uint64_t_u(l_23))) && l_23) | p_16), g_68.f1.f0))), l_23)) || 1UL) != g_68.f1.f4), l_23)), g_68.f1.f2)), 0x8212L)) || l_169) == 0x926F431218535F4CLL))) < 0x52EE98ABC2DA774BLL) , g_6[0]) == 0x6B67L) ^ g_68.f3.f2) > p_16) < 0L))
    { 
        uint64_t l_180 = 18446744073709551615UL;
        const int16_t l_194[4][2] = {{0xBFBDL,0xBFBDL},{0xBFBDL,0xBFBDL},{0xBFBDL,0xBFBDL},{0xBFBDL,0xBFBDL}};
        int i, j;
        if (((safe_lshift_func_int8_t_s_s(0x75L, 7)) & (((l_180 = ((l_169 = (safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(0x5F93L, 12)) ^ 4294967294UL), (g_68.f3.f3 = (safe_div_func_int64_t_s_s(((safe_div_func_uint16_t_u_u(p_16, p_16)) > 0UL), (-1L))))))) || 247UL)) == l_23) < p_16)))
        { 
            int32_t l_181 = 9L;
            l_181 = l_169;
            g_156[1] &= (l_169 = p_16);
        }
        else
        { 
            uint64_t l_193 = 1UL;
            int32_t l_195[2][1][2];
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_195[i][j][k] = (-1L);
                }
            }
            l_195[1][0][1] |= (safe_sub_func_int32_t_s_s(((safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s((+(l_193 = (1L & (l_180 == (l_169 ^= (safe_add_func_uint8_t_u_u(0x0FL, g_68.f3.f1))))))), p_16)), g_68.f1.f2)), l_194[0][1])) || g_6[0]), p_16));
        }
    }
    else
    { 
        int8_t l_196 = 0xC6L;
        int32_t l_205[4];
        union U3 l_206[2] = {{1UL},{1UL}};
        int i;
        for (i = 0; i < 4; i++)
            l_205[i] = 0x947E1C72L;
        if ((((l_196 |= 0x9A26L) <= (g_34 < g_168)) & (p_16 ^ 0x8C6923B6AD0AE36DLL)))
        { 
            for (g_63 = (-15); (g_63 == 17); ++g_63)
            { 
                l_205[3] ^= (((safe_add_func_uint8_t_u_u(g_67, 0x1EL)) < (((safe_add_func_uint8_t_u_u(((p_16 , ((safe_div_func_uint32_t_u_u(g_62, g_68.f3.f2)) != l_196)) >= g_36[0]), l_196)) ^ p_16) && 0x7B0590F9L)) != l_23);
                return l_206[0];
            }
        }
        else
        { 
            return g_31;
        }
    }
    return l_207;
}



static int8_t  func_21(uint16_t  p_22)
{ 
    uint8_t l_29 = 9UL;
    int32_t l_35[1];
    int32_t l_154 = 0L;
    int i;
    for (i = 0; i < 1; i++)
        l_35[i] = 0x1C19CD89L;
    for (p_22 = 0; (p_22 <= 0); p_22 += 1)
    { 
        union U3 l_39 = {0x39170055L};
        struct S2 l_136 = {0xD1L,{1UL,0xAC369FCEL,1UL,0x73L,0x40898BEAL},{0x2537L},{0x6296405B1F0BCF23LL,0xC9878C96L,18446744073709551607UL,1UL,0x8B81BE9AL}};
        int i;
        l_136 = func_24((l_29 > (safe_unary_minus_func_uint16_t_u((g_31 , ((((--g_36[0]) ^ 0L) > ((g_6[0] & p_22) , 0x3F54L)) != g_6[0]))))), g_6[0], l_39, g_6[0]);
        l_154 = (((safe_div_func_uint8_t_u_u((safe_div_func_int64_t_s_s((!(l_35[0] = ((p_22 & (safe_mul_func_int16_t_s_s(p_22, (((safe_mul_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(((g_6[p_22] = ((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_u(((safe_add_func_uint16_t_u_u(p_22, ((((l_29 , 1L) , l_29) , 0x2314L) != p_22))) >= g_86), g_6[0])) && p_22), l_29)) , 0xC29BL)) && p_22), p_22)) & l_35[0]), 0xE74CL)) == l_136.f3.f1) && p_22)))) , 1L))), g_31.f0)), g_68.f3.f1)) == g_92) < 3L);
        g_155[4] |= (l_136.f2.f0 , 2L);
    }
    return l_154;
}



static struct S2  func_24(uint64_t  p_25, uint32_t  p_26, union U3  p_27, int32_t  p_28)
{ 
    union U3 l_69 = {18446744073709551615UL};
    int32_t l_70[5][1] = {{0L},{1L},{0L},{1L},{0L}};
    struct S2 l_135[2][2][3] = {{{{251UL,{0x89876BB3E926D7F8LL,0xAA83F591L,18446744073709551608UL,0x4CL,0UL},{0x3F26L},{0x00834E5BC4767704LL,1L,18446744073709551608UL,255UL,0UL}},{251UL,{0x89876BB3E926D7F8LL,0xAA83F591L,18446744073709551608UL,0x4CL,0UL},{0x3F26L},{0x00834E5BC4767704LL,1L,18446744073709551608UL,255UL,0UL}},{251UL,{0x89876BB3E926D7F8LL,0xAA83F591L,18446744073709551608UL,0x4CL,0UL},{0x3F26L},{0x00834E5BC4767704LL,1L,18446744073709551608UL,255UL,0UL}}},{{253UL,{0x9F115A3005F4BB7FLL,0xAD5EC58BL,0x227ADE1354FE0FA9LL,0xD3L,4294967295UL},{0UL},{0x1009C59F809E6970LL,-7L,0x3B64E57383A1794BLL,0x29L,0xD964B4B9L}},{253UL,{0x9F115A3005F4BB7FLL,0xAD5EC58BL,0x227ADE1354FE0FA9LL,0xD3L,4294967295UL},{0UL},{0x1009C59F809E6970LL,-7L,0x3B64E57383A1794BLL,0x29L,0xD964B4B9L}},{253UL,{0x9F115A3005F4BB7FLL,0xAD5EC58BL,0x227ADE1354FE0FA9LL,0xD3L,4294967295UL},{0UL},{0x1009C59F809E6970LL,-7L,0x3B64E57383A1794BLL,0x29L,0xD964B4B9L}}}},{{{251UL,{0x89876BB3E926D7F8LL,0xAA83F591L,18446744073709551608UL,0x4CL,0UL},{0x3F26L},{0x00834E5BC4767704LL,1L,18446744073709551608UL,255UL,0UL}},{251UL,{0x89876BB3E926D7F8LL,0xAA83F591L,18446744073709551608UL,0x4CL,0UL},{0x3F26L},{0x00834E5BC4767704LL,1L,18446744073709551608UL,255UL,0UL}},{251UL,{0x89876BB3E926D7F8LL,0xAA83F591L,18446744073709551608UL,0x4CL,0UL},{0x3F26L},{0x00834E5BC4767704LL,1L,18446744073709551608UL,255UL,0UL}}},{{253UL,{0x9F115A3005F4BB7FLL,0xAD5EC58BL,0x227ADE1354FE0FA9LL,0xD3L,4294967295UL},{0UL},{0x1009C59F809E6970LL,-7L,0x3B64E57383A1794BLL,0x29L,0xD964B4B9L}},{253UL,{0x9F115A3005F4BB7FLL,0xAD5EC58BL,0x227ADE1354FE0FA9LL,0xD3L,4294967295UL},{0UL},{0x1009C59F809E6970LL,-7L,0x3B64E57383A1794BLL,0x29L,0xD964B4B9L}},{253UL,{0x9F115A3005F4BB7FLL,0xAD5EC58BL,0x227ADE1354FE0FA9LL,0xD3L,4294967295UL},{0UL},{0x1009C59F809E6970LL,-7L,0x3B64E57383A1794BLL,0x29L,0xD964B4B9L}}}}};
    int i, j, k;
    for (p_25 = 0; (p_25 <= 0); p_25 += 1)
    { 
        int32_t l_54[3][3] = {{0x4F69674BL,0x4F69674BL,0xF7713567L},{0x4F69674BL,0x4F69674BL,0xF7713567L},{0x4F69674BL,0x4F69674BL,0xF7713567L}};
        struct S2 l_64 = {1UL,{0x5AC0FE8B8566A4DCLL,0L,6UL,0x08L,4294967286UL},{0x3114L},{0x1463D90BC214255FLL,0x7FFF3577L,0x8ED4FF94FDEA9412LL,255UL,4294967295UL}};
        int32_t l_66 = 0xC5AECEF6L;
        int i, j;
        for (p_26 = 0; (p_26 <= 0); p_26 += 1)
        { 
            int i;
            if ((0x63A47399D012CD0ALL < (((0x0CL >= (g_6[p_25] | ((safe_mod_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((safe_mod_func_int64_t_s_s(((g_36[p_26] = ((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(g_36[p_26], p_26)), g_36[0])) != p_25)) <= g_31.f0), l_54[2][2])), 0xB0536403L)), 4)), g_6[p_25])) != p_28), g_34)) == 0UL))) > g_31.f0) >= 1L)))
            { 
                struct S2 l_55 = {0xE7L,{18446744073709551608UL,1L,2UL,7UL,4294967294UL},{0UL},{0x5EE2CBD03168F1D3LL,0xFA4EE4B4L,18446744073709551606UL,255UL,0x220C99D0L}};
                int i;
                l_54[0][0] = (p_25 | ((((l_55 = l_55) , ((safe_mul_func_uint16_t_u_u((((g_36[p_26] >= (safe_rshift_func_int8_t_s_u(0x0AL, 1))) | 0L) <= (-4L)), g_36[0])) , g_6[0])) == 0x89E4L) <= 0L));
                g_63 = (g_34 == (((safe_lshift_func_uint8_t_u_s(g_36[0], 7)) == ((g_62 &= 0x96L) < (p_26 ^ g_31.f0))) > 0x773AL));
            }
            else
            { 
                struct S2 l_65 = {254UL,{18446744073709551607UL,2L,0x57B567EB8760324ALL,251UL,0xDA29A6A9L},{1UL},{8UL,1L,0x3281310918DDDCD3LL,0x82L,4294967293UL}};
                l_65 = l_64;
                l_66 = g_62;
            }
        }
        g_67 = 0x26BD8041L;
        l_70[0][0] &= (g_68 , (l_69 , g_6[p_25]));
    }
    for (g_68.f2.f0 = 0; (g_68.f2.f0 != 15); g_68.f2.f0 = safe_add_func_uint32_t_u_u(g_68.f2.f0, 3))
    { 
        int32_t l_73 = 0L;
        struct S1 l_81 = {0xB60DBC482750ABA6LL,0L,18446744073709551611UL,0UL,4294967292UL};
        union U3 l_84 = {0x7DB9AC06L};
        struct S2 l_90 = {250UL,{0xF47512D4483B5975LL,0x7C081944L,0UL,0x0DL,0x505295FBL},{0x9E82L},{1UL,-1L,9UL,249UL,0x76E4515CL}};
        uint64_t l_127 = 0x989E8BE2EB9B0FDDLL;
        if ((l_73 = l_73))
        { 
            uint32_t l_78[4][1];
            uint8_t l_85[1];
            int32_t l_103 = 0xFCB4505FL;
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_78[i][j] = 1UL;
            }
            for (i = 0; i < 1; i++)
                l_85[i] = 0xCAL;
            l_70[3][0] = (l_78[0][0] = ((((safe_add_func_int8_t_s_s((l_73 | (0x8A2DL ^ ((p_27 , (((((safe_div_func_uint32_t_u_u(((-7L) <= 5UL), p_28)) , l_73) | l_70[1][0]) > 0x50E3CEE9L) != 0x0DL)) ^ 0x01L))), p_27.f0)) | g_31.f0) ^ p_28) < l_73));
            if (g_68.f3.f4)
                break;
            if ((0x9661L == (0L == (((safe_sub_func_uint32_t_u_u((((l_81 , (safe_mul_func_uint8_t_u_u(((((g_86 ^= ((l_84 , l_73) != l_85[0])) ^ p_28) && g_68.f1.f4) , 1UL), l_81.f3))) == g_68.f3.f4) | (-10L)), l_69.f0)) ^ (-1L)) >= p_26))))
            { 
                ++g_87;
                return l_90;
            }
            else
            { 
                int32_t l_91 = 2L;
                int32_t l_99 = 0x42696941L;
                g_92 &= l_91;
                l_103 = (((safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(0x519DL, g_68.f3.f2)), (((safe_rshift_func_uint8_t_u_s((g_68.f3.f3++), (+g_68.f1.f0))) || l_70[4][0]) && l_81.f3))) || g_68.f0) || 0xC974F601976A6A2FLL);
            }
        }
        else
        { 
            const struct S2 l_134[1] = {{0x63L,{0xF120E9FE6B08A477LL,0x7779B4FEL,0x38AB0B14FC1BAD84LL,8UL,4294967295UL},{65531UL},{0x3D107391EF432E68LL,0x3BF28D7AL,6UL,0xF6L,1UL}}};
            int i;
            l_73 = p_26;
            for (g_68.f1.f3 = 0; (g_68.f1.f3 > 18); ++g_68.f1.f3)
            { 
                int32_t l_122 = 0xF569DE83L;
                l_122 = (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s(l_90.f1.f1, (safe_add_func_uint64_t_u_u(g_67, ((safe_rshift_func_uint16_t_u_u((g_6[0] = (safe_rshift_func_uint8_t_u_u(((g_34 = g_6[0]) & ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((l_69.f0 , g_92), 0xFA3BE208CE9429D6LL)), 0xDB9BL)) , 0xFA8AF15EAAFD9258LL)), p_26))), p_28)) && (-10L)))))), p_25)), 0x80L));
            }
            l_73 ^= (safe_add_func_int32_t_s_s(((g_34 ^= p_27.f0) | (safe_mod_func_uint8_t_u_u(((l_127 & (p_27.f0 ^ (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((((--p_26) , l_134[0]) , 0x6259L), g_68.f1.f4)), 0UL)))) == p_28), p_28))), p_25));
        }
    }
    return l_135[0][0][1];
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_6[i], "g_6[i]", print_hash_value);

    }
    transparent_crc(g_31.f0, "g_31.f0", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_36[i], "g_36[i]", print_hash_value);

    }
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_68.f0, "g_68.f0", print_hash_value);
    transparent_crc(g_68.f1.f0, "g_68.f1.f0", print_hash_value);
    transparent_crc(g_68.f1.f1, "g_68.f1.f1", print_hash_value);
    transparent_crc(g_68.f1.f2, "g_68.f1.f2", print_hash_value);
    transparent_crc(g_68.f1.f3, "g_68.f1.f3", print_hash_value);
    transparent_crc(g_68.f1.f4, "g_68.f1.f4", print_hash_value);
    transparent_crc(g_68.f2.f0, "g_68.f2.f0", print_hash_value);
    transparent_crc(g_68.f3.f0, "g_68.f3.f0", print_hash_value);
    transparent_crc(g_68.f3.f1, "g_68.f3.f1", print_hash_value);
    transparent_crc(g_68.f3.f2, "g_68.f3.f2", print_hash_value);
    transparent_crc(g_68.f3.f3, "g_68.f3.f3", print_hash_value);
    transparent_crc(g_68.f3.f4, "g_68.f3.f4", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_155[i], "g_155[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_156[i], "g_156[i]", print_hash_value);

    }
    transparent_crc(g_168, "g_168", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
