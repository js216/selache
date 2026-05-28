// SPDX-License-Identifier: MIT
// cctest_csmith_a7e2d681.c --- cctest case csmith_a7e2d681 (csmith seed 2816661121)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd7116fcd */
/* @exp_ticks 0xd191 */

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

// Options:   -s 2816661121 -o /tmp/csmith_gen__s293g9n/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   int64_t  f1;
   int32_t  f2;
   int32_t  f3;
   int16_t  f4;
   uint32_t  f5;
};
#pragma pack(pop)

union U1 {
   int8_t  f0;
   const int32_t  f1;
};


static int32_t g_2 = (-1L);
static int32_t g_43 = 0L;
static int32_t g_49 = (-3L);
static int64_t g_52 = 0x13A861D8D4885C3BLL;
static uint32_t g_53 = 4294967291UL;
static uint8_t g_75[5][6][6] = {{{0x6FL,0UL,254UL,0x38L,254UL,0UL},{0x6FL,249UL,0x38L,0xB7L,0xB6L,5UL},{0x10L,0x38L,0x6FL,3UL,3UL,0x6FL},{0x38L,0x38L,255UL,0x10L,0xB6L,3UL},{0UL,249UL,0xB7L,255UL,254UL,255UL},{0xB7L,0UL,0xB7L,5UL,0x38L,3UL}},{{0xFFL,5UL,255UL,0xACL,0x6FL,0x6FL},{0xACL,0x6FL,0x6FL,0xACL,0UL,249UL},{0xB7L,0x6FL,255UL,249UL,3UL,0x10L},{3UL,0UL,0xFFL,0UL,3UL,0xB6L},{0x10L,0x6FL,254UL,5UL,0UL,255UL},{255UL,0xACL,0x6FL,0x6FL,0xACL,255UL}},{{5UL,249UL,254UL,3UL,255UL,0xB6L},{0xACL,0x10L,0xFFL,255UL,0xFFL,0x10L},{0xACL,0xB6L,255UL,3UL,254UL,249UL},{5UL,255UL,0xACL,0x6FL,0x6FL,0xACL},{255UL,255UL,0UL,5UL,254UL,0x6FL},{0x10L,0xB6L,3UL,0UL,0xFFL,0UL}},{{3UL,0x10L,3UL,249UL,255UL,0x6FL},{0xB7L,249UL,0UL,0x38L,0xACL,0xACL},{0x38L,0xACL,0xACL,0x38L,0UL,249UL},{0xB7L,0x6FL,255UL,249UL,3UL,0x10L},{3UL,0UL,0xFFL,0UL,3UL,0xB6L},{0x10L,0x6FL,254UL,5UL,0UL,255UL}},{{255UL,0xACL,0x6FL,0x6FL,0xACL,255UL},{5UL,249UL,254UL,3UL,255UL,0xB6L},{0xACL,0x10L,0xFFL,255UL,0xFFL,0x10L},{0xACL,0xB6L,255UL,3UL,254UL,249UL},{5UL,255UL,0xACL,0x6FL,0x6FL,0xACL},{255UL,255UL,0UL,5UL,254UL,0x6FL}}};
static uint8_t g_85 = 247UL;
static int16_t g_123 = 0xFED1L;
static int8_t g_124 = (-1L);
static uint32_t g_125 = 18446744073709551615UL;
static uint16_t g_141[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
static int32_t *g_142 = (void*)0;
static int32_t *g_143 = &g_43;
static int16_t g_161 = (-5L);
static uint32_t g_162[6] = {0x2AC2E06EL,0x2AC2E06EL,0x2AC2E06EL,0x2AC2E06EL,0x2AC2E06EL,0x2AC2E06EL};
static union U1 g_164 = {0L};
static union U1 *g_163 = &g_164;
static union U1 g_167 = {0xDCL};
static struct S0 g_193 = {0x0E716780L,0x5960B8A5674ED491LL,0x31D6AA01L,0x66F3FEFEL,0xB539L,0xE2B856E2L};
static struct S0 *g_192[4][3] = {{&g_193,&g_193,&g_193},{&g_193,&g_193,&g_193},{&g_193,&g_193,&g_193},{&g_193,&g_193,&g_193}};
static uint64_t *g_246[1][4] = {{(void*)0,(void*)0,(void*)0,(void*)0}};
static uint64_t **g_245[2][4][7] = {{{&g_246[0][2],&g_246[0][0],&g_246[0][2],&g_246[0][0],&g_246[0][2],&g_246[0][0],&g_246[0][2]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_246[0][2],&g_246[0][0],&g_246[0][2],&g_246[0][0],&g_246[0][2],&g_246[0][0],&g_246[0][2]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_246[0][2],&g_246[0][0],&g_246[0][2],&g_246[0][0],&g_246[0][2],&g_246[0][0],&g_246[0][2]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_246[0][2],&g_246[0][0],&g_246[0][2],&g_246[0][0],&g_246[0][2],&g_246[0][0],&g_246[0][2]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
static uint16_t g_261 = 0UL;
static struct S0 **g_294 = &g_192[1][2];
static struct S0 ***g_293 = &g_294;
static int32_t g_350 = 0L;
static uint32_t g_353[1][6][2] = {{{6UL,6UL},{0x2CAB4327L,6UL},{6UL,0x2CAB4327L},{6UL,6UL},{0x2CAB4327L,6UL},{6UL,0x2CAB4327L}}};
static const uint64_t g_380 = 0xA8C1199373E16EADLL;
static uint32_t g_427[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
static uint64_t g_440 = 0xF52AC1A827954CA5LL;
static int16_t g_467 = (-1L);
static uint64_t g_471 = 0x91232FC59143878ALL;
static int16_t *** const g_481 = (void*)0;
static union U1 ****g_507 = (void*)0;
static const uint32_t g_515 = 1UL;
static const uint32_t *g_514 = &g_515;
static const uint32_t *g_516 = (void*)0;
static uint8_t g_635[1][1] = {{9UL}};
static int64_t g_644 = 0x2F10B91E8C5C2406LL;
static int16_t g_717[5] = {0xCEADL,0xCEADL,0xCEADL,0xCEADL,0xCEADL};
static uint8_t g_718 = 0x79L;
static int16_t ***g_724 = (void*)0;
static int16_t ****g_723 = &g_724;
static int16_t *****g_722 = &g_723;
static union U1 g_762 = {0x2BL};
static uint16_t g_792 = 9UL;
static uint16_t *g_791 = &g_792;
static uint64_t g_799[1] = {0UL};
static int64_t g_811 = (-1L);
static uint32_t g_817 = 0x280CDFA3L;
static union U1 *g_820 = &g_167;
static int8_t g_844[2] = {8L,8L};
static int32_t g_845 = (-5L);
static int32_t g_846[2] = {0x61EF5EBCL,0x61EF5EBCL};
static int16_t *g_887 = &g_161;
static int16_t **g_886 = &g_887;
static int16_t **g_889[4] = {&g_887,&g_887,&g_887,&g_887};
static int16_t g_1071 = 0x254DL;
static uint8_t g_1077 = 0xABL;
static union U1 **g_1143 = (void*)0;
static union U1 ***g_1142 = &g_1143;
static const union U1 g_1228 = {-3L};
static union U1 g_1231 = {2L};
static uint32_t g_1232[2][3][2] = {{{0UL,0UL},{0UL,0UL},{0UL,0UL}},{{0UL,0UL},{0UL,0UL},{0UL,0UL}}};
static union U1 g_1436 = {0xDFL};
static uint32_t g_1470[4][6] = {{18446744073709551615UL,18446744073709551609UL,3UL,3UL,18446744073709551609UL,18446744073709551615UL},{0x9AC12B8EL,18446744073709551615UL,3UL,18446744073709551615UL,0x9AC12B8EL,0x9AC12B8EL},{0UL,18446744073709551615UL,18446744073709551615UL,0UL,18446744073709551609UL,0UL},{0UL,18446744073709551609UL,0UL,18446744073709551615UL,18446744073709551615UL,0UL}};
static int64_t **g_1520 = (void*)0;
static int64_t *g_1524 = (void*)0;
static int64_t **g_1523 = &g_1524;
static uint32_t g_1540[1][3][3] = {{{0x35DA3DB7L,0x35DA3DB7L,0x35DA3DB7L},{0x8439AF58L,18446744073709551614UL,0x8439AF58L},{0x35DA3DB7L,0x35DA3DB7L,0x35DA3DB7L}}};
static uint64_t * const *g_1577[3] = {&g_246[0][0],&g_246[0][0],&g_246[0][0]};
static uint64_t * const **g_1576 = &g_1577[1];
static union U1 **g_1697 = &g_163;
static union U1 g_1870 = {0x14L};
static int32_t g_1891 = (-1L);
static uint8_t g_2046[2][2] = {{5UL,5UL},{5UL,5UL}};
static int32_t ***g_2089 = (void*)0;
static uint64_t ***g_2111 = &g_245[0][0][6];
static uint64_t ****g_2110[2][5] = {{&g_2111,&g_2111,&g_2111,&g_2111,&g_2111},{&g_2111,&g_2111,&g_2111,&g_2111,&g_2111}};
static uint64_t *****g_2109 = &g_2110[0][1];
static int32_t ****g_2168 = &g_2089;
static int32_t *****g_2167 = &g_2168;
static uint8_t *g_2204 = &g_85;
static uint8_t **g_2203 = &g_2204;
static uint32_t g_2206[2] = {9UL,9UL};
static int32_t g_2242 = 0L;
static int64_t g_2256 = 7L;
static int64_t **g_2311 = &g_1524;
static uint32_t g_2379[5][6][7] = {{{3UL,0UL,1UL,18446744073709551615UL,0x5D57D38CL,0x5D57D38CL,18446744073709551615UL},{1UL,0xA770AACCL,1UL,6UL,1UL,0xE776E9F8L,18446744073709551608UL},{1UL,3UL,0x5A60C437L,0x6158E9D2L,0xC8E4C12FL,0UL,18446744073709551615UL},{18446744073709551614UL,18446744073709551608UL,0x8EA47160L,0x9C42FA43L,0x5D57D38CL,0xE776E9F8L,18446744073709551614UL},{0x3D58E56AL,0x9C42FA43L,18446744073709551608UL,0x5D57D38CL,18446744073709551615UL,0x5D57D38CL,18446744073709551608UL},{0x9C42FA43L,0x9C42FA43L,0UL,1UL,3UL,0x5A60C437L,0x6158E9D2L}},{{0xC8E4C12FL,18446744073709551608UL,0UL,0xC8E4C12FL,6UL,4UL,1UL},{1UL,3UL,6UL,0x5D57D38CL,3UL,0x3D58E56AL,0UL},{0x6158E9D2L,0xA770AACCL,0x5A60C437L,18446744073709551615UL,18446744073709551615UL,0x5A60C437L,0xA770AACCL},{0x6158E9D2L,0UL,18446744073709551609UL,6UL,0x02B5BDDDL,1UL,6UL},{2UL,18446744073709551608UL,18446744073709551611UL,1UL,0UL,0x5A60C437L,4UL},{0UL,0x5D57D38CL,18446744073709551614UL,6UL,18446744073709551608UL,18446744073709551615UL,4UL}},{{4UL,4UL,0x02B5BDDDL,0x3D58E56AL,0x02B5BDDDL,4UL,4UL},{18446744073709551609UL,1UL,0UL,0x02B5BDDDL,4UL,0x9A0165D3L,4UL},{1UL,0x3D58E56AL,18446744073709551615UL,0UL,0x5D57D38CL,18446744073709551614UL,6UL},{18446744073709551608UL,4UL,0UL,18446744073709551608UL,1UL,2UL,0xE776E9F8L},{2UL,0x8EA47160L,0x02B5BDDDL,0x02B5BDDDL,0x8EA47160L,2UL,0x5A60C437L},{6UL,0UL,18446744073709551614UL,4UL,1UL,18446744073709551614UL,18446744073709551608UL}},{{0x8EA47160L,0x5A60C437L,18446744073709551611UL,0x5D57D38CL,0x02B5BDDDL,0x9A0165D3L,0x5D57D38CL},{2UL,0UL,18446744073709551609UL,1UL,0xE776E9F8L,4UL,4UL},{0xE776E9F8L,0x8EA47160L,18446744073709551614UL,0x8EA47160L,0xE776E9F8L,18446744073709551615UL,1UL},{0x3D58E56AL,4UL,1UL,1UL,0x02B5BDDDL,0x5A60C437L,0x3D58E56AL},{18446744073709551609UL,0x3D58E56AL,0x5A60C437L,0x02B5BDDDL,1UL,1UL,4UL},{0x3D58E56AL,1UL,18446744073709551615UL,0xE776E9F8L,0x8EA47160L,18446744073709551614UL,0x8EA47160L}},{{0xE776E9F8L,4UL,4UL,0xE776E9F8L,1UL,18446744073709551609UL,0UL},{2UL,0x5D57D38CL,0x9A0165D3L,0x02B5BDDDL,0x5D57D38CL,18446744073709551611UL,0x5A60C437L},{0x8EA47160L,18446744073709551608UL,18446744073709551614UL,1UL,4UL,18446744073709551614UL,0UL},{6UL,0x5A60C437L,2UL,0x8EA47160L,0x02B5BDDDL,0x02B5BDDDL,0x8EA47160L},{2UL,0xE776E9F8L,2UL,1UL,18446744073709551608UL,0UL,4UL},{18446744073709551608UL,6UL,18446744073709551614UL,0x5D57D38CL,0UL,18446744073709551615UL,0x3D58E56AL}}};
static uint32_t g_2410[2][4][1] = {{{0x726E94FAL},{4294967291UL},{0x726E94FAL},{0x726E94FAL}},{{4294967291UL},{0x726E94FAL},{0x726E94FAL},{4294967291UL}}};
static uint64_t ***g_2423[6] = {&g_245[0][0][6],&g_245[0][0][6],&g_245[0][0][6],&g_245[0][0][6],&g_245[0][0][6],&g_245[0][0][6]};
static int16_t g_2435 = 1L;
static const uint8_t g_2458[4] = {0xFFL,0xFFL,0xFFL,0xFFL};
static uint8_t g_2473[2][3] = {{0UL,0UL,0UL},{0UL,0UL,0UL}};
static const uint16_t g_2633 = 0x2C6FL;
static int32_t *g_2637 = &g_846[0];
static const int64_t ***g_2685 = (void*)0;
static const int64_t ****g_2684 = &g_2685;
static int32_t g_2707 = 7L;
static uint8_t *g_2803[4][5] = {{&g_635[0][0],&g_2046[1][0],(void*)0,&g_635[0][0],&g_635[0][0]},{&g_75[3][1][0],&g_635[0][0],&g_2046[1][0],&g_635[0][0],&g_75[3][1][0]},{(void*)0,(void*)0,&g_2046[1][0],&g_635[0][0],(void*)0},{&g_75[3][1][0],&g_2046[1][0],&g_2046[1][0],&g_75[3][1][0],&g_635[0][0]}};
static uint8_t ** const g_2802 = &g_2803[1][0];
static uint8_t ** const *g_2801[1] = {&g_2802};



static int8_t  func_1(void);
static struct S0  func_5(int8_t  p_6, int32_t  p_7, uint64_t  p_8, union U1  p_9, struct S0  p_10);
static uint32_t  func_13(union U1  p_14, int32_t  p_15, uint8_t  p_16);
static union U1  func_17(int64_t  p_18, uint32_t  p_19, uint64_t  p_20, int32_t  p_21, int64_t  p_22);
static int64_t  func_23(uint32_t  p_24);
static int32_t * func_27(uint8_t  p_28, int8_t  p_29, int32_t * p_30, uint32_t  p_31, int32_t * p_32);
static int32_t * func_35(struct S0  p_36);
static struct S0  func_61(uint32_t  p_62, int32_t * p_63, int32_t * const  p_64);




static int8_t  func_1(void)
{ 
    int32_t *l_2282 = (void*)0;
    uint64_t ** const *l_2288 = (void*)0;
    uint32_t l_2306 = 5UL;
    uint16_t l_2314 = 0x361EL;
    struct S0 **l_2316 = &g_192[2][0];
    int32_t l_2325 = (-9L);
    int32_t l_2326[2][5][2];
    uint8_t **l_2359 = &g_2204;
    int64_t l_2361 = 0x52D410E2459F9DF7LL;
    union U1 l_2388[7][7] = {{{-1L},{0x93L},{0xDDL},{0x5BL},{0xDDL},{0x93L},{0xA9L}},{{6L},{0xA9L},{0xCBL},{0x5BL},{0x7BL},{1L},{0x64L}},{{-1L},{0xDFL},{1L},{0x64L},{6L},{0xB8L},{0xB8L}},{{1L},{0x98L},{0xCBL},{0x98L},{1L},{0x27L},{2L}},{{2L},{0x98L},{0xDDL},{0xA9L},{0x5BL},{-1L},{6L}},{{0x98L},{0xDFL},{0x5BL},{0xFAL},{0xCBL},{0xCBL},{0xFAL}},{{2L},{0xA9L},{2L},{0xCBL},{1L},{0xDFL},{0xFAL}}};
    uint64_t l_2399[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
    uint32_t *l_2422 = &g_2410[0][2][0];
    uint32_t **l_2421 = &l_2422;
    uint16_t l_2450 = 0UL;
    int32_t l_2463 = 0x373EA232L;
    int64_t l_2472 = 0x9877F8201C62F756LL;
    int32_t l_2474 = (-7L);
    int32_t l_2475 = 0x2D08AE74L;
    int32_t l_2476 = 7L;
    int32_t *l_2477[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    const uint64_t *l_2492 = (void*)0;
    const uint64_t **l_2491 = &l_2492;
    const uint64_t ***l_2490[7] = {&l_2491,&l_2491,&l_2491,&l_2491,&l_2491,&l_2491,&l_2491};
    const uint64_t ****l_2489 = &l_2490[0];
    const uint64_t *****l_2488 = &l_2489;
    union U1 ****l_2520[2];
    int32_t * const l_2521 = &g_846[0];
    int8_t *l_2565 = &l_2388[2][2].f0;
    int32_t l_2586 = 0xFC6094E3L;
    int8_t l_2595 = (-1L);
    int32_t l_2603 = 0xE3A59341L;
    struct S0 ****l_2655[3][1];
    int8_t l_2717[4][3][1] = {{{0x10L},{0L},{0x10L}},{{0xEEL},{0xEEL},{0x10L}},{{0L},{0x10L},{0xEEL}},{{0xEEL},{0x10L},{0L}}};
    const struct S0 l_2750 = {0xC1F3DE26L,-3L,-10L,-1L,-1L,0x5E89263CL};
    int64_t l_2752 = 0xF8A76C9A4FBDB784LL;
    int16_t l_2791[1];
    uint64_t l_2816 = 1UL;
    int32_t l_2820 = 1L;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
                l_2326[i][j][k] = 0x0001BD4BL;
        }
    }
    for (i = 0; i < 2; i++)
        l_2520[i] = &g_1142;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_2655[i][j] = (void*)0;
    }
    for (i = 0; i < 1; i++)
        l_2791[i] = 0xC9C4L;
    for (g_2 = 15; (g_2 != (-10)); g_2 = safe_sub_func_int64_t_s_s(g_2, 5))
    { 
        int32_t l_11 = 0L;
        union U1 l_12 = {0xFAL};
        struct S0 l_2173[1] = {{1UL,0x355613BF25BFA087LL,0x5EC673F5L,0L,7L,0x36960576L}};
        struct S0 *l_2279 = (void*)0;
        struct S0 *l_2280 = &g_193;
        int32_t *l_2281 = &g_2;
        uint16_t l_2327 = 65533UL;
        int i;
    }
    for (g_49 = 29; (g_49 == 3); g_49 = safe_sub_func_uint8_t_u_u(g_49, 7))
    { 
        int8_t l_2368 = 0x24L;
        int32_t l_2373 = 0x20BD2AB6L;
        int32_t l_2375 = 0xEDB7758BL;
        int32_t l_2376 = (-10L);
        int32_t l_2377[7];
        uint32_t l_2398 = 4UL;
        struct S0 l_2409 = {1UL,-1L,6L,-1L,-6L,8UL};
        const uint8_t *l_2457 = &g_2458[3];
        const uint8_t **l_2456 = &l_2457;
        int8_t *l_2459 = (void*)0;
        int8_t *l_2460 = &g_762.f0;
        int i;
        for (i = 0; i < 7; i++)
            l_2377[i] = 0xCBBBC254L;
        for (g_193.f5 = (-20); (g_193.f5 <= 31); g_193.f5 = safe_add_func_int64_t_s_s(g_193.f5, 8))
        { 
            uint64_t l_2369 = 18446744073709551610UL;
            int32_t l_2371[3];
            int64_t l_2389[3][2][4];
            int32_t *l_2392 = &g_2;
            uint64_t l_2400 = 0xDCC66F1EAAC298B4LL;
            int32_t l_2401 = 1L;
            struct S0 l_2408 = {0UL,0L,-5L,0x8F30ED53L,4L,0xD30B1440L};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_2371[i] = 0L;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_2389[i][j][k] = 0xD57951F1B003BA29LL;
                }
            }
            for (g_1071 = (-23); (g_1071 == 21); g_1071++)
            { 
                int16_t l_2372 = 0x5540L;
                int32_t l_2374 = 2L;
            }
            for (g_1077 = 20; (g_1077 == 42); g_1077 = safe_add_func_uint32_t_u_u(g_1077, 5))
            { 
                l_2409 = l_2408;
                for (g_811 = 0; (g_811 <= 3); g_811 += 1)
                { 
                    (*g_143) ^= 0x7AC75E12L;
                }
            }
            g_142 = func_35(l_2408);
            for (g_1231.f0 = 0; (g_1231.f0 <= 3); g_1231.f0 += 1)
            { 
                for (g_2256 = 0; (g_2256 <= 3); g_2256 += 1)
                { 
                    g_2410[0][3][0]++;
                }
                return (*l_2392);
            }
        }
        for (g_1891 = 0; (g_1891 <= 12); g_1891++)
        { 
            const uint8_t l_2417 = 0x8BL;
            int32_t l_2420[5];
            uint64_t *l_2432 = &g_799[0];
            int32_t l_2444 = 0xA4222F61L;
            uint8_t l_2445 = 0x55L;
            int i;
            for (i = 0; i < 5; i++)
                l_2420[i] = 0xD0C6BF6CL;
            (*g_143) |= (((((((safe_sub_func_int64_t_s_s(l_2417, l_2417)) & ((l_2417 == ((((*g_791) != ((**g_886) , ((((l_2377[0] <= (!(l_2420[1] = ((~((0xB716L != 0xCC27L) == l_2375)) & 0xE8L)))) , l_2409.f3) , l_2421) == (void*)0))) == l_2409.f4) || l_2375)) & (*g_514))) , (void*)0) == (*g_2167)) , g_2423[3]) != (void*)0) | (*g_791));
            (*g_143) = (safe_lshift_func_int16_t_s_u(((((((safe_add_func_uint16_t_u_u(((((++(**l_2359)) ^ 0x72L) & ((**l_2421) = ((g_162[3] <= ((*l_2432)--)) <= g_2435))) && ((**g_2203) = (safe_sub_func_int32_t_s_s((g_380 >= (((18446744073709551615UL & l_2417) >= ((safe_div_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((l_2373 >= (*g_791)), 0UL)) <= 0xC5F53CA7L), l_2409.f1)) >= l_2444)) | 7UL)), (*g_514))))), l_2445)) , &g_2203) == (void*)0) | l_2368) < 0UL) == 0xDE7A280FL), (*g_791)));
        }
        (*g_143) ^= ((void*)0 != (*g_2203));
        (*g_143) ^= ((safe_sub_func_int8_t_s_s(((*l_2460) = (((safe_mul_func_int8_t_s_s(((l_2450 != ((safe_add_func_int64_t_s_s(((0x9EL == 0x1EL) < ((+(((*g_791) >= ((**g_1697) , (safe_mul_func_int8_t_s_s(0xDFL, ((((((*l_2456) = (*g_2203)) == (void*)0) >= 0x00DBL) < (*g_514)) , 0L))))) <= 1UL)) ^ 0UL)), 18446744073709551612UL)) || l_2376)) , g_52), 248UL)) == 1UL) & 0xF535L)), 0x7FL)) ^ 65535UL);
    }
    g_49 = (l_2463 <= ((l_2326[1][0][1] & (((**g_886) = (l_2476 &= (safe_add_func_uint64_t_u_u((((((((safe_rshift_func_uint8_t_u_s(((**g_2203) = 0xF8L), 3)) || ((safe_rshift_func_uint8_t_u_u((((**l_2316) , (((func_17((safe_lshift_func_int8_t_s_s(l_2361, (0x0DL ^ (((((**l_2359) = (**g_2203)) , g_1071) , (*g_887)) < l_2361)))), g_2206[0], l_2399[6], l_2361, l_2472) , (-1L)) & g_2473[0][2]) && l_2474)) | 0x4BC84205C7445301LL), l_2361)) >= l_2475)) < 0x37016479L) , (*g_791)) , (void*)0) != &g_2168) | 0x111C09CCL), l_2325)))) , l_2325)) == l_2326[1][0][1]));
    for (g_792 = 0; (g_792 < 48); ++g_792)
    { 
        uint32_t l_2480 = 0xD83BFFE3L;
        int32_t l_2481 = 0L;
        int8_t *l_2518 = &g_124;
        int8_t l_2519 = 0x02L;
        uint32_t l_2546 = 0x6FAD5A6DL;
        int32_t l_2571 = 0x3C94A2A3L;
        int16_t **l_2583 = &g_887;
        uint8_t l_2598 = 1UL;
        int32_t l_2605 = 1L;
        int32_t l_2606 = 0xDFE0F094L;
        int32_t l_2609 = 1L;
        int32_t l_2610 = (-1L);
        int32_t l_2611 = 0xD3666B9CL;
        int32_t l_2612 = 5L;
        int32_t l_2613 = 8L;
        int32_t l_2614 = (-1L);
        int32_t l_2615 = 0L;
        struct S0 l_2636 = {0x8F9168C6L,-1L,1L,-3L,0x13A0L,18446744073709551610UL};
        int32_t l_2669 = 5L;
        union U1 l_2672 = {0xE1L};
        int64_t l_2676 = 1L;
        int16_t l_2695 = 0L;
        int32_t l_2703 = 0x024D8DD0L;
        uint32_t l_2704[7] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
        int32_t *l_2713 = &l_2615;
        uint16_t l_2762[1][2][5] = {{{65532UL,0UL,0UL,65532UL,0UL},{65532UL,65532UL,65532UL,65532UL,65532UL}}};
        uint8_t l_2807[7][2];
        int64_t l_2810 = 0x8125726986E3057FLL;
        int16_t l_2813[3][7] = {{0xC487L,0xC487L,0xC487L,0xC487L,0xC487L,0xC487L,0xC487L},{0L,0x1024L,0L,0x1024L,0L,0x1024L,0L},{0xC487L,0xC487L,0xC487L,0xC487L,0xC487L,0xC487L,0xC487L}};
        uint16_t l_2819 = 0x9F85L;
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 2; j++)
                l_2807[i][j] = 255UL;
        }
        l_2481 ^= l_2480;
        for (g_193.f3 = 0; (g_193.f3 <= 1); g_193.f3 += 1)
        { 
            int32_t l_2496 = 0x66E88F52L;
            int i;
            g_846[g_193.f3] = (((safe_div_func_int32_t_s_s((((safe_mod_func_int64_t_s_s(((safe_sub_func_uint32_t_u_u((((l_2488 != &g_2110[0][3]) , ((safe_mod_func_uint32_t_u_u((g_846[g_193.f3] == (l_2496 = (g_141[(g_193.f3 + 2)] = (safe_unary_minus_func_int16_t_s(g_846[g_193.f3]))))), (((safe_sub_func_int32_t_s_s((((safe_add_func_int16_t_s_s((-1L), ((safe_lshift_func_uint16_t_u_u((g_162[5] , g_846[g_193.f3]), 2)) , l_2480))) && l_2481) >= 0x7BL), (*g_514))) ^ g_846[g_193.f3]) ^ g_846[g_193.f3]))) >= 4294967291UL)) <= 0xE336C056FB5C466ALL), l_2481)) == (*g_791)), l_2481)) , (*g_791)) <= 7L), (*g_514))) || 0x84ECL) == (**g_2203));
            return g_2435;
        }
    }
    return l_2820;
}



static struct S0  func_5(int8_t  p_6, int32_t  p_7, uint64_t  p_8, union U1  p_9, struct S0  p_10)
{ 
    union U1 *l_2177 = (void*)0;
    int32_t l_2180[3][1];
    uint32_t l_2250 = 3UL;
    struct S0 l_2253 = {4UL,0L,-3L,0x0BADBD8AL,0x2823L,5UL};
    uint8_t **l_2263 = &g_2204;
    int32_t *l_2265 = &g_43;
    int32_t *l_2266 = &g_193.f3;
    int32_t *l_2267[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t l_2268 = 0x55A42991838E6A10LL;
    uint32_t l_2269 = 18446744073709551612UL;
    int64_t ***l_2276[5] = {&g_1523,&g_1523,&g_1523,&g_1523,&g_1523};
    int32_t *****l_2277 = (void*)0;
    int8_t *l_2278[2];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_2180[i][j] = 0x5E724D1EL;
    }
    for (i = 0; i < 2; i++)
        l_2278[i] = (void*)0;
lbl_2179:
    for (g_193.f2 = 6; (g_193.f2 >= 1); g_193.f2 -= 1)
    { 
        int32_t l_2174 = (-6L);
        struct S0 l_2176 = {18446744073709551615UL,-1L,0x1550CC4FL,0xB4385ED9L,1L,0UL};
        int i;
        l_2174 |= 0x214B160FL;
        if (g_141[g_193.f2])
            continue;
        for (g_164.f0 = 0; (g_164.f0 >= 0); g_164.f0 -= 1)
        { 
            struct S0 l_2175 = {0UL,0xB941CF67C359C3E0LL,1L,0x46BFD478L,0x40F9L,1UL};
            l_2176 = l_2175;
            (*g_1697) = l_2177;
            if (p_10.f1)
                break;
            for (g_193.f1 = 0; (g_193.f1 >= 0); g_193.f1 -= 1)
            { 
                int32_t **l_2178[1][3][4];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 4; k++)
                            l_2178[i][j][k] = &g_142;
                    }
                }
                g_142 = &p_7;
                if (g_193.f1)
                    goto lbl_2179;
            }
        }
    }
    for (g_161 = 1; (g_161 >= 0); g_161 -= 1)
    { 
        int32_t *l_2181 = &g_193.f3;
        int32_t l_2223[1];
        uint16_t l_2230[2][5];
        uint64_t *l_2261 = &g_440;
        uint32_t l_2264 = 0xE0E4815FL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_2223[i] = 0x2893F0BAL;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
                l_2230[i][j] = 65535UL;
        }
        (*l_2181) &= l_2180[0][0];
        for (g_350 = 1; (g_350 >= 0); g_350 -= 1)
        { 
            uint64_t l_2191 = 0x94350D0CCEBA6D4DLL;
            uint8_t ** const l_2205 = &g_2204;
            int32_t l_2207 = 0x57266682L;
            int32_t l_2224 = 0x6F22AD1EL;
            int32_t l_2225 = 0x4F6E9B6DL;
            int32_t l_2226 = 0xDC7C8D2BL;
            int32_t l_2227 = 0L;
            int32_t l_2228 = (-1L);
            int32_t l_2229 = 7L;
            int32_t l_2243 = 0xF09F07DAL;
            int32_t l_2244 = (-1L);
            int32_t l_2245 = (-1L);
            int32_t l_2246 = 0x83E7BEA6L;
            int32_t l_2247 = 0x0B813982L;
            int32_t l_2248 = 4L;
            int32_t l_2249 = (-1L);
            if (((*l_2181) = (0L | (safe_add_func_uint8_t_u_u(p_10.f0, (safe_sub_func_uint32_t_u_u((l_2207 = ((safe_unary_minus_func_uint32_t_u(((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(l_2191, (safe_add_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u(((~(safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(0xEE29L, (safe_div_func_uint32_t_u_u(0UL, 0x51E195EFL)))), (g_2203 == l_2205)))) > 0UL), 0xC8L)) , 0UL), 0x1900B7C3L)))), l_2191)) , g_2206[1]))) != l_2180[1][0])), 0L)))))))
            { 
                int32_t *l_2208 = &g_846[0];
                int32_t *l_2209 = &g_193.f2;
                int32_t *l_2210 = &l_2207;
                int32_t *l_2211 = &l_2207;
                int32_t *l_2212 = &g_846[0];
                int32_t *l_2213 = &g_43;
                int32_t *l_2214 = &g_49;
                int32_t *l_2215 = &g_49;
                int32_t *l_2216 = &l_2207;
                int32_t *l_2217 = &g_193.f3;
                int32_t *l_2218 = &g_845;
                int32_t *l_2219 = &g_846[0];
                int32_t *l_2220 = (void*)0;
                int32_t *l_2221 = &g_845;
                int32_t *l_2222[4][2] = {{(void*)0,&g_846[0]},{&g_846[0],(void*)0},{&g_846[0],&g_846[0]},{(void*)0,&g_846[0]}};
                int i, j;
                l_2230[1][2]--;
            }
            else
            { 
                int32_t *l_2233 = (void*)0;
                int32_t *l_2234 = &l_2229;
                int32_t *l_2235 = &g_49;
                int32_t *l_2236 = &l_2223[0];
                int32_t *l_2237 = &l_2223[0];
                int32_t *l_2238 = &l_2224;
                int32_t *l_2239 = &l_2227;
                int32_t *l_2240 = (void*)0;
                int32_t *l_2241[7][6] = {{(void*)0,&l_2229,&l_2207,&l_2224,&l_2207,&l_2229},{(void*)0,&l_2229,&l_2207,&l_2224,&l_2207,&l_2229},{(void*)0,&l_2229,&l_2207,&l_2224,&l_2207,&l_2229},{(void*)0,&l_2229,&l_2207,&l_2224,&l_2207,&l_2229},{(void*)0,&l_2229,&l_2207,&l_2224,&l_2207,&l_2229},{(void*)0,&l_2229,&l_2207,&l_2224,&l_2207,&l_2229},{(void*)0,&l_2229,&l_2207,&l_2224,&l_2207,&l_2229}};
                int i, j;
                l_2250--;
                if (p_10.f4)
                    break;
                return l_2253;
            }
            for (g_167.f0 = 1; (g_167.f0 >= 0); g_167.f0 -= 1)
            { 
                uint64_t ****l_2254 = &g_2111;
                int16_t *l_2255[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint64_t **l_2262 = &g_246[0][0];
                int i, j, k;
                p_7 |= ((((g_2256 = (p_10.f4 = ((l_2254 == (void*)0) && (*g_514)))) ^ (((((safe_lshift_func_int8_t_s_s(g_2206[1], 4)) , (*g_293)) == (((((safe_mul_func_uint16_t_u_u((&p_8 != ((*l_2262) = l_2261)), 4L)) , l_2263) == (void*)0) && l_2264) , (void*)0)) <= p_10.f2) & (-1L))) , 4294967287UL) , (-1L));
                for (l_2191 = 0; (l_2191 <= 0); l_2191 += 1)
                { 
                    return p_10;
                }
            }
        }
    }
    (*l_2266) &= ((*l_2265) = 0x96B35AB0L);
    l_2269++;
    (*l_2265) |= (((safe_add_func_uint16_t_u_u(((((void*)0 != l_2276[2]) | (&g_141[0] != (void*)0)) && ((p_6 ^= (p_10.f3 || ((l_2277 = l_2277) == &g_2168))) ^ g_1540[0][0][1])), 1L)) , 255UL) , (-2L));
    return l_2253;
}



static uint32_t  func_13(union U1  p_14, int32_t  p_15, uint8_t  p_16)
{ 
    int16_t l_1814 = 0x1D98L;
    int32_t l_1817[4] = {0L,0L,0L,0L};
    uint32_t l_1836 = 4294967286UL;
    union U1 *l_1869 = &g_1870;
    struct S0 *** const l_1878[3] = {&g_294,&g_294,&g_294};
    int16_t **l_1897 = &g_887;
    const uint32_t l_1982 = 18446744073709551611UL;
    int32_t l_2045 = 0L;
    uint8_t *l_2066 = (void*)0;
    uint8_t **l_2065 = &l_2066;
    uint8_t ** const *l_2064 = &l_2065;
    int16_t * const *l_2082 = &g_887;
    int16_t * const **l_2081 = &l_2082;
    int32_t l_2115[5][7];
    uint8_t l_2132 = 0x80L;
    int64_t * const *l_2164[4][7][1] = {{{(void*)0},{(void*)0},{(void*)0},{&g_1524},{&g_1524},{(void*)0},{(void*)0}},{{(void*)0},{&g_1524},{&g_1524},{(void*)0},{(void*)0},{(void*)0},{&g_1524}},{{&g_1524},{(void*)0},{(void*)0},{(void*)0},{&g_1524},{&g_1524},{(void*)0}},{{(void*)0},{(void*)0},{&g_1524},{&g_1524},{(void*)0},{(void*)0},{(void*)0}}};
    int64_t * const **l_2163 = &l_2164[1][5][0];
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
            l_2115[i][j] = 0xE7DFCA41L;
    }
lbl_1910:
    for (g_167.f0 = 14; (g_167.f0 >= 0); g_167.f0 = safe_sub_func_uint16_t_u_u(g_167.f0, 5))
    { 
        uint16_t l_1813 = 65531UL;
        int32_t ** const *l_1820 = (void*)0;
        int32_t *l_1824 = (void*)0;
        int32_t ** const l_1823 = &l_1824;
        int32_t ** const *l_1822[3][4] = {{&l_1823,(void*)0,(void*)0,&l_1823},{(void*)0,(void*)0,&l_1823,(void*)0},{(void*)0,&l_1823,&l_1823,&l_1823}};
        int32_t ** const **l_1821 = &l_1822[1][2];
        uint32_t l_1825[3][2];
        uint64_t *l_1826[1][3];
        int32_t l_1827[4][2] = {{(-7L),0x3D09CB45L},{0x3D09CB45L,(-7L)},{0x3D09CB45L,0x3D09CB45L},{(-7L),0x3D09CB45L}};
        int32_t *l_1835[4][4];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_1825[i][j] = 9UL;
        }
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_1826[i][j] = &g_440;
        }
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
                l_1835[i][j] = (void*)0;
        }
        p_15 = (l_1836 = (safe_div_func_uint64_t_u_u((l_1827[3][0] &= (safe_mod_func_uint64_t_u_u((l_1814 = l_1813), (safe_lshift_func_int8_t_s_s(l_1817[0], (safe_mul_func_uint8_t_u_u((l_1820 == ((*l_1821) = l_1820)), l_1825[0][1]))))))), (safe_mod_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_unary_minus_func_int32_t_s((g_49 &= (p_16 | (safe_mod_func_int32_t_s_s((0xE33B577CAFB71A08LL && 0xFD76C59BA7035D7BLL), l_1817[0])))))), p_16)), p_15)))));
    }
    if (((safe_mul_func_int8_t_s_s(g_844[1], (7L == (l_1817[2] = 0x4DBFL)))) || 0L))
    { 
        uint32_t l_1851 = 0x9C7B14D0L;
        int64_t *l_1852 = &g_52;
        int32_t l_1854 = 1L;
        uint32_t l_1883 = 2UL;
        int64_t l_1909 = 0L;
        struct S0 l_1911 = {18446744073709551611UL,0L,0x76127145L,0x4E6B48B7L,0x9078L,0xC2CE090BL};
        int32_t *l_1916 = &l_1817[0];
        struct S0 l_1920 = {1UL,1L,0x28787B50L,-6L,0xCADFL,0xD65AB701L};
        const int16_t l_1935 = 1L;
        union U1 *****l_1997 = &g_507;
        uint64_t l_2025 = 5UL;
        uint32_t l_2034 = 1UL;
        int64_t l_2044 = 1L;
        for (g_193.f1 = 0; (g_193.f1 < 7); g_193.f1 = safe_add_func_uint64_t_u_u(g_193.f1, 2))
        { 
            struct S0 l_1873 = {0x98114700L,6L,0xF3909FB7L,0xB511D1C3L,0xE617L,0x14CA25C5L};
            struct S0 * const *l_1877 = (void*)0;
            struct S0 * const **l_1876 = &l_1877;
            int16_t **l_1896 = &g_887;
            int32_t **l_1912 = &g_142;
            int32_t **l_1913 = &g_143;
            int32_t *l_1915 = &l_1817[3];
            int32_t **l_1914[4];
            int i;
            for (i = 0; i < 4; i++)
                l_1914[i] = &l_1915;
            for (g_161 = 0; (g_161 != (-14)); g_161 = safe_sub_func_int16_t_s_s(g_161, 7))
            { 
                uint16_t l_1848 = 0x56F4L;
                int32_t *l_1858 = &g_845;
                struct S0 l_1859 = {1UL,0L,0x127E220EL,0xD0EC8644L,5L,7UL};
                union U1 * const l_1867[3] = {&g_1231,&g_1231,&g_1231};
                union U1 **l_1868[4] = {&g_820,&g_820,&g_820,&g_820};
                uint64_t *l_1898 = (void*)0;
                uint64_t *l_1899 = &g_440;
                int16_t ***l_1902 = &l_1896;
                uint32_t *l_1903 = &l_1851;
                int i;
                for (g_1077 = 0; (g_1077 >= 42); g_1077++)
                { 
                    int32_t *l_1845 = &g_193.f2;
                    int32_t l_1846 = (-1L);
                    int32_t *l_1847[5][1] = {{&l_1846},{(void*)0},{&l_1846},{(void*)0},{&l_1846}};
                    uint64_t *l_1855 = &g_799[0];
                    int8_t *l_1860 = &g_844[1];
                    int i, j;
                    l_1848++;
                    p_15 = l_1851;
                    (*l_1845) |= ((g_162[4] , ((*l_1852) &= (l_1852 != (void*)0))) && ((((*l_1858) = (safe_unary_minus_func_int16_t_s((((*l_1860) = ((++(*l_1855)) , ((func_61(g_845, l_1858, ((*g_791) , func_35(l_1859))) , g_644) <= 0x3CL))) && g_1077)))) > l_1836) == (-1L)));
                    (*l_1858) &= ((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((l_1817[1] | (safe_add_func_uint32_t_u_u((65535UL ^ 0L), 2UL))), 12)) > 0UL), ((void*)0 != l_1852))) ^ p_16);
                    if (l_1836)
                        break;
                }
                l_1869 = l_1867[0];
                for (g_193.f5 = 29; (g_193.f5 <= 22); g_193.f5--)
                { 
                    struct S0 l_1874[2] = {{18446744073709551614UL,0L,0x09C13369L,-1L,0x4330L,18446744073709551609UL},{18446744073709551614UL,0L,0x09C13369L,-1L,0x4330L,18446744073709551609UL}};
                    int32_t *l_1875 = &l_1874[1].f3;
                    int32_t *l_1884[5] = {&l_1817[0],&l_1817[0],&l_1817[0],&l_1817[0],&l_1817[0]};
                    union U1 l_1885[1][4][4] = {{{{0x27L},{0L},{0x27L},{0x99L}},{{0x52L},{1L},{0x99L},{0x99L}},{{0L},{0L},{0L},{1L}},{{1L},{0x52L},{0L},{0x52L}}}};
                    int32_t **l_1886 = &g_143;
                    int i, j, k;
                    l_1874[1] = func_61(p_14.f0, &l_1817[0], func_35(l_1873));
                    if (p_14.f0)
                        break;
                    l_1874[0] = func_61(g_792, l_1875, (((*l_1875) = (((l_1876 != l_1878[0]) & (safe_sub_func_int8_t_s_s(p_15, (safe_div_func_uint16_t_u_u(((void*)0 == (*g_722)), l_1883))))) | p_14.f0)) , &p_15));
                    p_15 ^= ((*l_1875) = (*l_1858));
                    (*l_1886) = (l_1885[0][1][1] , &g_43);
                }
                l_1817[0] = (safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((0UL || ((*l_1858) = ((l_1873.f5 | l_1817[0]) > (g_1891 | (safe_lshift_func_int8_t_s_u(g_792, 3)))))), ((safe_lshift_func_uint16_t_u_u(((l_1896 == l_1897) || l_1817[2]), p_14.f0)) <= 0UL))), p_14.f0));
                if ((((((p_15 = (p_15 <= ((*l_1899)--))) , ((*l_1902) = (void*)0)) == (void*)0) < ((*l_1903) = p_16)) && (safe_rshift_func_int16_t_s_u(((!(l_1817[0] ^ ((safe_div_func_uint8_t_u_u((0x2D156D6BL | ((*l_1858) = 0x75872E6CL)), (-8L))) > p_15))) & l_1909), 6))))
                { 
                    l_1873 = l_1859;
                    if (p_16)
                        continue;
                    return (*l_1858);
                }
                else
                { 
                    if (l_1873.f5)
                        goto lbl_1910;
                }
            }
            l_1916 = ((*l_1913) = ((*l_1912) = func_35(l_1911)));
            if ((safe_lshift_func_int16_t_s_s((**g_886), ((l_1817[1] , ((*l_1869) , &l_1876)) == (void*)0))))
            { 
                struct S0 l_1919 = {18446744073709551607UL,0x79BF3ED682BAE0C9LL,1L,5L,7L,0xE50A5103L};
                l_1920 = l_1919;
                return l_1817[0];
            }
            else
            { 
                uint16_t l_1921 = 0xDD3FL;
                int32_t l_1937 = 0x7CEF5CEAL;
                int32_t l_1963 = 0x1541BA22L;
                const uint32_t l_1981 = 4294967289UL;
                struct S0 l_1986 = {0UL,-3L,-2L,0xF3E4A44FL,0x95F2L,0x14515721L};
                struct S0 l_2006 = {0UL,0xDABB3D8118BCFB0ALL,0x43E99746L,0x56834717L,0xC98BL,0xEBEB59ABL};
                ++l_1921;
                if ((l_1937 |= (g_49 = ((l_1921 || ((safe_unary_minus_func_uint32_t_u((safe_mul_func_int8_t_s_s(0L, (safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s((p_15 , ((0UL != (l_1935 != (*g_143))) == (~l_1817[0]))), l_1921)), 0)), 1L)), 3)))))) >= p_15)) , p_15))))
                { 
                    struct S0 l_1938 = {18446744073709551613UL,8L,0x89E478BEL,6L,0L,0UL};
                    int32_t *l_1939 = (void*)0;
                    uint8_t *l_1960 = &g_75[4][2][2];
                    l_1939 = func_35(l_1938);
                    (**g_293) = &l_1938;
                    l_1963 |= (p_15 = (0x899EC20BL <= ((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u(p_16, (safe_sub_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((p_15 <= (((p_14.f0 , ((safe_mod_func_uint32_t_u_u((((*l_1939) <= 0x95L) , (((l_1937 = (safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(((((*l_1960)--) ^ p_15) <= (**l_1912)), p_14.f0)), (*g_791))), 5))) , p_16) & 18446744073709551608UL)), p_16)) , 255UL)) , 0xC721FBAA2AA627E0LL) < l_1814)), g_141[6])), 0xACBBL)))), p_16)), 1)) <= p_14.f0), (*g_791))) >= (*g_143))));
                    (*l_1913) = ((safe_rshift_func_uint16_t_u_s(((safe_div_func_int16_t_s_s((safe_div_func_uint8_t_u_u(p_16, (*l_1939))), l_1963)) | ((+l_1817[0]) | (((safe_rshift_func_int8_t_s_s(p_15, 3)) , ((safe_rshift_func_uint16_t_u_u(((((((((safe_sub_func_uint8_t_u_u(6UL, (safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s((l_1981 > (*l_1916)), l_1817[0])), p_14.f0)))) , p_14.f0) , 4UL) ^ 18446744073709551606UL) , 0xA0L) <= g_193.f4) <= p_15) , (*l_1939)), l_1982)) , 1UL)) , (*l_1916)))), p_14.f0)) , &g_846[1]);
                }
                else
                { 
                    uint32_t l_1983 = 0UL;
                    int32_t l_2004 = 0xBA89818CL;
                    int32_t l_2005 = (-3L);
                    --l_1983;
                    (*l_1913) = func_35(l_1986);
                    l_2005 &= (safe_div_func_uint32_t_u_u((g_53 |= (safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((l_2004 = ((**l_1897) = ((&g_507 != l_1997) || (safe_mul_func_int8_t_s_s((*l_1916), ((**l_1912) & (l_1986.f4 , ((safe_rshift_func_uint16_t_u_s(((*g_791) &= (safe_div_func_uint8_t_u_u(l_1982, ((p_16 ^ p_16) | 0xD33C6709L)))), 8)) & (*g_142))))))))), 3)) , p_14.f0), p_15)), g_817)), (-9L)))), 0x752E5289L));
                }
                l_1920 = l_2006;
                l_1817[0] = (*l_1916);
                (*l_1912) = func_35(l_2006);
            }
            (*l_1915) = (((void*)0 != &l_1914[1]) | p_15);
            if (p_14.f0)
            { 
                uint32_t l_2007[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_2007[i] = 0xD9FAF70DL;
                l_2007[1]--;
                return p_15;
            }
            else
            { 
                return p_16;
            }
        }
        if (p_14.f0)
        { 
            const uint32_t l_2026 = 0x855B1238L;
            int32_t l_2029 = 0x5AD3D7C4L;
            int32_t l_2030 = 9L;
            int32_t l_2031 = (-8L);
            int32_t l_2033[4];
            int i;
            for (i = 0; i < 4; i++)
                l_2033[i] = 0x1EF46B49L;
            for (g_467 = (-11); (g_467 != 0); ++g_467)
            { 
                uint64_t l_2027[1][2];
                int32_t l_2032[6] = {0L,0L,(-1L),0L,0L,(-1L)};
                int32_t *l_2040 = &l_1817[3];
                int32_t *l_2041 = &g_350;
                int32_t *l_2042 = &l_1817[0];
                int32_t *l_2043[5] = {&l_2033[3],&l_2033[3],&l_2033[3],&l_2033[3],&l_2033[3]};
                int32_t **l_2049 = (void*)0;
                int32_t **l_2050 = (void*)0;
                int32_t **l_2051 = &l_2043[3];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_2027[i][j] = 18446744073709551612UL;
                }
                if (p_15)
                { 
                    int32_t *l_2028[6][7][6] = {{{&l_1920.f3,(void*)0,&l_1817[0],&l_1817[0],(void*)0,&l_1920.f3},{&l_1817[0],(void*)0,&l_1920.f3,&g_193.f2,(void*)0,(void*)0},{(void*)0,&l_1920.f2,&g_193.f3,&l_1920.f2,(void*)0,&g_846[0]},{(void*)0,&g_846[1],&l_1920.f2,&g_193.f2,&l_1817[2],&g_846[0]},{&l_1817[0],(void*)0,&l_1911.f3,&l_1817[0],&l_1817[0],&g_846[0]},{&l_1920.f3,&l_1817[2],&l_1920.f2,&g_846[0],&g_2,&g_846[0]},{&g_193.f3,(void*)0,&g_193.f3,(void*)0,&g_2,(void*)0}},{{&l_1920.f2,&l_1817[2],&l_1920.f3,&g_193.f3,&l_1817[0],&l_1920.f3},{&l_1911.f3,(void*)0,&l_1817[0],&g_193.f3,&l_1817[2],(void*)0},{&l_1920.f2,&g_846[1],(void*)0,(void*)0,(void*)0,&l_1817[0]},{&g_193.f3,&l_1920.f2,(void*)0,&g_846[0],(void*)0,(void*)0},{&l_1920.f3,(void*)0,&l_1817[0],&l_1817[0],(void*)0,&l_1920.f3},{&l_1817[0],(void*)0,&l_1920.f3,&g_193.f2,(void*)0,(void*)0},{(void*)0,&l_1920.f2,&g_193.f3,&l_1920.f2,(void*)0,&g_846[0]}},{{(void*)0,&g_846[1],&l_1920.f2,&g_193.f2,&l_1817[2],&g_846[0]},{&l_1817[0],(void*)0,&l_1911.f3,&l_1817[0],&l_1817[0],&g_846[0]},{&l_1920.f3,(void*)0,&g_846[0],(void*)0,&g_846[0],(void*)0},{&g_43,&g_193.f2,&g_43,&l_1854,&g_846[0],&l_1920.f2},{&g_846[0],(void*)0,&g_846[0],&g_43,&g_846[0],&g_846[0]},{&l_1817[0],(void*)0,&l_1911.f2,&g_43,(void*)0,&l_1854},{&g_846[0],&l_1911.f3,&l_1920.f2,&l_1854,&l_1920.f3,&l_1911.f2}},{{&g_43,(void*)0,&l_1920.f2,(void*)0,(void*)0,&l_1854},{&g_846[0],&l_1817[0],&l_1911.f2,&l_1911.f2,&l_1817[0],&g_846[0]},{&l_1911.f2,&l_1817[0],&g_846[0],&l_1817[0],(void*)0,&l_1920.f2},{&l_1920.f2,(void*)0,&g_43,&g_846[0],&l_1920.f3,(void*)0},{&l_1920.f2,&l_1911.f3,&g_846[0],&l_1817[0],(void*)0,&g_193.f3},{&l_1911.f2,(void*)0,&l_1817[0],&l_1911.f2,&g_846[0],&g_193.f3},{&g_846[0],(void*)0,&g_846[0],(void*)0,&g_846[0],(void*)0}},{{&g_43,&g_193.f2,&g_43,&l_1854,&g_846[0],&l_1920.f2},{&g_846[0],(void*)0,&g_846[0],&g_43,&g_846[0],&g_846[0]},{&l_1817[0],(void*)0,&l_1911.f2,&g_43,(void*)0,&l_1854},{&g_846[0],&l_1911.f3,&l_1920.f2,&l_1854,&l_1920.f3,&l_1911.f2},{&g_43,(void*)0,&l_1920.f2,(void*)0,(void*)0,&l_1854},{&g_846[0],&l_1817[0],&l_1911.f2,&l_1911.f2,&l_1817[0],&g_846[0]},{&l_1911.f2,&l_1817[0],&g_846[0],&l_1817[0],(void*)0,&l_1920.f2}},{{&l_1920.f2,(void*)0,&g_43,&g_846[0],&l_1920.f3,(void*)0},{&l_1920.f2,&l_1911.f3,&g_846[0],&l_1817[0],(void*)0,&g_193.f3},{&l_1911.f2,(void*)0,&l_1817[0],&l_1911.f2,&g_846[0],&g_193.f3},{&g_846[0],(void*)0,&g_846[0],(void*)0,&g_846[0],(void*)0},{&g_43,&g_193.f2,&g_43,&l_1854,&g_846[0],&l_1920.f2},{&g_846[0],(void*)0,&g_846[0],&g_43,&g_846[0],&g_846[0]},{&l_1817[0],(void*)0,&l_1911.f2,&g_43,(void*)0,&l_1854}}};
                    int i, j, k;
                    l_2029 &= (((safe_add_func_int8_t_s_s((((((safe_add_func_int64_t_s_s((((((((+((*l_1852) = p_15)) >= ((*l_1869) , ((safe_div_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((0x15L < (safe_div_func_int32_t_s_s(((*l_1916) , (0UL < ((((&g_143 == &g_143) > g_193.f0) < 1UL) ^ 0x32L))), p_15))), (*g_791))), 255UL)), l_2025)) >= (*l_1916)))) >= l_2026) >= l_1836) == (*l_1916)) ^ p_14.f0) | l_1817[3]), 0x2FD0D2168F83F8C4LL)) > 1UL) & p_15) , (*l_1916)) , l_2027[0][1]), 0xE2L)) , p_14.f0) , p_15);
                    if (p_15)
                        break;
                    l_2034++;
                    (*l_1916) ^= (-1L);
                }
                else
                { 
                    int32_t **l_2037 = &l_1916;
                    (*l_2037) = (void*)0;
                    (*l_2037) = &p_15;
                }
                l_2032[0] ^= (safe_div_func_int64_t_s_s(p_15, p_15));
                g_2046[0][1]++;
                (*l_2051) = &p_15;
            }
        }
        else
        { 
            int16_t l_2058 = 1L;
            if (p_16)
            { 
                uint32_t l_2052[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_2052[i] = 18446744073709551615UL;
                return l_2052[5];
            }
            else
            { 
                for (g_471 = 0; (g_471 > 60); ++g_471)
                { 
                    union U1 ****l_2055 = &g_1142;
                    (*l_2055) = (void*)0;
                    (*l_1916) = (safe_sub_func_int8_t_s_s((p_14.f0 >= 8L), l_2058));
                }
            }
        }
        (**g_293) = &l_1920;
    }
    else
    { 
        const int16_t l_2061 = (-4L);
        uint8_t **l_2063 = (void*)0;
        uint8_t *** const l_2062 = &l_2063;
        int8_t *l_2073 = &g_1436.f0;
        int8_t *l_2074 = &g_164.f0;
        uint32_t *l_2075[4];
        int32_t l_2076 = (-1L);
        struct S0 l_2077[4][1][5] = {{{{7UL,-7L,0xD9607D34L,0x8EBFC0E7L,-1L,0UL},{4UL,0x83B1CB0C2DD2BA53LL,-3L,0x76BF913BL,0xCCDFL,1UL},{18446744073709551615UL,2L,0x882BEFF5L,-9L,3L,18446744073709551614UL},{18446744073709551615UL,2L,0x882BEFF5L,-9L,3L,18446744073709551614UL},{4UL,0x83B1CB0C2DD2BA53LL,-3L,0x76BF913BL,0xCCDFL,1UL}}},{{{0xD74CC7E0L,-3L,1L,6L,0x9248L,5UL},{18446744073709551615UL,0xCF07C9D1405B1427LL,1L,0x4A97780DL,-9L,0x7A906E9BL},{18446744073709551615UL,0x73BA5ACE842677BELL,0x512B37D3L,0xFF4A897AL,1L,0x9C6DE4AAL},{18446744073709551615UL,0x73BA5ACE842677BELL,0x512B37D3L,0xFF4A897AL,1L,0x9C6DE4AAL},{18446744073709551615UL,0xCF07C9D1405B1427LL,1L,0x4A97780DL,-9L,0x7A906E9BL}}},{{{7UL,-7L,0xD9607D34L,0x8EBFC0E7L,-1L,0UL},{4UL,0x83B1CB0C2DD2BA53LL,-3L,0x76BF913BL,0xCCDFL,1UL},{18446744073709551615UL,2L,0x882BEFF5L,-9L,3L,18446744073709551614UL},{18446744073709551615UL,2L,0x882BEFF5L,-9L,3L,18446744073709551614UL},{4UL,0x83B1CB0C2DD2BA53LL,-3L,0x76BF913BL,0xCCDFL,1UL}}},{{{0xD74CC7E0L,-3L,1L,6L,0x9248L,5UL},{18446744073709551615UL,0xCF07C9D1405B1427LL,1L,0x4A97780DL,-9L,0x7A906E9BL},{18446744073709551615UL,0x73BA5ACE842677BELL,0x512B37D3L,0xFF4A897AL,1L,0x9C6DE4AAL},{18446744073709551615UL,0x73BA5ACE842677BELL,0x512B37D3L,0xFF4A897AL,1L,0x9C6DE4AAL},{18446744073709551615UL,0xCF07C9D1405B1427LL,1L,0x4A97780DL,-9L,0x7A906E9BL}}}};
        int32_t **l_2078 = &g_143;
        uint32_t *l_2079[5];
        int16_t ***l_2080 = (void*)0;
        int16_t * const ***l_2083[3][5][2] = {{{(void*)0,(void*)0},{&l_2081,(void*)0},{&l_2081,&l_2081},{&l_2081,(void*)0},{&l_2081,(void*)0}},{{(void*)0,(void*)0},{&l_2081,(void*)0},{&l_2081,(void*)0},{(void*)0,&l_2081},{&l_2081,&l_2081}},{{&l_2081,&l_2081},{&l_2081,&l_2081},{(void*)0,(void*)0},{(void*)0,&l_2081},{&l_2081,&l_2081}}};
        uint64_t *****l_2112 = &g_2110[0][1];
        int16_t l_2135 = 0x2F90L;
        int32_t l_2137[3];
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_2075[i] = &g_1540[0][2][1];
        for (i = 0; i < 5; i++)
            l_2079[i] = &l_1836;
        for (i = 0; i < 3; i++)
            l_2137[i] = (-7L);
        (*l_2078) = func_35(l_2077[0][0][3]);
        if ((((((((g_53 ^= 0x20EF1023L) || (0x6C41L == 0x522CL)) ^ ((l_2080 != (l_2081 = l_2081)) == (p_15 || ((((~(safe_rshift_func_uint16_t_u_u(((g_1232[0][1][0] = (safe_div_func_int8_t_s_s(((((((*l_1897) = (p_16 , (*l_1897))) == &l_1814) != p_15) <= (**l_2078)) && g_52), 1UL))) != l_1836), (**l_2078)))) >= l_1982) < p_14.f0) < 1UL)))) , (void*)0) != g_2089) , g_1232[1][0][0]) != (**l_2078)))
        { 
            int32_t *l_2116 = &l_2115[3][3];
            int8_t l_2117 = 5L;
            struct S0 l_2126[3] = {{1UL,0xB07953B3A56441A0LL,0L,0xD7D9A240L,0x9772L,0x90D3DA4AL},{1UL,0xB07953B3A56441A0LL,0L,0xD7D9A240L,0x9772L,0x90D3DA4AL},{1UL,0xB07953B3A56441A0LL,0L,0xD7D9A240L,0x9772L,0x90D3DA4AL}};
            int32_t *l_2133 = &g_43;
            int32_t *l_2134[2][3][6] = {{{&g_193.f3,&l_2077[0][0][3].f3,(void*)0,&l_2126[1].f3,(void*)0,&l_2077[0][0][3].f3},{(void*)0,&g_193.f3,&l_2077[0][0][3].f3,&l_2115[3][3],&l_2115[3][3],&l_2077[0][0][3].f3},{(void*)0,(void*)0,&l_2115[3][3],&l_2126[1].f3,(void*)0,&l_2126[1].f3}},{{&g_193.f3,(void*)0,&g_193.f3,&l_2077[0][0][3].f3,&l_2115[3][3],&l_2115[3][3]},{&l_2077[0][0][3].f3,&g_193.f3,&g_193.f3,&l_2077[0][0][3].f3,(void*)0,&l_2126[1].f3},{&l_2126[1].f3,&l_2077[0][0][3].f3,&l_2115[3][3],&l_2077[0][0][3].f3,&l_2126[1].f3,&l_2077[0][0][3].f3}}};
            int32_t l_2136 = 1L;
            uint8_t l_2138 = 1UL;
            uint64_t l_2157 = 1UL;
            int i, j, k;
            for (g_1077 = 0; (g_1077 == 29); g_1077++)
            { 
                int32_t *l_2096 = &g_1891;
                int32_t l_2114 = 0L;
                struct S0 l_2127 = {18446744073709551607UL,3L,1L,0x38564313L,0x47F9L,0x18C39FA0L};
                for (g_471 = 27; (g_471 != 13); g_471 = safe_sub_func_int64_t_s_s(g_471, 2))
                { 
                    const uint32_t l_2103 = 0UL;
                    int32_t *l_2106 = &g_193.f3;
                    int8_t l_2113[4];
                    struct S0 l_2118 = {0xBE1384ABL,7L,0xB82889DBL,6L,0xC29FL,1UL};
                    int i;
                    for (i = 0; i < 4; i++)
                        l_2113[i] = 0xF1L;
                    l_2115[3][3] = ((safe_div_func_uint32_t_u_u(((l_2075[1] == l_2096) < (safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((l_2113[1] = ((((*g_791) |= (p_14.f0 == p_15)) , (safe_add_func_int32_t_s_s((l_2103 == (safe_sub_func_int32_t_s_s(((*l_2106) &= l_1817[0]), ((safe_rshift_func_uint8_t_u_s(((l_2112 = (g_2109 = g_2109)) != (void*)0), 1)) , (-9L))))), (**l_2078)))) != 2L)), 1UL)), l_2114))), (*g_514))) ^ (*g_887));
                    l_2045 &= (*l_2106);
                    p_15 = ((l_2116 == (l_2117 , func_35(l_2118))) && (((*l_2116) = (-1L)) == ((*l_2106) = (safe_lshift_func_uint8_t_u_s(0xA8L, 4)))));
                    (*l_2106) = ((safe_mod_func_int8_t_s_s((l_2114 | (*g_143)), 0x8FL)) <= ((*l_2116) = ((**l_2078) != ((((~((((safe_sub_func_int16_t_s_s(((l_2127 = l_2126[1]) , 0xDE00L), ((***l_2081) = (safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s(p_14.f0, 6)), (**l_2078)))))) , (*l_2116)) >= l_1836) <= 0x3CFCL)) <= l_2132) != l_2114) , (**l_2078)))));
                    return (**l_2078);
                }
            }
            ++l_2138;
            l_2157 &= ((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((((safe_rshift_func_uint8_t_u_u(g_164.f0, 7)) != (safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((l_2126[1] , ((**l_2078) ^ ((safe_mod_func_uint8_t_u_u((((((*l_2133) = ((l_2115[3][3] = (((void*)0 != l_2078) != p_14.f0)) && 0x9FL)) != 8L) != p_15) >= (*g_514)), p_15)) || p_15))), 0x4E41L)), g_762.f0)) <= 2L), p_16)), 0xAFL))) | (**l_2078)) > g_193.f4), p_15)), 0xBA45L)) , 7L);
            (*l_2116) &= (safe_unary_minus_func_uint8_t_u(p_16));
        }
        else
        { 
            uint16_t *l_2161 = &g_261;
            int32_t l_2162[6][7][3] = {{{(-8L),0L,0xD820BB92L},{3L,(-1L),3L},{3L,(-8L),(-1L)},{(-8L),3L,3L},{(-1L),3L,0xD820BB92L},{0L,(-8L),0x72AF0FD4L},{(-1L),(-1L),0x72AF0FD4L}},{{(-8L),0L,0xD820BB92L},{3L,(-1L),3L},{3L,(-8L),(-1L)},{(-8L),3L,3L},{(-1L),3L,0xD820BB92L},{0L,(-8L),0x72AF0FD4L},{(-1L),(-1L),0x72AF0FD4L}},{{(-8L),0L,0xD820BB92L},{3L,(-1L),3L},{3L,(-8L),(-1L)},{(-8L),3L,3L},{(-1L),3L,0xD820BB92L},{0L,(-8L),0x72AF0FD4L},{(-1L),(-1L),0x72AF0FD4L}},{{(-8L),0L,0xD820BB92L},{3L,(-1L),3L},{3L,(-8L),(-1L)},{(-8L),3L,3L},{(-1L),3L,0xD820BB92L},{0L,(-8L),0x72AF0FD4L},{(-1L),(-1L),0x72AF0FD4L}},{{(-8L),0L,0xD820BB92L},{3L,(-1L),3L},{3L,(-8L),(-1L)},{(-8L),3L,3L},{(-1L),3L,0xD820BB92L},{0L,(-8L),0x72AF0FD4L},{(-1L),(-1L),0x72AF0FD4L}},{{(-8L),0L,0xD820BB92L},{3L,(-1L),3L},{3L,(-8L),(-1L)},{(-8L),3L,3L},{(-1L),3L,0xD820BB92L},{0L,(-8L),0x72AF0FD4L},{(-1L),(-1L),0x72AF0FD4L}}};
            int32_t *l_2165 = (void*)0;
            int32_t *l_2166 = &g_49;
            int i, j, k;
            g_845 = (safe_mul_func_int16_t_s_s((l_2162[2][3][2] = ((((*l_2161) = ((*g_791) = p_16)) && 1L) <= 0x05L)), ((void*)0 == l_2163)));
            (*l_2166) ^= (&l_2083[0][2][1] != (p_16 , &g_723));
            g_2167 = g_2167;
            (**g_293) = &l_2077[2][0][4];
        }
        l_2077[0][0][3] = l_2077[3][0][3];
    }
    for (g_49 = 5; (g_49 >= 0); g_49 -= 1)
    { 
        int32_t *****l_2169 = &g_2168;
        struct S0 l_2170 = {0x45B1DEA3L,1L,0x9A2E42ECL,0x7A661520L,-9L,4UL};
        int32_t *l_2171 = &g_846[0];
        int i;
        l_2169 = l_2169;
        if (g_162[g_49])
        { 
            int32_t *l_2172 = (void*)0;
            l_2171 = func_35(l_2170);
            for (p_16 = 1; (p_16 <= 5); p_16 += 1)
            { 
                int i;
                if (g_162[p_16])
                    break;
                l_2172 = &p_15;
            }
        }
        else
        { 
            int i;
            return g_162[g_49];
        }
    }
    return l_1814;
}



static union U1  func_17(int64_t  p_18, uint32_t  p_19, uint64_t  p_20, int32_t  p_21, int64_t  p_22)
{ 
    int32_t l_1081 = 0xD85999D4L;
    int32_t l_1085 = 0x9BD12A6FL;
    int32_t l_1086 = 0xBA592F30L;
    int32_t l_1087 = 0xAAA9A51FL;
    int32_t l_1088 = 0x69C97CECL;
    int32_t l_1089 = 0L;
    int32_t l_1090 = 0L;
    int32_t l_1091 = (-2L);
    int32_t l_1092 = 0x49DBAC3CL;
    int32_t l_1093[3][7][2] = {{{0xAD0C97CDL,0x45A7C46DL},{0x5BA00EBEL,0xAD0C97CDL},{(-1L),(-1L)},{(-1L),0xAD0C97CDL},{0x5BA00EBEL,0x45A7C46DL},{0xAD0C97CDL,(-1L)},{0x7C811DC1L,0x5BA00EBEL}},{{0xAD0C97CDL,0xAD0C97CDL},{0xAD0C97CDL,0x5BA00EBEL},{0x7C811DC1L,(-1L)},{0x5BA00EBEL,(-1L)},{0x7C811DC1L,0x5BA00EBEL},{0xAD0C97CDL,0xAD0C97CDL},{0xAD0C97CDL,0x5BA00EBEL}},{{0x7C811DC1L,(-1L)},{0x5BA00EBEL,(-1L)},{0x7C811DC1L,0x5BA00EBEL},{0xAD0C97CDL,0xAD0C97CDL},{0xAD0C97CDL,0x5BA00EBEL},{0x7C811DC1L,(-1L)},{0x5BA00EBEL,(-1L)}}};
    uint32_t l_1094 = 0xF11A5AA4L;
    int32_t l_1124[4];
    struct S0 l_1126[3] = {{0xD47AD5D3L,0L,0L,0x5482F6C6L,1L,0UL},{0xD47AD5D3L,0L,0L,0x5482F6C6L,1L,0UL},{0xD47AD5D3L,0L,0L,0x5482F6C6L,1L,0UL}};
    union U1 *l_1152 = &g_164;
    union U1 *****l_1213[3][4][7] = {{{&g_507,&g_507,&g_507,&g_507,&g_507,&g_507,&g_507},{&g_507,&g_507,&g_507,&g_507,&g_507,(void*)0,&g_507},{&g_507,&g_507,&g_507,&g_507,&g_507,&g_507,&g_507},{&g_507,&g_507,&g_507,&g_507,(void*)0,(void*)0,&g_507}},{{&g_507,&g_507,&g_507,&g_507,&g_507,&g_507,&g_507},{&g_507,&g_507,&g_507,&g_507,&g_507,&g_507,&g_507},{&g_507,&g_507,&g_507,&g_507,&g_507,&g_507,&g_507},{&g_507,&g_507,&g_507,&g_507,&g_507,(void*)0,&g_507}},{{&g_507,&g_507,&g_507,&g_507,&g_507,&g_507,&g_507},{&g_507,&g_507,&g_507,&g_507,(void*)0,(void*)0,&g_507},{&g_507,&g_507,&g_507,&g_507,&g_507,&g_507,&g_507},{&g_507,&g_507,&g_507,&g_507,&g_507,&g_507,&g_507}}};
    struct S0 ****l_1288 = &g_293;
    int32_t l_1299 = 0x1A41D582L;
    uint16_t l_1322[7];
    const int32_t *l_1350 = &g_350;
    const int32_t **l_1349 = &l_1350;
    int16_t ** const *l_1396[7] = {&g_889[2],(void*)0,(void*)0,&g_889[2],(void*)0,(void*)0,&g_889[2]};
    int16_t ** const ** const l_1395 = &l_1396[2];
    int16_t ** const ** const *l_1394 = &l_1395;
    union U1 *l_1435 = &g_1436;
    struct S0 l_1472[7][5] = {{{18446744073709551615UL,0x3574464470ABDDC5LL,0xEED7D4C1L,0L,1L,0x4CA9E4B5L},{0xE53BB8C7L,-1L,6L,-6L,0xD159L,18446744073709551615UL},{0xB7BEF83EL,0L,0x90E9E654L,0x01A8C431L,7L,0x4CEEC681L},{0xE53BB8C7L,-1L,6L,-6L,0xD159L,18446744073709551615UL},{18446744073709551615UL,0x3574464470ABDDC5LL,0xEED7D4C1L,0L,1L,0x4CA9E4B5L}},{{0x30C1B3FBL,6L,0xF4ADCC7EL,0xE94C72DEL,-5L,0x06742F0BL},{18446744073709551615UL,0x616B623C43ACEC0FLL,0x8CF70EC2L,-9L,-1L,1UL},{2UL,0x30CDBA202F629A8ELL,0xD65515A9L,0L,-1L,0x5CF8E013L},{18446744073709551615UL,0x616B623C43ACEC0FLL,0x8CF70EC2L,-9L,-1L,1UL},{0x30C1B3FBL,6L,0xF4ADCC7EL,0xE94C72DEL,-5L,0x06742F0BL}},{{18446744073709551615UL,0x3574464470ABDDC5LL,0xEED7D4C1L,0L,1L,0x4CA9E4B5L},{0xE53BB8C7L,-1L,6L,-6L,0xD159L,18446744073709551615UL},{0xB7BEF83EL,0L,0x90E9E654L,0x01A8C431L,7L,0x4CEEC681L},{0xE53BB8C7L,-1L,6L,-6L,0xD159L,18446744073709551615UL},{18446744073709551615UL,0x3574464470ABDDC5LL,0xEED7D4C1L,0L,1L,0x4CA9E4B5L}},{{0x30C1B3FBL,6L,0xF4ADCC7EL,0xE94C72DEL,-5L,0x06742F0BL},{18446744073709551615UL,0x616B623C43ACEC0FLL,0x8CF70EC2L,-9L,-1L,1UL},{2UL,0x30CDBA202F629A8ELL,0xD65515A9L,0L,-1L,0x5CF8E013L},{18446744073709551615UL,0x616B623C43ACEC0FLL,0x8CF70EC2L,-9L,-1L,1UL},{0x30C1B3FBL,6L,0xF4ADCC7EL,0xE94C72DEL,-5L,0x06742F0BL}},{{18446744073709551615UL,0x3574464470ABDDC5LL,0xEED7D4C1L,0L,1L,0x4CA9E4B5L},{0xE53BB8C7L,-1L,6L,-6L,0xD159L,18446744073709551615UL},{0xB7BEF83EL,0L,0x90E9E654L,0x01A8C431L,7L,0x4CEEC681L},{0xE53BB8C7L,-1L,6L,-6L,0xD159L,18446744073709551615UL},{18446744073709551615UL,0x3574464470ABDDC5LL,0xEED7D4C1L,0L,1L,0x4CA9E4B5L}},{{0x30C1B3FBL,6L,0xF4ADCC7EL,0xE94C72DEL,-5L,0x06742F0BL},{18446744073709551615UL,0x616B623C43ACEC0FLL,0x8CF70EC2L,-9L,-1L,1UL},{2UL,0x30CDBA202F629A8ELL,0xD65515A9L,0L,-1L,0x5CF8E013L},{18446744073709551615UL,0x616B623C43ACEC0FLL,0x8CF70EC2L,-9L,-1L,1UL},{0x30C1B3FBL,6L,0xF4ADCC7EL,0xE94C72DEL,-5L,0x06742F0BL}},{{18446744073709551615UL,0x3574464470ABDDC5LL,0xEED7D4C1L,0L,1L,0x4CA9E4B5L},{0xE53BB8C7L,-1L,6L,-6L,0xD159L,18446744073709551615UL},{0xB7BEF83EL,0L,0x90E9E654L,0x01A8C431L,7L,0x4CEEC681L},{0xE53BB8C7L,-1L,6L,-6L,0xD159L,18446744073709551615UL},{18446744073709551615UL,0x3574464470ABDDC5LL,0xEED7D4C1L,0L,1L,0x4CA9E4B5L}}};
    union U1 * const l_1604 = &g_1436;
    uint64_t l_1656 = 0xA247DF5B11075BD5LL;
    int16_t ***l_1659[5][7][3] = {{{&g_889[1],&g_886,&g_889[1]},{&g_889[2],&g_889[1],&g_889[1]},{&g_889[1],(void*)0,&g_889[1]},{&g_889[1],&g_889[2],&g_886},{&g_889[1],&g_889[1],&g_889[2]},{&g_889[1],&g_889[1],&g_886},{&g_889[1],&g_889[3],&g_889[1]}},{{&g_889[2],&g_889[1],&g_889[2]},{&g_889[1],&g_889[1],&g_889[0]},{&g_889[1],&g_889[2],&g_889[2]},{&g_889[0],&g_889[3],&g_889[2]},{&g_886,&g_889[2],&g_889[1]},{&g_889[1],&g_886,&g_889[0]},{&g_889[2],&g_886,&g_886}},{{&g_889[1],&g_886,&g_889[1]},{&g_889[1],&g_889[2],&g_889[1]},{&g_889[1],&g_889[3],&g_889[1]},{&g_889[1],&g_889[1],&g_886},{&g_889[1],(void*)0,&g_889[0]},{&g_889[1],&g_889[1],&g_889[1]},{&g_889[1],&g_889[1],&g_889[2]}},{{&g_889[1],&g_889[1],&g_889[1]},{&g_889[1],(void*)0,&g_889[1]},{&g_889[2],&g_889[1],&g_889[1]},{&g_889[1],&g_889[3],&g_889[2]},{&g_886,&g_889[2],&g_889[1]},{&g_889[1],&g_886,&g_889[0]},{&g_889[2],&g_886,&g_886}},{{&g_889[1],&g_886,&g_889[1]},{&g_889[1],&g_889[2],&g_889[1]},{&g_889[1],&g_889[3],&g_889[1]},{&g_889[1],&g_889[1],&g_886},{&g_889[1],(void*)0,&g_889[0]},{&g_889[1],&g_889[1],&g_889[1]},{&g_889[1],&g_889[1],&g_889[2]}}};
    uint64_t l_1692[7][5] = {{7UL,0x8B5BE0471F008AEDLL,0x8B5BE0471F008AEDLL,7UL,0x8B5BE0471F008AEDLL},{7UL,7UL,0xDA846DC2283CBEBFLL,7UL,7UL},{0x8B5BE0471F008AEDLL,7UL,0x8B5BE0471F008AEDLL,0x8B5BE0471F008AEDLL,7UL},{7UL,0x8B5BE0471F008AEDLL,0x8B5BE0471F008AEDLL,7UL,0x8B5BE0471F008AEDLL},{7UL,7UL,0xDA846DC2283CBEBFLL,7UL,7UL},{0x8B5BE0471F008AEDLL,7UL,0x8B5BE0471F008AEDLL,0x8B5BE0471F008AEDLL,7UL},{7UL,0x8B5BE0471F008AEDLL,0x8B5BE0471F008AEDLL,7UL,0x8B5BE0471F008AEDLL}};
    int8_t l_1741 = 9L;
    int64_t l_1791 = 1L;
    int32_t *l_1798 = &l_1126[0].f2;
    int32_t *l_1799 = (void*)0;
    int32_t *l_1800 = &l_1472[5][2].f2;
    int32_t *l_1801 = &l_1126[0].f2;
    int32_t *l_1802 = &l_1090;
    int32_t *l_1803[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t l_1804 = 0UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1124[i] = 0x7D905045L;
    for (i = 0; i < 7; i++)
        l_1322[i] = 6UL;
    if (l_1081)
    { 
        int32_t *l_1082 = &g_845;
        int32_t *l_1083 = (void*)0;
        int32_t *l_1084[1][6];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
                l_1084[i][j] = (void*)0;
        }
        --l_1094;
        for (g_193.f5 = 0; (g_193.f5 >= 33); g_193.f5 = safe_add_func_int64_t_s_s(g_193.f5, 8))
        { 
            int16_t l_1125 = (-1L);
            for (p_21 = 0; (p_21 != (-13)); p_21--)
            { 
                int8_t l_1106 = 0x7CL;
                uint64_t ***l_1120 = (void*)0;
                uint64_t ****l_1121 = &l_1120;
                uint64_t ***l_1123 = &g_245[1][2][5];
                uint64_t ****l_1122 = &l_1123;
                l_1125 |= ((safe_mul_func_int16_t_s_s((((((!(((safe_lshift_func_uint16_t_u_s((((l_1106 & ((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((+g_845), (+((safe_unary_minus_func_int32_t_s(p_20)) , (safe_div_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u((g_644 < (((*g_791) ^ ((((*l_1122) = ((*l_1121) = l_1120)) != (void*)0) > p_20)) , p_18)), 6L)), 18446744073709551615UL)))))) >= l_1124[1]), (*g_791))) | 0x42L), 11)) || l_1106)) == l_1088) < 9UL), p_21)) && g_193.f4) , 0xC0972C11212B879ALL)) , l_1093[0][6][0]) & 0x6D5A6B30L) < 1L) > g_49), p_21)) == p_22);
            }
        }
    }
    else
    { 
        struct S0 l_1127 = {0x8934D1D8L,4L,0x0ECC40A2L,0x5B4ECE55L,0x72F0L,18446744073709551615UL};
        int32_t *l_1136 = &l_1093[0][6][0];
        union U1 l_1168 = {0x7AL};
        union U1 **l_1190 = &g_820;
        union U1 *l_1230 = &g_1231;
        int16_t ****l_1260 = &g_724;
        int64_t l_1282 = (-4L);
        int32_t l_1335[1];
        int i;
        for (i = 0; i < 1; i++)
            l_1335[i] = 0L;
        l_1127 = l_1126[0];
        if (((*l_1136) = (+(p_22 , (l_1126[0] , (((~p_18) && 0x53523996L) ^ (((((safe_div_func_uint16_t_u_u(0xD63DL, 0x6DC9L)) > (safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(0x9CL, 2)), l_1127.f3))) > p_21) <= p_18) || 18446744073709551608UL)))))))
        { 
            union U1 *** const l_1139 = (void*)0;
            union U1 **l_1141 = &g_820;
            union U1 ***l_1140 = &l_1141;
            int32_t l_1155 = 0xB3FCC56DL;
            int64_t *l_1156 = &g_52;
            int8_t l_1195[2];
            uint16_t *l_1210[3][5][1] = {{{&g_792},{&g_141[2]},{&g_792},{(void*)0},{&g_141[6]}},{{&g_141[6]},{(void*)0},{&g_792},{&g_141[2]},{&g_792}},{{(void*)0},{&g_141[6]},{&g_141[6]},{(void*)0},{&g_792}}};
            struct S0 l_1247 = {0UL,0x144776EFD04474CDLL,0xA6044505L,0x9FE65541L,-10L,18446744073709551610UL};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1195[i] = 0xBBL;
            (*l_1136) = (safe_add_func_int8_t_s_s(((l_1139 != (g_1142 = l_1140)) && (safe_mul_func_int16_t_s_s((((*l_1156) = ((safe_unary_minus_func_uint32_t_u(((((((safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint16_t_u_s(7UL, 13)))) && (--(*g_791))) >= ((p_19 , l_1152) == ((safe_rshift_func_int16_t_s_u(0L, (p_21 & l_1155))) , l_1152))) ^ l_1090) || p_22) , 0x2992FEA7L))) , (*l_1136))) != l_1088), (**g_886)))), 7UL));
            if (((safe_mod_func_uint16_t_u_u(((*g_791) &= p_20), (safe_lshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s((!(safe_add_func_uint16_t_u_u(p_19, l_1124[1]))), p_21)) & 0xAE155518B4806A27LL), (g_162[0] = (*l_1136)))) , l_1155), 2)))) & p_21))
            { 
                return l_1168;
            }
            else
            { 
                int64_t l_1185 = 0xF9F0F551F301FCD2LL;
                uint64_t *l_1193 = &g_471;
                uint8_t *l_1194 = &g_75[4][3][3];
                union U1 *l_1229 = &g_762;
                int32_t l_1238 = 0x0BB2924FL;
                uint32_t *l_1248 = &g_1232[0][2][0];
                for (g_644 = 0; (g_644 <= 11); ++g_644)
                { 
                    int8_t l_1179[7][4] = {{6L,0x14L,0x14L,6L},{0x14L,6L,0x14L,0x14L},{6L,6L,1L,6L},{6L,0x14L,0x14L,6L},{0x14L,6L,0x14L,0x14L},{6L,6L,1L,6L},{6L,0x14L,0x14L,6L}};
                    int32_t **l_1186 = &g_142;
                    int i, j;
                    (*l_1136) = ((--p_20) > (((((safe_mul_func_int16_t_s_s(l_1126[0].f0, (safe_rshift_func_uint16_t_u_s(((safe_add_func_int64_t_s_s((&g_635[0][0] == ((l_1127 , 0xA5B9844DL) , &g_635[0][0])), l_1155)) == (*l_1136)), (*g_887))))) , p_18) >= g_164.f0) > (*l_1136)) & l_1155));
                }
                if ((safe_rshift_func_int16_t_s_s((**g_886), ((!(l_1126[0].f3 <= ((*l_1194) = (0xA9148E8CL != (((void*)0 == l_1190) || (p_18 , (safe_add_func_uint64_t_u_u(((*l_1193) = (l_1155 = (p_22 , p_19))), 0x1DD5631FF9AEE9D7LL)))))))) , p_20))))
                { 
                    uint16_t *l_1209[3][4] = {{&g_261,&g_261,&g_261,&g_261},{&g_261,&g_261,&g_261,&g_261},{&g_261,&g_261,&g_261,&g_261}};
                    int32_t l_1211 = 0x8FBEA378L;
                    struct S0 *l_1212 = &g_193;
                    int i, j;
                    (*l_1136) = (l_1195[1] > (safe_mod_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s((0xE5L == 0x61L), (l_1211 = (((safe_mod_func_uint64_t_u_u((g_380 ^ ((safe_lshift_func_int16_t_s_u((l_1126[0].f4 || (!((safe_add_func_uint8_t_u_u((p_20 || (((safe_mul_func_uint16_t_u_u((l_1209[0][2] != l_1210[2][2][0]), 0xEDF8L)) >= (*l_1136)) , 0xDAL)), g_193.f5)) >= g_811))), 12)) , l_1195[1])), g_49)) == 0xF3L) & 3L)))) , l_1126[0].f0) > 0UL), (*g_791))));
                    (*l_1212) = l_1127;
                    l_1213[1][2][2] = &g_507;
                    (*l_1136) |= 1L;
                }
                else
                { 
                    const union U1 *l_1227[3][1][2] = {{{&g_1228,&g_1228}},{{&g_1228,&g_1228}},{{&g_1228,&g_1228}}};
                    const union U1 **l_1226 = &l_1227[1][0][0];
                    int32_t l_1235 = 1L;
                    uint32_t l_1237 = 0x4C87EA5DL;
                    int i, j, k;
                    (*l_1136) = l_1091;
                    (*l_1136) = (safe_rshift_func_int16_t_s_u(((safe_div_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(((((safe_div_func_uint8_t_u_u(0x71L, g_811)) , p_18) == (safe_mod_func_uint8_t_u_u(((((*l_1226) = (*l_1141)) == (l_1230 = l_1229)) ^ (p_22 >= 0x7AL)), 0xC8L))) <= (*g_514)), 11)), 0x80526D7DL)), l_1185)) || g_1232[0][1][1]), 14));
                    l_1238 |= ((safe_add_func_uint64_t_u_u(((-1L) == g_792), ((*l_1193) = (0x75L && (((l_1235 , (((~g_467) & ((*g_887) = (((((*l_1136) > (((*g_163) , l_1237) , (*g_791))) && 0UL) , p_22) , p_18))) < p_19)) != p_21) != p_20))))) , l_1185);
                    return (*g_820);
                }
                p_21 = (safe_mod_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((*l_1248) = (safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((*l_1136) , ((l_1127 = (l_1126[1] = l_1126[1])) , (g_350 | p_21))), p_20)), 1L))), 0xBE6E5D71L)), (*l_1136)));
            }
        }
        else
        { 
            uint32_t *l_1251 = &g_162[4];
            int8_t l_1256 = 0x09L;
            (*l_1136) = ((safe_lshift_func_uint8_t_u_s(0x28L, 4)) >= ((*l_1251)--));
            for (g_85 = 0; (g_85 <= 0); g_85 += 1)
            { 
                return (*l_1230);
            }
            (*l_1136) &= 0xC20C2E0FL;
            for (g_193.f3 = (-15); (g_193.f3 < 22); g_193.f3 = safe_add_func_uint16_t_u_u(g_193.f3, 9))
            { 
                for (g_1077 = 0; (g_1077 <= 0); g_1077 += 1)
                { 
                    int i;
                    (*l_1136) = g_799[g_1077];
                    if (l_1256)
                        break;
                    (*l_1136) |= ((safe_unary_minus_func_int32_t_s((((safe_add_func_uint8_t_u_u(p_18, g_799[g_1077])) , ((*g_722) != l_1260)) == (g_799[g_1077] & (safe_mod_func_uint8_t_u_u((p_20 < (((**g_886) = (safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(l_1126[0].f2, p_21)), p_18))) || g_799[g_1077])), 255UL)))))) != g_2);
                }
            }
            for (l_1091 = 0; (l_1091 >= 28); l_1091++)
            { 
                int32_t **l_1269 = &g_142;
                (*l_1269) = &p_21;
            }
        }
lbl_1352:
        for (l_1127.f4 = 0; (l_1127.f4 <= (-22)); l_1127.f4--)
        { 
            uint32_t *l_1274 = (void*)0;
            uint32_t *l_1275 = &g_427[0];
            struct S0 l_1276 = {18446744073709551615UL,0xC53108E1899B1694LL,0x0868ED72L,0xAA562FE9L,0x5259L,1UL};
            int64_t *l_1277[6] = {&l_1127.f1,&l_1127.f1,&l_1127.f1,&l_1127.f1,&l_1127.f1,&l_1127.f1};
            uint8_t *l_1283 = &g_635[0][0];
            int32_t *l_1284 = &l_1127.f2;
            int i;
        }
        for (g_1071 = 3; (g_1071 >= 0); g_1071 -= 1)
        { 
            int32_t l_1321 = 0L;
            int32_t l_1333[4][2] = {{0xD6EB0CDAL,0x3EE22227L},{0x3EE22227L,0xD6EB0CDAL},{0x3EE22227L,0x3EE22227L},{0xD6EB0CDAL,0x3EE22227L}};
            int8_t l_1334[7][5][3] = {{{0xC5L,(-1L),(-1L)},{0L,0xB0L,0L},{0xC5L,0xD9L,(-1L)},{0xC5L,0xC5L,0xD9L},{0L,0xD9L,0xD9L}},{{0xD9L,0xB0L,(-1L)},{0L,0xB0L,0L},{0xC5L,0xD9L,(-1L)},{0xC5L,0xC5L,0xD9L},{0L,0xD9L,0xD9L}},{{0xD9L,0xB0L,(-1L)},{0L,0xB0L,0L},{0xC5L,0xD9L,(-1L)},{0xC5L,0xC5L,0xD9L},{0L,0xD9L,0xD9L}},{{0xD9L,0xB0L,(-1L)},{0L,0xB0L,0L},{0xC5L,0xD9L,(-1L)},{0xC5L,0xC5L,0xD9L},{0L,0xD9L,0xD9L}},{{0xD9L,0xB0L,(-1L)},{0L,0xB0L,0L},{0xC5L,0xD9L,(-1L)},{0xC5L,0xC5L,0xD9L},{0L,0xD9L,0xD9L}},{{0xD9L,0xB0L,(-1L)},{0L,0xB0L,0L},{0xC5L,0xD9L,(-1L)},{0xC5L,0xC5L,0xD9L},{0L,0xD9L,0xD9L}},{{0xD9L,0xB0L,(-1L)},{0L,0xB0L,0L},{0xC5L,0xD9L,(-1L)},{0xC5L,0xC5L,0xD9L},{0L,0xD9L,0xD9L}}};
            int32_t l_1337[6] = {0x878EFF7EL,0x878EFF7EL,0x878EFF7EL,0x878EFF7EL,0x878EFF7EL,0x878EFF7EL};
            int8_t l_1354 = (-9L);
            uint8_t l_1355[4][5][4] = {{{6UL,0UL,1UL,7UL},{1UL,1UL,1UL,1UL},{6UL,0x50L,1UL,7UL},{255UL,248UL,7UL,0x56L},{7UL,0x56L,0xA2L,0x56L}},{{1UL,248UL,0UL,7UL},{6UL,0x50L,0x56L,1UL},{0UL,1UL,7UL,7UL},{0UL,0UL,0x56L,6UL},{6UL,7UL,0UL,0x50L}},{{1UL,255UL,0xA2L,0UL},{7UL,255UL,7UL,0x50L},{255UL,7UL,1UL,6UL},{6UL,0UL,1UL,7UL},{1UL,1UL,1UL,1UL}},{{6UL,0x50L,1UL,7UL},{255UL,248UL,7UL,0x56L},{7UL,0x56L,0xA2L,0x56L},{1UL,248UL,0UL,7UL},{6UL,0x50L,0x56L,1UL}}};
            int i, j, k;
            p_21 &= (((g_162[g_1071] && ((g_427[g_1071] < ((*l_1136) ^= (0xCDB09200L > g_427[g_1071]))) ^ p_19)) == (-1L)) | (safe_lshift_func_int16_t_s_u((((*g_163) , l_1127.f3) <= 1UL), (*g_791))));
            if (p_21)
                continue;
            for (l_1127.f3 = 0; (l_1127.f3 <= 3); l_1127.f3 += 1)
            { 
                union U1 l_1311 = {1L};
                int8_t *l_1312 = &l_1311.f0;
                int32_t l_1317 = 6L;
                struct S0 *l_1320[1];
                int32_t l_1336 = (-2L);
                uint8_t l_1338 = 0x57L;
                int32_t *l_1353[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1320[i] = &l_1126[2];
                for (i = 0; i < 1; i++)
                    l_1353[i] = &l_1126[0].f3;
                if ((((l_1321 |= ((l_1126[0] = func_61((safe_div_func_int8_t_s_s(((*l_1312) = (l_1311 , 4L)), (safe_sub_func_uint8_t_u_u((p_18 < ((((g_162[g_1071] != (safe_lshift_func_uint16_t_u_u(((l_1317 &= (-8L)) == ((safe_div_func_uint16_t_u_u(9UL, p_21)) , 0xAAL)), 3))) , (*l_1136)) == 0xF7A072DEL) ^ g_427[g_1071])), 0xDEL)))), l_1136, l_1136)) , 9L)) , l_1322[3]) ^ 0x58L))
                { 
                    uint16_t l_1330[1];
                    int32_t **l_1331 = &g_143;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1330[i] = 65529UL;
                    (*l_1331) = &p_21;
                }
                else
                { 
                    int32_t *l_1332[1];
                    union U1 *l_1341 = (void*)0;
                    uint8_t *l_1346 = &g_1077;
                    const int32_t ***l_1351[6];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1332[i] = &l_1085;
                    for (i = 0; i < 6; i++)
                        l_1351[i] = &l_1349;
                    l_1338--;
                    l_1341 = l_1341;
                    p_21 |= (((safe_div_func_int8_t_s_s(((*l_1136) & (safe_mul_func_uint8_t_u_u(((*l_1346) &= (l_1299 != 0UL)), 255UL))), (safe_lshift_func_int16_t_s_u(3L, 14)))) , &g_143) != (l_1349 = l_1349));
                    (*l_1349) = &g_49;
                    return (*g_163);
                }
                if (p_18)
                    goto lbl_1352;
                --l_1355[1][1][0];
            }
        }
    }
    for (g_1231.f0 = 0; (g_1231.f0 <= 0); g_1231.f0 += 1)
    { 
        struct S0 l_1358 = {0xCDC4FF27L,0x7F36819965CB29D2LL,-1L,0x42E744E3L,0x41D5L,0x3BA978EDL};
        struct S0 *l_1359 = &l_1126[1];
        int32_t l_1411 = 0xA88EA92FL;
        int32_t l_1459 = 0x6935A9BBL;
        uint32_t l_1464 = 7UL;
        int i;
        (*l_1359) = l_1358;
        if (g_717[(g_1231.f0 + 2)])
            continue;
        for (l_1358.f4 = 0; (l_1358.f4 >= 0); l_1358.f4 -= 1)
        { 
            struct S0 l_1376 = {0x76BC30A5L,-6L,0x027F9FDDL,1L,-1L,18446744073709551615UL};
            int16_t ** const ** const *l_1397 = (void*)0;
            int32_t l_1403 = 5L;
            int32_t l_1406 = 0xBED4B56EL;
            int32_t l_1407 = 0x58DBA7D3L;
            int32_t l_1409[1][6][3] = {{{0x5A387B22L,0L,0x51A60D95L},{0L,0L,(-8L)},{0xA6D5F1EBL,(-8L),(-8L)},{(-8L),0x5A387B22L,0x51A60D95L},{0xA6D5F1EBL,0x5A387B22L,0xA6D5F1EBL},{0L,(-8L),0x51A60D95L}}};
            int32_t **l_1430 = &g_143;
            union U1 *l_1434 = &g_164;
            int i, j, k;
        }
    }
    for (g_817 = 0; (g_817 <= 6); g_817 += 1)
    { 
        struct S0 l_1469[7][6][2] = {{{{0xF33B5AAAL,1L,0x9EF5CDB1L,-1L,0x662DL,2UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{1UL,0x3A926C828F5FF93BLL,0x473E7B5BL,1L,0x3F12L,18446744073709551615UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{0xF33B5AAAL,1L,0x9EF5CDB1L,-1L,0x662DL,2UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{1UL,0x3A926C828F5FF93BLL,0x473E7B5BL,1L,0x3F12L,18446744073709551615UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{0xF33B5AAAL,1L,0x9EF5CDB1L,-1L,0x662DL,2UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{1UL,0x3A926C828F5FF93BLL,0x473E7B5BL,1L,0x3F12L,18446744073709551615UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}}},{{{0xF33B5AAAL,1L,0x9EF5CDB1L,-1L,0x662DL,2UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{1UL,0x3A926C828F5FF93BLL,0x473E7B5BL,1L,0x3F12L,18446744073709551615UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{0xF33B5AAAL,1L,0x9EF5CDB1L,-1L,0x662DL,2UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{1UL,0x3A926C828F5FF93BLL,0x473E7B5BL,1L,0x3F12L,18446744073709551615UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{0xF33B5AAAL,1L,0x9EF5CDB1L,-1L,0x662DL,2UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{1UL,0x3A926C828F5FF93BLL,0x473E7B5BL,1L,0x3F12L,18446744073709551615UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}}},{{{0xF33B5AAAL,1L,0x9EF5CDB1L,-1L,0x662DL,2UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{1UL,0x3A926C828F5FF93BLL,0x473E7B5BL,1L,0x3F12L,18446744073709551615UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{0xF33B5AAAL,1L,0x9EF5CDB1L,-1L,0x662DL,2UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{1UL,0x3A926C828F5FF93BLL,0x473E7B5BL,1L,0x3F12L,18446744073709551615UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{0xF33B5AAAL,1L,0x9EF5CDB1L,-1L,0x662DL,2UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{1UL,0x3A926C828F5FF93BLL,0x473E7B5BL,1L,0x3F12L,18446744073709551615UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}}},{{{0xF33B5AAAL,1L,0x9EF5CDB1L,-1L,0x662DL,2UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{1UL,0x3A926C828F5FF93BLL,0x473E7B5BL,1L,0x3F12L,18446744073709551615UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{0xF33B5AAAL,1L,0x9EF5CDB1L,-1L,0x662DL,2UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{1UL,0x3A926C828F5FF93BLL,0x473E7B5BL,1L,0x3F12L,18446744073709551615UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{0xF33B5AAAL,1L,0x9EF5CDB1L,-1L,0x662DL,2UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{1UL,0x3A926C828F5FF93BLL,0x473E7B5BL,1L,0x3F12L,18446744073709551615UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}}},{{{0xF33B5AAAL,1L,0x9EF5CDB1L,-1L,0x662DL,2UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{1UL,0x3A926C828F5FF93BLL,0x473E7B5BL,1L,0x3F12L,18446744073709551615UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{0xF33B5AAAL,1L,0x9EF5CDB1L,-1L,0x662DL,2UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{1UL,0x3A926C828F5FF93BLL,0x473E7B5BL,1L,0x3F12L,18446744073709551615UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{0xF33B5AAAL,1L,0x9EF5CDB1L,-1L,0x662DL,2UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{1UL,0x3A926C828F5FF93BLL,0x473E7B5BL,1L,0x3F12L,18446744073709551615UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}}},{{{0xF33B5AAAL,1L,0x9EF5CDB1L,-1L,0x662DL,2UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{1UL,0x3A926C828F5FF93BLL,0x473E7B5BL,1L,0x3F12L,18446744073709551615UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{0xF33B5AAAL,1L,0x9EF5CDB1L,-1L,0x662DL,2UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{1UL,0x3A926C828F5FF93BLL,0x473E7B5BL,1L,0x3F12L,18446744073709551615UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{0xF33B5AAAL,1L,0x9EF5CDB1L,-1L,0x662DL,2UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{1UL,0x3A926C828F5FF93BLL,0x473E7B5BL,1L,0x3F12L,18446744073709551615UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}}},{{{0xF33B5AAAL,1L,0x9EF5CDB1L,-1L,0x662DL,2UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{1UL,0x3A926C828F5FF93BLL,0x473E7B5BL,1L,0x3F12L,18446744073709551615UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{0xF33B5AAAL,1L,0x9EF5CDB1L,-1L,0x662DL,2UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{1UL,0x3A926C828F5FF93BLL,0x473E7B5BL,1L,0x3F12L,18446744073709551615UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{0xF33B5AAAL,1L,0x9EF5CDB1L,-1L,0x662DL,2UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}},{{1UL,0x3A926C828F5FF93BLL,0x473E7B5BL,1L,0x3F12L,18446744073709551615UL},{0xE29BA5D7L,-3L,-2L,1L,0L,0x9C236A73L}}}};
        int32_t *l_1471 = &l_1126[0].f3;
        union U1 l_1481 = {0x09L};
        uint8_t l_1494[5][2][4] = {{{0x7FL,255UL,0x7FL,255UL},{0x7FL,255UL,0x7FL,255UL}},{{0x7FL,255UL,0x7FL,255UL},{0x7FL,255UL,0x7FL,255UL}},{{0x7FL,255UL,0x7FL,255UL},{0x7FL,255UL,0x7FL,255UL}},{{0x7FL,255UL,0x7FL,255UL},{0x7FL,255UL,0x7FL,255UL}},{{0x7FL,255UL,0x7FL,255UL},{0x7FL,255UL,0x7FL,255UL}}};
        int32_t l_1501 = 9L;
        int32_t l_1502 = 0L;
        int32_t l_1503 = 0x535534C7L;
        int8_t *l_1530 = (void*)0;
        int8_t l_1627 = 0x71L;
        int32_t l_1628 = 0x21118619L;
        int32_t l_1630 = 0xC39770E8L;
        int32_t l_1631 = 0x60583F10L;
        int32_t l_1632 = 0x44E0623DL;
        int16_t l_1639 = 0xDEA5L;
        int16_t ***l_1660[2][1][3] = {{{&g_889[1],&g_889[1],&g_889[1]}},{{&g_889[1],&g_889[1],&g_889[1]}}};
        uint32_t *l_1719[2][5] = {{&g_162[1],&g_162[1],&g_427[0],&g_1232[1][1][1],&g_427[0]},{&g_162[1],&g_162[1],&g_427[0],&g_1232[1][1][1],&g_427[0]}};
        uint32_t **l_1718[6];
        int64_t l_1720[3];
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_1718[i] = &l_1719[0][2];
        for (i = 0; i < 3; i++)
            l_1720[i] = 1L;
    }
    (*l_1349) = l_1798;
    --l_1804;
    return (**g_1697);
}



static int64_t  func_23(uint32_t  p_24)
{ 
    uint8_t l_33 = 0xEDL;
    struct S0 l_37[7] = {{0x6BA00B6FL,-1L,-3L,0x437F1BD5L,0xD2AEL,0UL},{0x6BA00B6FL,-1L,-3L,0x437F1BD5L,0xD2AEL,0UL},{0x6BA00B6FL,-1L,-3L,0x437F1BD5L,0xD2AEL,0UL},{0x6BA00B6FL,-1L,-3L,0x437F1BD5L,0xD2AEL,0UL},{0x6BA00B6FL,-1L,-3L,0x437F1BD5L,0xD2AEL,0UL},{0x6BA00B6FL,-1L,-3L,0x437F1BD5L,0xD2AEL,0UL},{0x6BA00B6FL,-1L,-3L,0x437F1BD5L,0xD2AEL,0UL}};
    uint32_t l_528 = 0x1E3D868DL;
    uint64_t l_542[3][6] = {{0x4DF8F190E59D4314LL,0x4DF8F190E59D4314LL,6UL,0x4DF8F190E59D4314LL,0x4DF8F190E59D4314LL,6UL},{0x4DF8F190E59D4314LL,0x4DF8F190E59D4314LL,6UL,0x4DF8F190E59D4314LL,0x4DF8F190E59D4314LL,6UL},{0x4DF8F190E59D4314LL,0x4DF8F190E59D4314LL,6UL,0x4DF8F190E59D4314LL,0x4DF8F190E59D4314LL,6UL}};
    const struct S0 **l_572 = (void*)0;
    const struct S0 ***l_571 = &l_572;
    const int8_t *l_604 = &g_167.f0;
    union U1 l_628 = {0xE1L};
    int16_t *l_652 = &g_123;
    int16_t **l_651 = &l_652;
    int16_t ***l_650[6] = {&l_651,&l_651,&l_651,&l_651,&l_651,&l_651};
    uint64_t l_655 = 0x922382183AA12F3ELL;
    uint64_t ***l_690[6][2] = {{&g_245[0][3][4],&g_245[0][3][1]},{(void*)0,&g_245[0][3][4]},{&g_245[0][3][4],&g_245[0][3][4]},{&g_245[0][3][4],(void*)0},{&g_245[0][0][6],&g_245[0][0][6]},{(void*)0,&g_245[0][0][6]}};
    int32_t * const l_692 = &g_2;
    int32_t *l_693 = (void*)0;
    int32_t l_711 = 0L;
    int32_t l_715[4] = {(-9L),(-9L),(-9L),(-9L)};
    union U1 ** const l_781 = &g_163;
    union U1 ** const *l_780 = &l_781;
    uint32_t l_988 = 0x0C0DDA4FL;
    int32_t l_1000 = (-7L);
    int32_t l_1005 = 5L;
    uint8_t *l_1006[4];
    int16_t **l_1021 = (void*)0;
    uint64_t l_1044 = 18446744073709551610UL;
    uint32_t l_1053 = 0x4205AA1BL;
    union U1 l_1063[5][5][2] = {{{{-5L},{-1L}},{{-5L},{-5L}},{{-1L},{-5L}},{{-5L},{-1L}},{{-5L},{-5L}}},{{{-1L},{-5L}},{{-5L},{-1L}},{{-5L},{-5L}},{{-1L},{-5L}},{{-5L},{-1L}}},{{{-5L},{-5L}},{{-1L},{-5L}},{{-5L},{-1L}},{{-5L},{-5L}},{{-1L},{-5L}}},{{{-5L},{-1L}},{{-5L},{-5L}},{{-1L},{-5L}},{{-5L},{-1L}},{{-5L},{-5L}}},{{{-1L},{-5L}},{{-5L},{-1L}},{{-5L},{-5L}},{{-1L},{-5L}},{{-5L},{-1L}}}};
    int32_t **l_1080 = &l_693;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1006[i] = &g_635[0][0];
    for (p_24 = 19; (p_24 > 51); p_24 = safe_add_func_int32_t_s_s(p_24, 1))
    { 
        int32_t *l_34 = &g_2;
        int32_t **l_525 = &g_143;
        int8_t *l_533 = &g_167.f0;
        int16_t *l_614[4];
        int16_t **l_613 = &l_614[1];
        int16_t ***l_612[7][3][5] = {{{&l_613,(void*)0,&l_613,&l_613,&l_613},{&l_613,&l_613,&l_613,&l_613,&l_613},{&l_613,&l_613,(void*)0,&l_613,(void*)0}},{{&l_613,(void*)0,&l_613,&l_613,&l_613},{&l_613,&l_613,&l_613,&l_613,(void*)0},{&l_613,&l_613,&l_613,&l_613,&l_613}},{{(void*)0,&l_613,&l_613,&l_613,&l_613},{&l_613,(void*)0,&l_613,&l_613,&l_613},{&l_613,&l_613,&l_613,&l_613,&l_613}},{{&l_613,&l_613,&l_613,&l_613,&l_613},{(void*)0,(void*)0,&l_613,&l_613,(void*)0},{&l_613,&l_613,&l_613,&l_613,&l_613}},{{&l_613,&l_613,&l_613,&l_613,&l_613},{&l_613,&l_613,&l_613,&l_613,&l_613},{&l_613,(void*)0,&l_613,&l_613,&l_613}},{{&l_613,&l_613,&l_613,&l_613,&l_613},{&l_613,&l_613,(void*)0,&l_613,(void*)0},{&l_613,(void*)0,&l_613,&l_613,&l_613}},{{&l_613,&l_613,&l_613,&l_613,(void*)0},{&l_613,&l_613,&l_613,&l_613,&l_613},{(void*)0,&l_613,&l_613,&l_613,&l_613}}};
        int32_t **l_638[7][6] = {{&g_143,(void*)0,&g_143,&g_143,(void*)0,&g_143},{&g_143,(void*)0,&g_143,&l_34,&g_143,&g_143},{&g_143,&g_143,&g_142,&g_143,&g_143,(void*)0},{&g_143,&g_143,&g_143,&l_34,&l_34,&g_143},{&g_143,&l_34,&l_34,&g_143,(void*)0,&g_143},{&g_142,&g_143,&g_142,&g_143,&l_34,&g_143},{(void*)0,&l_34,(void*)0,&g_143,&l_34,&g_143}};
        const int64_t *l_697 = &g_193.f1;
        uint32_t l_727 = 0x48632A2DL;
        uint16_t *l_732 = &g_141[5];
        const struct S0 l_770 = {18446744073709551612UL,8L,-9L,0L,0xE9D1L,0x58BD0458L};
        union U1 l_775 = {0x64L};
        union U1 **l_785 = &g_163;
        union U1 ***l_784 = &l_785;
        int32_t l_812 = 0xEE07361EL;
        int32_t l_843 = 0x584F3772L;
        uint32_t l_860 = 9UL;
        int16_t **l_870[5] = {&l_614[1],&l_614[1],&l_614[1],&l_614[1],&l_614[1]};
        uint32_t l_877 = 4294967291UL;
        int32_t *l_879[6][4] = {{&g_350,&g_350,&g_350,&g_350},{&g_350,&g_350,&g_350,&g_350},{&g_350,&g_350,&g_350,&g_350},{&g_350,&g_350,&g_350,&g_350},{&g_350,&g_350,&g_350,&g_350},{&g_350,&g_350,&g_350,&g_350}};
        struct S0 l_880 = {0xB85680FFL,0L,0x07844972L,-1L,0L,0x5BEB9B97L};
        int16_t **l_885[6][4] = {{&l_652,&l_614[2],&l_614[1],&l_614[1]},{&l_652,&l_652,&l_614[2],&l_652},{&l_652,&l_614[1],&l_614[1],&l_652},{&l_652,&l_652,&l_652,&l_614[1]},{&l_614[2],&l_652,&l_614[2],&l_652},{&l_652,&l_614[1],&l_614[1],&l_652}};
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_614[i] = &g_161;
    }
    if ((safe_lshift_func_uint8_t_u_s(((void*)0 == &g_124), (((1UL == ((!(*l_692)) <= (safe_rshift_func_uint8_t_u_u(0UL, l_1000)))) <= ((g_85 |= ((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_s(l_1005, 5)) , p_24), 4)) , p_24)) & 0xECL)) , g_193.f2))))
    { 
        struct S0 *l_1009 = &l_37[3];
        struct S0 **l_1010 = &l_1009;
        int32_t l_1011 = 0xD9C5910CL;
        l_1011 &= (0x014BF0E55F94B1A6LL && ((*l_692) != (safe_lshift_func_uint16_t_u_u((((*l_1010) = ((*g_294) = l_1009)) != &g_193), 4))));
    }
    else
    { 
        int32_t **l_1012 = (void*)0;
        int32_t **l_1013 = &g_143;
        uint64_t *****l_1014 = (void*)0;
        uint64_t ****l_1016 = (void*)0;
        uint64_t *****l_1015 = &l_1016;
        int32_t *l_1017 = &l_715[1];
        int16_t **l_1022 = &g_887;
        int16_t **l_1023 = &g_887;
        uint32_t *l_1024 = &g_53;
        int16_t l_1033 = 2L;
        int32_t l_1050 = 0xA6BDDE12L;
        int32_t l_1051 = 0x8109FBABL;
        int32_t l_1052 = 0x4FD34AA9L;
        int32_t l_1072 = 0xA0040A74L;
        int32_t l_1073 = 0L;
        int32_t l_1074 = 0x39128344L;
        int32_t l_1075 = 1L;
        int32_t l_1076 = (-10L);
        (*l_1013) = (void*)0;
        (*l_1015) = &l_690[2][0];
        (*l_1017) ^= 0x13EFBE65L;
    }
    (*l_1080) = &l_1000;
    return p_24;
}



static int32_t * func_27(uint8_t  p_28, int8_t  p_29, int32_t * p_30, uint32_t  p_31, int32_t * p_32)
{ 
    int32_t l_47 = 0x3E2BE8CAL;
    int32_t l_51[4] = {0x254764FEL,0x254764FEL,0x254764FEL,0x254764FEL};
    int16_t l_58 = 0x1AC6L;
    int32_t * const l_65 = (void*)0;
    int32_t **l_395 = &g_142;
    int32_t *l_396 = &g_350;
    int32_t l_465 = 2L;
    uint64_t **l_498 = &g_246[0][0];
    int64_t l_499 = (-8L);
    int i;
    for (p_31 = (-13); (p_31 < 38); p_31 = safe_add_func_uint64_t_u_u(p_31, 2))
    { 
        return p_32;
    }
lbl_46:
    g_43 = 0L;
    for (g_43 = (-25); (g_43 <= 29); g_43 = safe_add_func_uint8_t_u_u(g_43, 1))
    { 
        int32_t *l_48 = &g_49;
        int32_t *l_50[6] = {&g_2,&g_2,&g_49,&g_2,&g_2,&g_49};
        int i;
        if (g_43)
            goto lbl_46;
        if (l_47)
            continue;
        g_53++;
    }
    (*l_396) ^= ((1L ^ (safe_mul_func_int16_t_s_s(l_58, (safe_mul_func_uint8_t_u_u(249UL, (((*l_395) = func_35(((***g_293) = func_61(l_47, &l_51[0], l_65)))) == (void*)0)))))) , (-1L));
    for (g_52 = 0; (g_52 >= 0); g_52 -= 1)
    { 
        const int32_t l_405 = 0x65960AB7L;
        int16_t *l_416 = &g_123;
        int16_t **l_415 = &l_416;
        uint8_t *l_425 = &g_85;
        int8_t *l_426[6][2] = {{&g_167.f0,&g_167.f0},{&g_167.f0,&g_167.f0},{&g_167.f0,&g_167.f0},{&g_167.f0,&g_167.f0},{&g_167.f0,&g_167.f0},{&g_167.f0,&g_167.f0}};
        uint32_t *l_428 = (void*)0;
        uint32_t *l_429 = &g_162[5];
        struct S0 *l_454 = &g_193;
        int32_t l_462 = 1L;
        int32_t l_470 = 1L;
        int i, j;
        for (g_193.f1 = 4; (g_193.f1 >= 0); g_193.f1 -= 1)
        { 
            uint16_t *l_408 = &g_141[5];
            uint32_t l_409[5];
            int i, j;
            for (i = 0; i < 5; i++)
                l_409[i] = 0xFBAA37DFL;
            for (g_193.f2 = 0; (g_193.f2 <= 3); g_193.f2 += 1)
            { 
                int i, j, k;
                if (g_75[(g_193.f2 + 1)][(g_193.f2 + 1)][(g_193.f1 + 1)])
                    break;
            }
            (*l_396) = (safe_div_func_uint64_t_u_u((((void*)0 != &l_65) | (safe_sub_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((l_51[g_52] > l_51[(g_52 + 2)]), ((*l_408) ^= (safe_div_func_int64_t_s_s(l_405, (p_29 , (safe_rshift_func_int8_t_s_s((((((5L == g_350) , g_75[3][3][1]) ^ g_164.f0) ^ 0xAC01B060L) != 0UL), g_53)))))))), g_123))), l_405));
            for (g_49 = 0; (g_49 <= 4); g_49 += 1)
            { 
                int16_t *l_414[4][1];
                int16_t **l_413 = &l_414[0][0];
                int16_t ***l_412[7][4][3] = {{{&l_413,&l_413,&l_413},{&l_413,&l_413,&l_413},{(void*)0,&l_413,(void*)0},{&l_413,&l_413,&l_413}},{{(void*)0,&l_413,&l_413},{&l_413,&l_413,&l_413},{&l_413,&l_413,&l_413},{&l_413,&l_413,(void*)0}},{{&l_413,&l_413,&l_413},{(void*)0,&l_413,&l_413},{&l_413,&l_413,&l_413},{(void*)0,&l_413,(void*)0}},{{&l_413,&l_413,&l_413},{&l_413,&l_413,&l_413},{&l_413,&l_413,&l_413},{&l_413,&l_413,&l_413}},{{&l_413,&l_413,(void*)0},{&l_413,&l_413,&l_413},{&l_413,&l_413,&l_413},{&l_413,&l_413,&l_413}},{{&l_413,&l_413,&l_413},{(void*)0,&l_413,(void*)0},{&l_413,&l_413,&l_413},{(void*)0,&l_413,&l_413}},{{&l_413,&l_413,&l_413},{&l_413,&l_413,&l_413},{&l_413,&l_413,(void*)0},{&l_413,&l_413,&l_413}}};
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_414[i][j] = &l_58;
                }
                if (l_405)
                    break;
                --l_409[2];
                l_415 = (void*)0;
                if (p_29)
                    goto lbl_46;
                (*l_395) = &g_43;
            }
        }
        g_193.f3 ^= ((safe_rshift_func_int8_t_s_u(g_43, (g_193.f5 != ((*l_429) = (((((*l_396) = 0x7D16AB61L) >= (safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u((((l_51[1] |= (~((safe_div_func_int64_t_s_s(((((0xF7L ^ ((-9L) < ((((l_405 , (((*l_425) = (((((g_141[3] != 0x2C7EC2A867BA3A6BLL) ^ p_29) & g_141[5]) > (-1L)) , 0x3FL)) || 0x41L)) > g_353[0][2][0]) , p_28) == (-4L)))) == p_31) | p_28) , l_405), p_28)) < l_405))) >= 0xAAL) == g_261))), g_162[3]))) >= 0UL) ^ g_427[0]))))) || (*l_396));
        for (g_49 = 0; (g_49 <= 0); g_49 += 1)
        { 
            const uint16_t *l_431 = (void*)0;
            const uint16_t **l_430 = &l_431;
            uint64_t *l_439[6] = {&g_440,&g_440,&g_440,&g_440,&g_440,&g_440};
            uint64_t l_441 = 4UL;
            int i;
            (*g_143) = (((*l_430) = &g_261) != (((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u((((*l_396) = (g_124 == (safe_add_func_int64_t_s_s((+(++l_441)), (safe_mod_func_int64_t_s_s((((safe_mul_func_uint8_t_u_u(((l_462 &= ((safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((((safe_add_func_int16_t_s_s((l_454 == l_454), (safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(p_28, (((safe_rshift_func_int8_t_s_u((g_164.f0 &= p_29), 0)) == (!p_29)) || g_49))), g_162[4])))) >= g_167.f0) != (-1L)), 0xA33BL)), 0x5DL)) > p_29)) || 0x090D7A6ACEA52AD0LL), g_141[5])) < 4UL) == l_405), p_29)))))) > l_405), l_405)), 0)) < p_28) , l_416));
            (*l_395) = &g_43;
            for (g_193.f1 = 0; (g_193.f1 <= 4); g_193.f1 += 1)
            { 
                int32_t l_464[7];
                int32_t l_466 = 0x8D84C4E2L;
                int32_t l_468 = 0x4773189BL;
                int32_t l_469 = 1L;
                int i;
                for (i = 0; i < 7; i++)
                    l_464[i] = 0xE860EC22L;
                for (g_193.f4 = 2; (g_193.f4 >= 0); g_193.f4 -= 1)
                { 
                    int32_t *l_463[1][1][5] = {{{&l_51[0],&l_51[0],&l_51[0],&l_51[0],&l_51[0]}}};
                    int i, j, k;
                    g_471++;
                    if (g_75[(g_49 + 3)][(g_193.f1 + 1)][(g_193.f1 + 1)])
                        continue;
                }
                return p_30;
            }
        }
        if ((*p_32))
            break;
        for (g_193.f4 = 0; (g_193.f4 >= 0); g_193.f4 -= 1)
        { 
            uint8_t l_522 = 0xF4L;
            for (l_465 = 0; (l_465 <= 0); l_465 += 1)
            { 
                union U1 l_480 = {1L};
                uint64_t ***l_494 = &g_245[0][0][3];
                uint64_t **** const l_493 = &l_494;
            }
            return (*l_395);
        }
    }
    return &g_2;
}



static int32_t * func_35(struct S0  p_36)
{ 
    uint8_t l_38 = 3UL;
    int32_t l_39 = 0L;
    int32_t *l_40 = &l_39;
    l_39 = l_38;
    return &g_2;
}



static struct S0  func_61(uint32_t  p_62, int32_t * p_63, int32_t * const  p_64)
{ 
    struct S0 l_68[1][6] = {{{0x618A3212L,0xC3887D17319F56C0LL,0x90B22F2EL,0x3B6EA11BL,1L,18446744073709551615UL},{1UL,0xD8A5C089A473F190LL,-2L,0xCD19708EL,-7L,0xEA102A83L},{0x54C1B2F0L,1L,4L,0x3B115E53L,0x01E8L,0x513FE74CL},{0x54C1B2F0L,1L,4L,0x3B115E53L,0x01E8L,0x513FE74CL},{0x618A3212L,0xC3887D17319F56C0LL,0x90B22F2EL,0x3B6EA11BL,1L,18446744073709551615UL},{0x54C1B2F0L,1L,4L,0x3B115E53L,0x01E8L,0x513FE74CL}}};
    int32_t l_83 = (-9L);
    uint8_t *l_101 = &g_75[3][5][3];
    const int32_t *l_152[4];
    const int32_t ** const l_151 = &l_152[2];
    union U1 *l_166[2];
    const int16_t l_268 = 1L;
    int16_t l_334[5] = {(-4L),(-4L),(-4L),(-4L),(-4L)};
    uint32_t l_338 = 8UL;
    int32_t l_347 = (-7L);
    int32_t l_348 = 0xFFCF0A8FL;
    int32_t l_349 = 1L;
    int32_t l_352[6] = {0xB3F41B2FL,0xB3F41B2FL,0xB3F41B2FL,0xB3F41B2FL,0xB3F41B2FL,0xB3F41B2FL};
    uint32_t l_375[3];
    const uint64_t *l_379 = &g_380;
    union U1 **l_382 = &l_166[1];
    union U1 ***l_381 = &l_382;
    struct S0 l_394 = {0x440080C0L,0xB61277F720654CC5LL,0x8BD2F8E4L,0x5AA5F4DEL,0x0B86L,6UL};
    int i, j;
    for (i = 0; i < 4; i++)
        l_152[i] = &l_83;
    for (i = 0; i < 2; i++)
        l_166[i] = &g_167;
    for (i = 0; i < 3; i++)
        l_375[i] = 18446744073709551615UL;
    for (g_43 = 0; (g_43 == 24); g_43 = safe_add_func_int32_t_s_s(g_43, 6))
    { 
        return l_68[0][5];
    }
    for (g_53 = 0; (g_53 <= 0); g_53 += 1)
    { 
        uint64_t l_69 = 0xE709F62D42CB0EA5LL;
        uint8_t *l_74 = &g_75[3][5][3];
        int32_t l_84 = 0x4424CFB0L;
        union U1 l_119 = {0xC5L};
        struct S0 *l_216[5][6][1] = {{{&l_68[0][5]},{&l_68[0][0]},{(void*)0},{(void*)0},{&l_68[0][5]},{&l_68[0][5]}},{{(void*)0},{(void*)0},{&l_68[0][0]},{&l_68[0][5]},{&l_68[0][5]},{(void*)0}},{{&l_68[0][5]},{&l_68[0][5]},{&l_68[0][0]},{(void*)0},{(void*)0},{&l_68[0][5]}},{{&l_68[0][5]},{(void*)0},{(void*)0},{&l_68[0][0]},{&l_68[0][5]},{&l_68[0][5]}},{{(void*)0},{&l_68[0][5]},{&l_68[0][5]},{&l_68[0][0]},{(void*)0},{(void*)0}}};
        const uint16_t *l_233 = &g_141[5];
        uint64_t *l_243 = &l_69;
        uint64_t **l_242[7][1];
        int64_t l_335 = 0xF1EA3970286BD2B4LL;
        int32_t l_345 = 0x0344EB44L;
        int32_t l_346 = 1L;
        int32_t l_351[5] = {0xE4534EDEL,0xE4534EDEL,0xE4534EDEL,0xE4534EDEL,0xE4534EDEL};
        uint32_t *l_393 = (void*)0;
        uint32_t **l_392 = &l_393;
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 1; j++)
                l_242[i][j] = &l_243;
        }
        (*p_63) |= (l_69 < (safe_mul_func_uint16_t_u_u((((*l_74) = (((safe_add_func_int16_t_s_s(l_69, 65535UL)) < 18446744073709551611UL) > ((p_62 && (-1L)) > p_62))) > p_62), g_2)));
    }
    (*l_151) = (*l_151);
    return l_394;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_75[i][j][k], "g_75[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_141[i], "g_141[i]", print_hash_value);

    }
    transparent_crc(g_161, "g_161", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_162[i], "g_162[i]", print_hash_value);

    }
    transparent_crc(g_164.f0, "g_164.f0", print_hash_value);
    transparent_crc(g_167.f0, "g_167.f0", print_hash_value);
    transparent_crc(g_193.f0, "g_193.f0", print_hash_value);
    transparent_crc(g_193.f1, "g_193.f1", print_hash_value);
    transparent_crc(g_193.f2, "g_193.f2", print_hash_value);
    transparent_crc(g_193.f3, "g_193.f3", print_hash_value);
    transparent_crc(g_193.f4, "g_193.f4", print_hash_value);
    transparent_crc(g_193.f5, "g_193.f5", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_350, "g_350", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_353[i][j][k], "g_353[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_380, "g_380", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_427[i], "g_427[i]", print_hash_value);

    }
    transparent_crc(g_440, "g_440", print_hash_value);
    transparent_crc(g_467, "g_467", print_hash_value);
    transparent_crc(g_471, "g_471", print_hash_value);
    transparent_crc(g_515, "g_515", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_635[i][j], "g_635[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_644, "g_644", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_717[i], "g_717[i]", print_hash_value);

    }
    transparent_crc(g_718, "g_718", print_hash_value);
    transparent_crc(g_762.f0, "g_762.f0", print_hash_value);
    transparent_crc(g_792, "g_792", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_799[i], "g_799[i]", print_hash_value);

    }
    transparent_crc(g_811, "g_811", print_hash_value);
    transparent_crc(g_817, "g_817", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_844[i], "g_844[i]", print_hash_value);

    }
    transparent_crc(g_845, "g_845", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_846[i], "g_846[i]", print_hash_value);

    }
    transparent_crc(g_1071, "g_1071", print_hash_value);
    transparent_crc(g_1077, "g_1077", print_hash_value);
    transparent_crc(g_1228.f0, "g_1228.f0", print_hash_value);
    transparent_crc(g_1231.f0, "g_1231.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1232[i][j][k], "g_1232[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1436.f0, "g_1436.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_1470[i][j], "g_1470[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1540[i][j][k], "g_1540[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1870.f0, "g_1870.f0", print_hash_value);
    transparent_crc(g_1891, "g_1891", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_2046[i][j], "g_2046[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2206[i], "g_2206[i]", print_hash_value);

    }
    transparent_crc(g_2242, "g_2242", print_hash_value);
    transparent_crc(g_2256, "g_2256", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_2379[i][j][k], "g_2379[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_2410[i][j][k], "g_2410[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2435, "g_2435", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2458[i], "g_2458[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_2473[i][j], "g_2473[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2633, "g_2633", print_hash_value);
    transparent_crc(g_2707, "g_2707", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
