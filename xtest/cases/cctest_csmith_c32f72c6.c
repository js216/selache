// SPDX-License-Identifier: MIT
// cctest_csmith_c32f72c6.c --- cctest case csmith_c32f72c6 (csmith seed 3274666694)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xdb247ff8 */

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

// Options:   -s 3274666694 -o /tmp/csmith_gen_63g95dgm/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int8_t  f0;
   const uint32_t  f1;
   int8_t  f2;
   uint8_t  f3;
};
#pragma pack(pop)

union U1 {
   int8_t  f0;
   uint32_t  f1;
   int8_t  f2;
   const uint32_t  f3;
};


static uint32_t g_2 = 0x7555B7CEL;
static int8_t g_3 = 0x9AL;
static int64_t g_4[4] = {0x62C9CC14173BF38CLL,0x62C9CC14173BF38CLL,0x62C9CC14173BF38CLL,0x62C9CC14173BF38CLL};
static uint32_t g_5 = 7UL;
static uint64_t g_15[3][2][5] = {{{0UL,0UL,0UL,0UL,0UL},{18446744073709551610UL,0x64BAE0FC36FE5AB0LL,18446744073709551610UL,0x64BAE0FC36FE5AB0LL,18446744073709551610UL}},{{0UL,0UL,0UL,0UL,0UL},{18446744073709551610UL,0x64BAE0FC36FE5AB0LL,18446744073709551610UL,0x64BAE0FC36FE5AB0LL,18446744073709551610UL}},{{0UL,0UL,0UL,0UL,0UL},{18446744073709551610UL,0x64BAE0FC36FE5AB0LL,18446744073709551610UL,0x64BAE0FC36FE5AB0LL,18446744073709551610UL}}};
static int16_t g_16 = (-1L);
static union U1 g_33[4] = {{0x2DL},{0x2DL},{0x2DL},{0x2DL}};
static int16_t g_48 = 0x3F11L;
static int16_t g_50 = 0x99D4L;
static uint64_t g_58 = 0x288A3D85AA7F794FLL;
static uint32_t g_87 = 18446744073709551615UL;
static uint32_t g_91 = 4294967289UL;
static uint32_t g_98 = 18446744073709551615UL;
static int32_t g_99 = 0xE4ADB81CL;
static uint32_t g_105 = 1UL;
static int64_t g_114[2] = {1L,1L};
static int64_t g_115 = 0L;
static int32_t g_116 = 0x897626F0L;
static int32_t g_120 = 0xBE6313C7L;
static uint8_t g_122[3] = {5UL,5UL,5UL};
static uint8_t g_138 = 0xEBL;
static int32_t g_173 = 9L;



static uint32_t  func_1(void);
static uint8_t  func_10(int32_t  p_11, const int32_t  p_12, struct S0  p_13, const uint32_t  p_14);
static int64_t  func_24(int32_t  p_25);
static int32_t  func_29(union U1  p_30, uint32_t  p_31, int16_t  p_32);




static uint32_t  func_1(void)
{ 
    uint16_t l_139 = 0UL;
    int32_t l_172 = 6L;
    union U1 l_193 = {0x35L};
    g_3 = g_2;
    for (g_2 = 0; (g_2 <= 3); g_2 += 1)
    { 
        int16_t l_140 = 0x5371L;
        uint16_t l_174 = 0UL;
        int32_t l_179 = (-10L);
        int32_t l_196 = 0x5DC8BF38L;
        int i;
        g_5 = g_4[g_2];
        for (g_5 = 0; (g_5 <= 3); g_5 += 1)
        { 
            struct S0 l_17 = {-8L,1UL,0x60L,252UL};
            int i;
            l_140 ^= ((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(func_10((g_15[2][1][4] = 0xEED1E12AL), (g_16 &= (250UL == g_4[g_5])), l_17, l_17.f2), 1)), l_139)) | g_114[1]);
            for (g_120 = 2; (g_120 >= 0); g_120 -= 1)
            { 
                int i;
                g_99 |= (safe_add_func_uint32_t_u_u(g_122[g_120], g_120));
                if (g_98)
                    continue;
            }
        }
        for (g_99 = 28; (g_99 != (-1)); --g_99)
        { 
            uint8_t l_150 = 0xB3L;
            int32_t l_176 = (-1L);
            if ((((safe_mul_func_uint8_t_u_u((0L ^ ((safe_mul_func_int16_t_s_s((g_114[1] | (safe_unary_minus_func_uint16_t_u(((6L <= (g_91 < 0x71FAE99D52E2DA10LL)) & 0UL)))), l_140)) > 4294967291UL)), g_98)) || l_150) && 0xEB154EA432D78657LL))
            { 
                int8_t l_175 = (-1L);
                g_116 = (-6L);
                l_176 = ((((g_2 | ((((((safe_add_func_uint16_t_u_u(((safe_unary_minus_func_uint16_t_u(((safe_div_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(l_150, (safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((((safe_add_func_uint32_t_u_u(4294967286UL, (safe_add_func_uint64_t_u_u(((l_172 = 4294967292UL) >= g_4[g_2]), g_173)))) | l_150) != g_15[2][1][4]), l_174)), l_140)))), g_4[0])), l_175)) >= 0xB098L), g_122[2])) | l_175) | g_48), l_175)) < l_150))) != g_87), g_15[0][0][1])) || l_175) && g_105) ^ l_139) , 0UL) , l_150)) & 0x44E65D69AD93880BLL) && 0xAB5F7C52E31AC302LL) == 0L);
            }
            else
            { 
                int64_t l_184 = 1L;
                g_116 = (g_4[3] > (safe_mul_func_int16_t_s_s((l_179 = g_116), 65535UL)));
                g_116 = (safe_lshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((l_179 = (l_150 || (-5L))), g_4[g_2])) == l_184), l_174));
                g_116 = l_140;
            }
            for (l_150 = 0; (l_150 > 53); l_150++)
            { 
                return g_120;
            }
            l_176 = (((g_173 = (safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(0x3A27L, (g_91 , (safe_lshift_func_int16_t_s_s(((l_193 , (safe_add_func_uint8_t_u_u((l_139 , l_196), 0UL))) , 0L), 3))))), g_122[1]))) , g_114[1]) > 0x7CL);
        }
    }
    for (l_193.f2 = 15; (l_193.f2 < (-30)); l_193.f2--)
    { 
        if (g_91)
            break;
    }
    return g_138;
}



static uint8_t  func_10(int32_t  p_11, const int32_t  p_12, struct S0  p_13, const uint32_t  p_14)
{ 
    int64_t l_59 = (-1L);
    int32_t l_66 = (-9L);
    int32_t l_100 = (-9L);
    for (p_13.f2 = 0; (p_13.f2 > 6); p_13.f2++)
    { 
        return g_5;
    }
    if (((safe_mul_func_uint8_t_u_u(0xBBL, ((safe_rshift_func_int16_t_s_s(((func_24((0x50714BA09A164E62LL < 1L)) & l_59) ^ p_13.f2), p_13.f1)) || 0x165AAE70L))) <= p_12))
    { 
        p_11 = l_59;
        return p_13.f2;
    }
    else
    { 
        int16_t l_86 = (-7L);
        int32_t l_104 = 0L;
        int32_t l_117 = 0x21D28FF5L;
        int32_t l_119 = 0xACE7FEFAL;
        if ((g_4[2] | (((safe_mul_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((l_59 || (((safe_add_func_int64_t_s_s(0x85063020822C3E50LL, (l_66 = 0x52DE1722BB76E0E3LL))) || 0UL) || l_59)), g_16)), g_15[2][1][4])) <= l_59) & p_13.f2)))
        { 
            l_66 = (p_11 = g_48);
            for (g_50 = 0; (g_50 > (-7)); g_50 = safe_sub_func_uint16_t_u_u(g_50, 2))
            { 
                uint32_t l_88 = 18446744073709551606UL;
                int32_t l_89[4] = {0xE08938C4L,0xE08938C4L,0xE08938C4L,0xE08938C4L};
                const int32_t l_90 = 0x4E2D8D86L;
                int i;
                l_89[2] ^= ((safe_div_func_uint8_t_u_u((((g_16 &= (safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((safe_div_func_int8_t_s_s((safe_mul_func_int16_t_s_s(p_11, (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((!0xB921586CL) | (((g_87 |= l_86) , (l_86 , 0x6C5FL)) | 65529UL)), 0)), 0xD623L)))), g_15[2][1][4])) & l_88), l_59)), l_88)), p_13.f0))) && p_13.f2) & p_14), g_3)) || 7UL);
                g_91 = l_90;
                p_11 = g_15[0][1][1];
            }
        }
        else
        { 
            int16_t l_108 = (-1L);
            int32_t l_113 = 8L;
            int32_t l_118 = 0L;
            int32_t l_121 = 0x36C3AAFFL;
            if ((safe_sub_func_int16_t_s_s(l_66, (safe_sub_func_uint8_t_u_u(0x28L, (1L < ((safe_mul_func_int8_t_s_s(((-1L) ^ 0L), 6UL)) <= 0xCA9AL)))))))
            { 
                g_98 = (p_11 = g_4[2]);
            }
            else
            { 
                g_99 = l_59;
                l_100 &= (p_12 < (l_66 < 0x69E1CF7FL));
            }
            l_104 = (g_33[2].f2 | ((g_2 , (((+(--g_105)) , 0x25DEL) , l_108)) > g_48));
            for (g_48 = 0; (g_48 == 17); g_48++)
            { 
                int32_t l_112 = 0x068B84F8L;
                g_99 = (~(l_100 = 0L));
                g_122[0]--;
                g_99 = (p_11 = (safe_rshift_func_uint16_t_u_s(l_66, 14)));
            }
        }
        for (g_87 = (-24); (g_87 >= 12); g_87 = safe_add_func_uint16_t_u_u(g_87, 2))
        { 
            for (g_105 = 0; (g_105 <= 1); g_105 += 1)
            { 
                int i;
                l_119 = (p_11 = (((g_114[g_105] > (((safe_unary_minus_func_int32_t_s((-1L))) ^ (safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((((safe_mod_func_int32_t_s_s((safe_div_func_uint8_t_u_u(g_15[2][1][4], ((4294967295UL | l_66) ^ 0UL))), l_100)) , 0UL) , 0x28546E32L) != (-1L)) < p_13.f2), g_138)), g_114[1]))) != l_59)) >= g_99) || g_98));
                if (p_13.f1)
                    break;
            }
        }
        return g_91;
    }
}



static int64_t  func_24(int32_t  p_25)
{ 
    uint32_t l_38[4];
    int i;
    for (i = 0; i < 4; i++)
        l_38[i] = 0x46DF8000L;
    for (g_16 = 0; (g_16 != (-4)); g_16--)
    { 
        for (p_25 = 0; (p_25 <= 1); p_25 += 1)
        { 
            int32_t l_28 = 4L;
            if (p_25)
                break;
            return l_28;
        }
    }
    if (func_29(g_33[2], (safe_lshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u((0x758A8CE9B8A51422LL ^ (l_38[2] , p_25)), p_25)), 7)), p_25))
    { 
        int32_t l_47 = 0L;
        for (g_16 = 4; (g_16 == (-5)); --g_16)
        { 
            int16_t l_46 = 3L;
            g_48 = ((safe_add_func_int32_t_s_s(0x2C82F3C0L, (((safe_mod_func_uint16_t_u_u(((l_46 | 7L) < (l_46 && g_2)), g_2)) > g_5) >= l_47))) <= l_46);
            if (l_38[3])
                break;
        }
    }
    else
    { 
        int32_t l_49 = 9L;
        g_50 = l_49;
    }
    for (p_25 = (-14); (p_25 <= (-22)); p_25 = safe_sub_func_uint16_t_u_u(p_25, 7))
    { 
        uint8_t l_53 = 255UL;
        l_53--;
        for (g_50 = 0; (g_50 != (-20)); g_50--)
        { 
            g_58 = (-5L);
        }
    }
    return l_38[2];
}



static int32_t  func_29(union U1  p_30, uint32_t  p_31, int16_t  p_32)
{ 
    uint32_t l_39 = 1UL;
    l_39 = 0x84B0F4F2L;
    return g_3;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_4[i], "g_4[i]", print_hash_value);

    }
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_15[i][j][k], "g_15[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_16, "g_16", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_33[i].f0, "g_33[i].f0", print_hash_value);
        transparent_crc(g_33[i].f2, "g_33[i].f2", print_hash_value);

    }
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_114[i], "g_114[i]", print_hash_value);

    }
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_122[i], "g_122[i]", print_hash_value);

    }
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
