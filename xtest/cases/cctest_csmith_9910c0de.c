// SPDX-License-Identifier: MIT
// cctest_csmith_9910c0de.c --- cctest case csmith_9910c0de (csmith seed 2568011998)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7fb8d693 */
/* @exp_ticks 0x3ba6 */

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

// Options:   -s 2568011998 -o /tmp/csmith_gen_mkgexq1o/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   uint64_t  f1;
   const int32_t  f2;
   int8_t  f3;
   uint16_t  f4;
   uint32_t  f5;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const int8_t  f0;
   int32_t  f1;
   const int8_t  f2;
   uint64_t  f3;
   uint16_t  f4;
};
#pragma pack(pop)

struct S2 {
   int64_t  f0;
   int16_t  f1;
   int16_t  f2;
   uint8_t  f3;
   const int8_t  f4;
};

union U3 {
   struct S2  f0;
   int16_t  f1;
   uint32_t  f2;
};

union U4 {
   const struct S1  f0;
};

union U5 {
   int32_t  f0;
   int32_t  f1;
};


static int32_t g_2 = 0xA07563FFL;
static int32_t g_5 = 0L;
static union U3 g_38 = {{0x260E2EFE8E60A2FCLL,0L,9L,0UL,0xE1L}};
static uint16_t g_42 = 0x2619L;
static struct S0 g_44 = {-3L,0xB2C3978D11E8E103LL,0xA543565EL,0x39L,65535UL,4294967294UL};
static uint8_t g_83[2] = {249UL,249UL};
static struct S1 g_118[3][1] = {{{-1L,0xBC70674DL,0x7DL,18446744073709551607UL,0x0E29L}},{{-1L,0xBC70674DL,0x7DL,18446744073709551607UL,0x0E29L}},{{-1L,0xBC70674DL,0x7DL,18446744073709551607UL,0x0E29L}}};
static int64_t g_119[1][1][5] = {{{(-8L),(-8L),(-8L),(-8L),(-8L)}}};
static int8_t g_135 = 0L;
static int32_t g_190 = 7L;
static uint8_t g_231 = 9UL;
static uint32_t g_329 = 0x7A62254FL;
static union U4 g_395[2] = {{{0L,2L,0x86L,0UL,0x6AAAL}},{{0L,2L,0x86L,0UL,0x6AAAL}}};



static struct S0  func_1(void);
static struct S2  func_9(int8_t  p_10, uint32_t  p_11);
static int16_t  func_25(int8_t  p_26, int32_t  p_27, uint16_t  p_28);
static int8_t  func_29(int32_t  p_30, int8_t  p_31, int32_t  p_32, union U3  p_33, struct S0  p_34);




static struct S0  func_1(void)
{ 
    int16_t l_24 = 1L;
    int16_t l_286 = (-7L);
    int32_t l_377[2][1][3];
    int32_t l_378 = (-1L);
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
                l_377[i][j][k] = 0x017D1686L;
        }
    }
    for (g_2 = 0; (g_2 > 5); g_2++)
    { 
        int32_t l_35 = 1L;
        int8_t l_36 = 9L;
        uint32_t l_394 = 0x7EF6E7BCL;
        for (g_5 = 14; (g_5 >= 5); g_5 = safe_sub_func_uint16_t_u_u(g_5, 5))
        { 
            uint32_t l_37[5];
            struct S0 l_39 = {0x046AA1DDL,1UL,-2L,5L,0x54F8L,0xFC331464L};
            int i;
            for (i = 0; i < 5; i++)
                l_37[i] = 0x659CDE30L;
        }
    }
    return g_44;
}



static struct S2  func_9(int8_t  p_10, uint32_t  p_11)
{ 
    uint16_t l_290[1];
    int32_t l_297 = 1L;
    struct S2 l_318 = {0L,-8L,0x4AC8L,254UL,0x66L};
    const union U5 l_348[3][5][3] = {{{{0xB5DBF1D5L},{0xB5A8C57CL},{0x77463834L}},{{0x00F8B043L},{0x70EE47B8L},{0L}},{{0xB5A8C57CL},{0xB5A8C57CL},{0x70EE47B8L}},{{0xC3130D0CL},{0x4730E419L},{0x2DD10499L}},{{0xC3130D0CL},{0xA7B0CDB7L},{0x00F8B043L}}},{{{0xB5A8C57CL},{0x77463834L},{0x4730E419L}},{{0x00F8B043L},{0xC3130D0CL},{0x00F8B043L}},{{0xB5DBF1D5L},{-2L},{0x2DD10499L}},{{8L},{-2L},{0x70EE47B8L}},{{0x77463834L},{0xC3130D0CL},{0L}}},{{{1L},{0x77463834L},{0x77463834L}},{{0x77463834L},{0x2DD10499L},{0x70EE47B8L}},{{0x00F8B043L},{0x77463834L},{0x70EE47B8L}},{{-2L},{0x70EE47B8L},{1L}},{{0x4730E419L},{0xC3130D0CL},{8L}}}};
    struct S1 l_354[4][3] = {{{1L,1L,0xB4L,0x8FD80D04DAC93ADBLL,1UL},{0x5EL,5L,0xE0L,0x47D5484670E5621DLL,0xC6E3L},{1L,1L,0xB4L,0x8FD80D04DAC93ADBLL,1UL}},{{2L,0xE225A0D3L,0L,0xF2F2A417AC62B986LL,0x261CL},{-1L,0xE534A330L,0x93L,0x0A3A9BFCDB4EE339LL,0xBE77L},{2L,0xE225A0D3L,0L,0xF2F2A417AC62B986LL,0x261CL}},{{1L,1L,0xB4L,0x8FD80D04DAC93ADBLL,1UL},{0x5EL,5L,0xE0L,0x47D5484670E5621DLL,0xC6E3L},{1L,1L,0xB4L,0x8FD80D04DAC93ADBLL,1UL}},{{2L,0xE225A0D3L,0L,0xF2F2A417AC62B986LL,0x261CL},{-1L,0xE534A330L,0x93L,0x0A3A9BFCDB4EE339LL,0xBE77L},{2L,0xE225A0D3L,0L,0xF2F2A417AC62B986LL,0x261CL}}};
    union U3 l_374 = {{-4L,0x79C7L,1L,0x8EL,1L}};
    struct S2 l_376 = {8L,0x6E3BL,6L,0xB6L,6L};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_290[i] = 7UL;
    for (g_190 = 24; (g_190 == (-7)); --g_190)
    { 
        uint8_t l_289[5] = {0x05L,0x05L,0x05L,0x05L,0x05L};
        int32_t l_320 = 0x75E75CD8L;
        int32_t l_321 = 0x5C9EA918L;
        int i;
        l_289[1] &= (1UL > p_11);
        ++l_290[0];
        if ((l_289[2] ^ (safe_lshift_func_int8_t_s_s(0xD6L, 0))))
        { 
            int8_t l_298 = 9L;
            int32_t l_299[1];
            const uint16_t l_319 = 65535UL;
            struct S1 l_349 = {-6L,0x981A81CEL,0L,0x1F6D28FF04680B1DLL,0xA8F2L};
            int i;
            for (i = 0; i < 1; i++)
                l_299[i] = 0xC2E1E144L;
            if (p_10)
                break;
            if (((safe_rshift_func_int16_t_s_s((g_135 && (l_290[0] , ((l_299[0] ^= ((l_297 = p_11) , (l_298 <= 8UL))) == l_298))), g_42)) == p_10))
            { 
                l_321 = ((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((l_320 = (safe_lshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((safe_add_func_int16_t_s_s(6L, (l_299[0] &= (0UL > (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u((p_10 & (g_44.f5 ^= (l_318 , 4294967290UL))), l_319)), 8)))))), p_11)), l_298))), 0)), l_289[1])) >= 0x192C4A50L) , l_299[0]), g_231)), l_289[3])) > 0x790BL);
            }
            else
            { 
                int32_t l_326 = 0xA5CBA992L;
                int32_t l_327 = 0x62F68844L;
                int32_t l_328[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_328[i] = 0x32C3FC2EL;
                l_326 = (((g_38 , (g_38.f1 = ((safe_sub_func_int64_t_s_s((((l_299[0] = ((0UL == g_44.f1) & (p_10 > p_10))) > g_44.f3) && g_135), p_11)) > g_118[0][0].f4))) > g_119[0][0][1]) <= l_320);
                g_329++;
                g_44.f0 = ((p_10 <= ((safe_rshift_func_uint8_t_u_s((safe_mod_func_int64_t_s_s(((safe_sub_func_uint16_t_u_u(((((l_328[0] = ((l_297 <= (safe_mod_func_int8_t_s_s((l_299[0] = (g_44.f3 = (-4L))), (g_83[0] = (safe_mul_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(((((safe_add_func_uint16_t_u_u((safe_div_func_int64_t_s_s(((l_348[1][3][0] , l_349) , p_10), g_44.f2)), l_326)) < 0x28L) || l_349.f0) > g_38.f1), l_349.f3)) < g_119[0][0][1]), 0xB804L)))))) >= g_190)) < l_320) < l_349.f2) > g_118[0][0].f4), 0L)) && 0xDC3EL), 2L)), 2)) ^ g_118[0][0].f4)) == 18446744073709551614UL);
            }
        }
        else
        { 
            int16_t l_367 = 0xC6C2L;
            if ((p_11 == (safe_lshift_func_int16_t_s_s((((safe_mul_func_int16_t_s_s((g_231 ^ (l_354[0][0] , (((safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s(l_289[1], l_289[1])), p_11)) == g_44.f2) ^ g_2))), g_83[1])) > 0xF7037FAAF371F8C9LL) , 0xA3FDL), 13))))
            { 
                l_367 = ((safe_mul_func_int16_t_s_s((0xCE56L ^ (g_118[0][0].f1 != ((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((0x69B5429116A2EB4FLL || (safe_rshift_func_uint16_t_u_u(g_231, g_118[0][0].f2))), 0x7AL)), p_10)) >= p_11))), l_320)) | g_118[0][0].f0);
                g_44.f0 = 0L;
                l_320 = ((g_5 && g_5) || (g_83[1] &= (l_318.f4 && (safe_div_func_int32_t_s_s(((l_297 = (-1L)) >= g_119[0][0][4]), l_367)))));
            }
            else
            { 
                g_44.f0 ^= ((l_289[1] >= ((safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((((l_374 , (l_320 = l_367)) || 0xFBCF825A52649113LL) == 0x6FC1D8D4L), 0xCE9E5505L)), g_5)) && g_2)) >= l_290[0]);
            }
            l_320 &= (+2UL);
        }
    }
    return l_376;
}



static int16_t  func_25(int8_t  p_26, int32_t  p_27, uint16_t  p_28)
{ 
    uint64_t l_246 = 18446744073709551615UL;
    int64_t l_269[5][4][1];
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
                l_269[i][j][k] = (-1L);
        }
    }
lbl_272:
    p_27 = (l_246 , ((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((~(safe_add_func_int64_t_s_s(((safe_lshift_func_int16_t_s_u(0x3F0AL, (safe_add_func_int8_t_s_s(g_118[0][0].f0, (+(safe_rshift_func_uint8_t_u_u((((p_28 > l_246) , g_190) < 65535UL), l_246))))))) == g_135), p_27))), 0)) != g_44.f1), g_83[1])) , l_246));
    if ((((safe_mul_func_int8_t_s_s((((l_269[0][3][0] |= (safe_rshift_func_int8_t_s_s((0x11L && (l_246 != g_44.f3)), 5))) < ((g_118[1][0] , 1UL) >= p_27)) & l_246), p_28)) != l_246) & 0UL))
    { 
        p_27 = (safe_lshift_func_int8_t_s_s(0x30L, 3));
    }
    else
    { 
        uint32_t l_273 = 0UL;
        int32_t l_276 = 0x888E424FL;
        if (p_28)
            goto lbl_272;
        l_276 = ((l_273 = (g_42 <= p_28)) > ((safe_mod_func_int16_t_s_s(0x4A3DL, g_83[0])) | 0xAB7EL));
        g_44.f0 = (g_118[0][0].f1 |= (safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(((((l_276 , (p_26 = (safe_mod_func_uint16_t_u_u(p_27, (+(((safe_add_func_int64_t_s_s(p_26, l_273)) && p_28) < (-1L))))))) <= g_119[0][0][1]) >= 8UL) == p_27), 5)) | 0xC6ADC05CL), l_276)));
    }
    return l_269[2][0][0];
}



static int8_t  func_29(int32_t  p_30, int8_t  p_31, int32_t  p_32, union U3  p_33, struct S0  p_34)
{ 
    const int64_t l_40 = (-10L);
    struct S1 l_45 = {0x99L,-1L,0xFBL,18446744073709551608UL,65534UL};
    union U4 l_69 = {{1L,0xCD35A08CL,0L,18446744073709551614UL,65534UL}};
    uint32_t l_165 = 0x378F7CF6L;
    const struct S2 l_168 = {-3L,-4L,1L,1UL,0xBCL};
    int32_t l_224 = 6L;
    if (l_40)
    { 
        uint8_t l_41 = 0x4EL;
        p_32 |= ((((g_42 = (0x333DB9622CFB6473LL >= l_41)) > (safe_unary_minus_func_uint16_t_u((g_44 , (l_45 , g_44.f4))))) || g_44.f3) & 1L);
    }
    else
    { 
        const struct S1 l_53 = {-10L,0x3A3B2B4BL,0x0FL,18446744073709551615UL,0x28DFL};
        int32_t l_54 = 0x133D7BF5L;
        uint8_t l_156 = 252UL;
        int32_t l_228 = 0L;
        if ((safe_div_func_uint32_t_u_u(p_33.f0.f0, (safe_sub_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_s(p_30, 3)) > (l_45.f1 = (+(l_54 = (l_53 , (p_33.f0.f3 ^ p_33.f0.f2)))))), g_42)))))
        { 
            int32_t l_68 = (-9L);
            union U3 l_72 = {{-1L,1L,0x9760L,0x61L,0xA4L}};
            if ((safe_mod_func_int8_t_s_s((safe_mod_func_int64_t_s_s(((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((g_44.f3 = (safe_mul_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(l_45.f2, 0xC1L)) , l_45.f3), (safe_unary_minus_func_uint16_t_u(1UL))))), 2)), 0xFB12B2C9L)) < l_68), g_2)), p_34.f4)))
            { 
                l_54 = ((l_69 , (safe_mul_func_int8_t_s_s((g_38.f0.f2 == ((l_72 , (safe_mod_func_uint8_t_u_u(l_72.f0.f0, l_53.f0))) | g_5)), g_38.f0.f3))) & 0x091F4D940354EEA3LL);
                g_44.f0 ^= l_69.f0.f0;
            }
            else
            { 
                p_32 = (p_30 |= (p_34.f0 = (safe_lshift_func_uint16_t_u_s((0UL ^ (((safe_mod_func_int32_t_s_s(((g_38.f0.f2 ^= ((g_44.f3 = g_44.f3) ^ (safe_mul_func_int8_t_s_s(5L, p_33.f0.f3)))) , 0x3E6B0C5DL), p_32)) < g_44.f2) || p_34.f4)), p_33.f0.f3))));
            }
            return g_5;
        }
        else
        { 
            uint32_t l_81[5][4][4] = {{{0xE41A7851L,4294967293UL,4294967293UL,0xE41A7851L},{4294967293UL,0xE41A7851L,4294967293UL,4294967293UL},{0xE41A7851L,0xE41A7851L,0UL,0xE41A7851L},{0xE41A7851L,4294967293UL,4294967293UL,0xE41A7851L}},{{4294967293UL,0xE41A7851L,4294967293UL,4294967293UL},{0xE41A7851L,0xE41A7851L,0UL,0xE41A7851L},{0xE41A7851L,4294967293UL,4294967293UL,0xE41A7851L},{4294967293UL,0xE41A7851L,4294967293UL,4294967293UL}},{{0xE41A7851L,0xE41A7851L,0UL,0xE41A7851L},{0xE41A7851L,4294967293UL,4294967293UL,0xE41A7851L},{4294967293UL,0xE41A7851L,4294967293UL,4294967293UL},{0xE41A7851L,0xE41A7851L,0UL,0xE41A7851L}},{{0xE41A7851L,4294967293UL,4294967293UL,0xE41A7851L},{4294967293UL,0xE41A7851L,4294967293UL,4294967293UL},{0xE41A7851L,0xE41A7851L,0UL,0xE41A7851L},{0xE41A7851L,4294967293UL,4294967293UL,0xE41A7851L}},{{4294967293UL,0xE41A7851L,4294967293UL,4294967293UL},{0xE41A7851L,0xE41A7851L,0UL,0xE41A7851L},{0xE41A7851L,4294967293UL,4294967293UL,0xE41A7851L},{4294967293UL,0xE41A7851L,4294967293UL,4294967293UL}}};
            int32_t l_82[2][2][1] = {{{0L},{5L}},{{0L},{5L}}};
            int i, j, k;
            g_44.f0 = l_81[2][3][1];
            ++g_83[0];
        }
        if ((l_69.f0.f3 && (+(safe_mod_func_uint32_t_u_u((0L ^ l_69.f0.f0), (safe_unary_minus_func_int8_t_s(((p_33.f0.f1 = (safe_div_func_uint8_t_u_u((g_83[1] ^= (safe_mul_func_uint16_t_u_u(p_34.f0, 0xDD5FL))), p_34.f5))) & g_38.f0.f1))))))))
        { 
            int64_t l_99 = 0L;
            int8_t l_132 = 0L;
            g_44.f0 = 0x4D87CD7CL;
            for (p_34.f1 = 3; (p_34.f1 <= 7); p_34.f1 = safe_add_func_int16_t_s_s(p_34.f1, 2))
            { 
                int16_t l_106[2][5];
                uint32_t l_131[5][2] = {{18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL}};
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_106[i][j] = 8L;
                }
                g_44.f0 ^= (((safe_lshift_func_int8_t_s_u(g_83[0], 7)) ^ (((safe_unary_minus_func_uint32_t_u(0x451C119CL)) < l_99) || ((safe_add_func_uint32_t_u_u(((safe_add_func_int32_t_s_s((-7L), 1L)) || g_44.f4), p_33.f0.f4)) & 0x2BL))) < p_33.f0.f2);
                p_32 = ((safe_mul_func_uint16_t_u_u(l_106[0][2], (safe_rshift_func_uint16_t_u_u((~(safe_mul_func_uint8_t_u_u((p_33.f0.f3 = 0x0FL), ((0L > (safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((safe_div_func_int64_t_s_s((g_119[0][0][1] = (g_38.f0.f0 = ((l_45.f1 = (((g_118[0][0] , 0x5D1DBC6BL) >= p_32) == 0x865EE8129AC59B50LL)) >= p_34.f3))), p_31)) , l_69.f0.f4), (-1L))), l_69.f0.f2))) | l_99)))), g_2)))) | l_45.f4);
                g_44.f0 = ((l_69.f0.f4 | (safe_unary_minus_func_uint8_t_u((safe_sub_func_int16_t_s_s(((0x6A653BE29DAAEC30LL <= ((safe_add_func_uint64_t_u_u(((l_54 &= ((safe_mod_func_int64_t_s_s((l_131[4][1] = (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((65535UL <= p_33.f0.f4), p_34.f4)), g_83[1]))), g_38.f0.f4)) ^ g_38.f0.f4)) & g_119[0][0][4]), 0x51F1203DB6A5591ELL)) >= g_2)) > 0x8DL), l_132))))) ^ g_44.f1);
            }
        }
        else
        { 
            uint16_t l_144 = 0xB7E0L;
            int32_t l_159 = 0x5419F12AL;
            uint8_t l_223 = 0x8CL;
            g_118[0][0].f1 = (g_44.f0 ^= 0x10A60FE9L);
            g_118[0][0].f1 ^= (1UL <= (safe_sub_func_int8_t_s_s(g_135, ((-1L) <= (((safe_add_func_uint64_t_u_u(p_34.f1, g_118[0][0].f2)) || g_44.f5) | l_69.f0.f1)))));
            if ((safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u((((safe_sub_func_int64_t_s_s((p_33.f0.f0 = ((g_44.f3 = ((l_144 | 0xDCCDC407L) == (((g_44.f2 < ((safe_mul_func_int16_t_s_s(1L, g_118[0][0].f3)) <= g_118[0][0].f2)) >= 1L) && g_83[0]))) | 3L)), l_144)) && 9UL) > g_44.f2), l_45.f2)), g_44.f1)))
            { 
                union U4 l_147 = {{0x47L,0x5475258AL,2L,5UL,0xBB3AL}};
                int32_t l_164[5][3] = {{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L}};
                int32_t l_189 = (-7L);
                int i, j;
                l_45.f1 = (l_147 , (((safe_div_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((((((g_44.f1 = ((l_156 = (g_118[0][0].f4 = l_147.f0.f0)) <= p_34.f5)) & (safe_rshift_func_int16_t_s_s((((g_38.f1 = (p_33.f0.f4 <= g_38.f0.f3)) > 0x8791L) & l_144), g_83[1]))) & 0x812BL) & l_147.f0.f4) > p_34.f0), 0)) | g_119[0][0][0]), p_34.f5)) ^ g_2), g_2)), 0xB14546EEL)) , p_33.f0.f4) , l_144));
                l_159 ^= (-3L);
                l_189 = (((p_30 != (safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((l_165++), (l_168 , (+(g_119[0][0][2] = (0x41D1488185611DFCLL || (~(safe_div_func_int16_t_s_s((safe_div_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((+((g_190 = (safe_mod_func_int32_t_s_s((~(safe_sub_func_int8_t_s_s((((safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((((l_164[1][1] = ((safe_mul_func_int16_t_s_s(((g_44.f4 | p_30) <= 0xBC93L), l_144)) && p_30)) | l_189) & 3UL) == 1L), l_159)), g_119[0][0][1])) > 1UL) <= g_118[0][0].f3), p_31))), 0x59978608L))) , 0xFB4E0D6FL)) || 0L), 0x055BL)), g_83[0])), p_30))))))))), l_53.f3))) != 0xC5L) ^ l_144);
            }
            else
            { 
                uint8_t l_197 = 0x42L;
                uint32_t l_198[4][3][5] = {{{0x6E7BBDDAL,0x6E7BBDDAL,0x6E7BBDDAL,0x6E7BBDDAL,0x6E7BBDDAL},{4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL},{0x6E7BBDDAL,0x6E7BBDDAL,0x6E7BBDDAL,0x6E7BBDDAL,0x6E7BBDDAL}},{{4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL},{0x6E7BBDDAL,0x6E7BBDDAL,0x6E7BBDDAL,0x6E7BBDDAL,0x6E7BBDDAL},{4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL}},{{0x6E7BBDDAL,0x6E7BBDDAL,0x6E7BBDDAL,0x6E7BBDDAL,0x6E7BBDDAL},{4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL},{0x6E7BBDDAL,0x6E7BBDDAL,0x6E7BBDDAL,0x6E7BBDDAL,0x6E7BBDDAL}},{{4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL},{0x6E7BBDDAL,0x6E7BBDDAL,0x6E7BBDDAL,0x6E7BBDDAL,0x6E7BBDDAL},{4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL}}};
                int i, j, k;
                l_198[0][2][2] = (safe_lshift_func_uint16_t_u_u((g_44.f4 ^= 65535UL), ((((safe_add_func_uint32_t_u_u((g_190 | (((safe_rshift_func_uint8_t_u_s((l_197 == l_159), 2)) & l_197) == g_118[0][0].f4)), l_69.f0.f3)) , p_33.f0.f0) , p_34.f4) | 0UL)));
                if (g_135)
                    goto lbl_210;
lbl_210:
                l_159 |= (((g_38.f0.f2 |= (((+(safe_div_func_uint16_t_u_u(((safe_div_func_int8_t_s_s(g_5, g_83[0])) == ((l_53 , (safe_lshift_func_uint16_t_u_s((--p_34.f4), (safe_rshift_func_int8_t_s_s((g_118[2][0] , l_198[0][1][2]), p_33.f0.f2))))) && 0x6BF5L)), p_33.f0.f4))) , 249UL) & g_190)) < 0x200BL) , l_144);
                l_45.f1 = ((safe_div_func_uint32_t_u_u((p_34.f4 , (p_34.f5++)), (safe_add_func_int8_t_s_s(((((((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s(((p_34.f3 = (p_31 = g_2)) & (g_135 <= (((l_197 & g_38.f0.f1) < l_223) , l_159))), 3)) ^ g_119[0][0][2]) ^ 255UL), 0x4DL)), g_135)) ^ p_34.f1) , l_198[0][0][0]) && g_5) != g_38.f0.f4) == 9UL), 5L)))) != 18446744073709551614UL);
            }
        }
        for (p_33.f1 = 0; (p_33.f1 >= 0); p_33.f1 -= 1)
        { 
            uint32_t l_225 = 18446744073709551610UL;
            int32_t l_229[3][2] = {{0x7D3EE5DDL,0x7D3EE5DDL},{0x7D3EE5DDL,0x7D3EE5DDL},{0x7D3EE5DDL,0x7D3EE5DDL}};
            int i, j;
            l_225++;
            for (g_38.f0.f0 = 0; (g_38.f0.f0 <= 0); g_38.f0.f0 += 1)
            { 
                int8_t l_230 = (-1L);
                ++g_231;
                p_30 &= (((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((~(safe_lshift_func_int8_t_s_u(p_34.f0, ((safe_unary_minus_func_int16_t_s((safe_mul_func_uint8_t_u_u(p_31, (safe_rshift_func_int16_t_s_u((1UL < (-5L)), l_229[2][1])))))) <= g_83[0])))), 2)) < p_34.f4), g_119[0][0][1])) ^ l_53.f4) | 0x48L);
                if (p_34.f4)
                    break;
            }
        }
    }
    return g_118[0][0].f2;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_38.f0.f0, "g_38.f0.f0", print_hash_value);
    transparent_crc(g_38.f0.f1, "g_38.f0.f1", print_hash_value);
    transparent_crc(g_38.f0.f2, "g_38.f0.f2", print_hash_value);
    transparent_crc(g_38.f0.f3, "g_38.f0.f3", print_hash_value);
    transparent_crc(g_38.f0.f4, "g_38.f0.f4", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_44.f0, "g_44.f0", print_hash_value);
    transparent_crc(g_44.f1, "g_44.f1", print_hash_value);
    transparent_crc(g_44.f2, "g_44.f2", print_hash_value);
    transparent_crc(g_44.f3, "g_44.f3", print_hash_value);
    transparent_crc(g_44.f4, "g_44.f4", print_hash_value);
    transparent_crc(g_44.f5, "g_44.f5", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_83[i], "g_83[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_118[i][j].f0, "g_118[i][j].f0", print_hash_value);
            transparent_crc(g_118[i][j].f1, "g_118[i][j].f1", print_hash_value);
            transparent_crc(g_118[i][j].f2, "g_118[i][j].f2", print_hash_value);
            transparent_crc(g_118[i][j].f3, "g_118[i][j].f3", print_hash_value);
            transparent_crc(g_118[i][j].f4, "g_118[i][j].f4", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_119[i][j][k], "g_119[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_395[i].f0.f0, "g_395[i].f0.f0", print_hash_value);
        transparent_crc(g_395[i].f0.f1, "g_395[i].f0.f1", print_hash_value);
        transparent_crc(g_395[i].f0.f2, "g_395[i].f0.f2", print_hash_value);
        transparent_crc(g_395[i].f0.f3, "g_395[i].f0.f3", print_hash_value);
        transparent_crc(g_395[i].f0.f4, "g_395[i].f0.f4", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
