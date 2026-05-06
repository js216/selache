// SPDX-License-Identifier: MIT
// cctest_csmith_fd6f9b54.c --- cctest case csmith_fd6f9b54 (csmith seed 4251949908)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8b1e6403 */

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

// Options:   -s 4251949908 -o /tmp/csmith_gen_cjgrxmip/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const signed f0 : 24;
   unsigned f1 : 13;
   signed f2 : 27;
   signed f3 : 27;
   signed f4 : 30;
};

union U1 {
   uint16_t  f0;
};

union U2 {
   uint64_t  f0;
   const int32_t  f1;
   signed : 0;
   const int64_t  f2;
};


static int32_t g_14 = 0x415D7249L;
static uint64_t g_32 = 7UL;
static union U1 g_56[1] = {{1UL}};
static uint32_t g_75 = 1UL;
static int8_t g_76 = 0xC8L;
static int32_t g_77 = (-1L);
static uint32_t g_79 = 5UL;
static union U2 g_96 = {0x33E316ED2767F929LL};
static int32_t g_171 = 0x8A455194L;
static int64_t g_192 = 0xCE914191B5690952LL;
static uint32_t g_199 = 18446744073709551615UL;
static int32_t g_230 = 0xEF5A3A18L;
static uint16_t g_237 = 0xC93EL;
static int32_t g_250 = 9L;
static uint32_t g_251 = 0x3BF9DA39L;
static uint32_t g_260 = 4294967288UL;
static uint64_t g_295 = 0x23D4C4BB440DB710LL;



static union U1  func_1(void);
static int8_t  func_4(int32_t  p_5, uint32_t  p_6, int64_t  p_7, uint8_t  p_8);
static int32_t  func_9(const uint32_t  p_10, int16_t  p_11, int8_t  p_12, union U1  p_13);
static int16_t  func_15(int32_t  p_16, union U2  p_17, int16_t  p_18, int64_t  p_19, uint16_t  p_20);




static union U1  func_1(void)
{ 
    int8_t l_29 = 0x0AL;
    int32_t l_33 = 0xAB551FA4L;
    union U2 l_34 = {0UL};
    int32_t l_116 = 0x5D8015DFL;
    int32_t l_169 = 0L;
    int64_t l_218[4] = {(-10L),(-10L),(-10L),(-10L)};
    union U1 l_229 = {0xC781L};
    uint32_t l_231 = 4294967295UL;
    uint16_t l_232[3][5][1] = {{{1UL},{0x6875L},{1UL},{0x6875L},{1UL}},{{0x6875L},{1UL},{0x6875L},{1UL},{0x6875L}},{{1UL},{0x6875L},{1UL},{0x6875L},{1UL}}};
    struct S0 l_313 = {4083,17,1550,5500,15178};
    int i, j, k;
lbl_278:
    l_116 ^= (safe_div_func_int8_t_s_s(func_4(func_9((g_14 & func_15((safe_mod_func_uint32_t_u_u((l_33 = (g_32 |= (safe_lshift_func_int16_t_s_u(0x6810L, (((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((l_29 && (safe_add_func_uint16_t_u_u(0UL, 5L))), 4)), l_29)) == 5UL) ^ g_14))))), 4294967288UL)), l_34, g_14, g_14, l_34.f0)), l_34.f0, l_34.f1, g_56[0]), g_96.f1, g_96.f0, g_96.f0), g_56[0].f0));
    for (g_14 = 0; (g_14 >= 0); g_14 -= 1)
    { 
        int32_t l_135 = 9L;
        int32_t l_138 = 6L;
        union U1 l_180 = {0x1124L};
        for (l_116 = 0; (l_116 >= 0); l_116 -= 1)
        { 
            int64_t l_136 = 0xB6CDAE681B697508LL;
            int32_t l_144 = (-5L);
            int8_t l_170 = (-1L);
            struct S0 l_172[1][2] = {{{-1015,46,-9652,-6502,3787},{-1015,46,-9652,-6502,3787}}};
            int i, j;
            if (g_79)
            { 
                int64_t l_117 = 0x8067FC1DF0E7D168LL;
                int32_t l_137 = 0xBCBAD6A7L;
                if (l_117)
                    break;
                if (g_79)
                    continue;
                l_138 = ((safe_rshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_s(0xC9B2L, 6)) < (safe_div_func_uint64_t_u_u((g_32 |= (safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((((l_137 = (0x318DL == (safe_sub_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(g_76, (safe_unary_minus_func_uint32_t_u((g_96.f1 && l_135))))) > l_136), l_136)))) >= 1L) ^ (-3L)) , g_76), 0xCE49L)), g_56[0].f0)), 7))), 0xD558AF5EEAC9F24DLL))), l_117)) || l_135);
            }
            else
            { 
                int32_t l_139 = 0xB67B2045L;
                l_139 &= l_135;
                g_171 = (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_u((l_144 = g_79), (safe_lshift_func_int8_t_s_u((safe_add_func_int64_t_s_s((safe_add_func_uint32_t_u_u((9UL & ((g_96.f2 ^ (safe_rshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((safe_sub_func_uint64_t_u_u(((safe_mod_func_uint32_t_u_u((g_75 |= (safe_lshift_func_uint16_t_u_u((g_56[0].f0 &= (((g_76 = (l_169 && 249UL)) == 249UL) | 0x32FAA2BCA0CB05F2LL)), g_96.f2))), 0xB735CC48L)) || 0xC189EFAFL), g_96.f2)) > l_116), 8UL)), g_14)) | l_136) , l_34.f2), 8UL)) < 0x83L), 1L)), 9))) != 0x28D9300DL)), 4294967295UL)), l_139)), l_170)))) | 0xA7L), 2));
                g_171 ^= l_34.f2;
            }
            if (((g_56[g_14] , l_172[0][0]) , (safe_lshift_func_int8_t_s_s(((g_56[0].f0 <= (safe_unary_minus_func_int8_t_s((g_76 = (safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(0xBCL, 0xF4L)), g_96.f0)))))) ^ 0x8A4D6DA3L), l_172[0][0].f0))))
            { 
                g_171 = l_34.f1;
            }
            else
            { 
                union U1 l_181 = {65534UL};
                const int32_t l_190 = (-7L);
                g_171 = (((l_181 = l_180) , (g_96.f1 < 0L)) && (((safe_add_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_s(((((safe_rshift_func_uint16_t_u_s((0xA6807BAAA9AA2B5CLL & g_77), l_190)) , 255UL) >= 0x7AL) && g_76), l_181.f0)) , (-5L)) && l_135), 0xAAL)) || l_190) == g_75));
            }
            l_172[0][0].f4 = ((l_34.f0 >= (g_192 = ((~(0x0C68C705L != 0UL)) >= l_172[0][0].f2))) < g_96.f1);
        }
    }
    if ((l_34.f1 , (g_14 = (g_192 < (g_75 != (g_79 != g_77))))))
    { 
        int16_t l_206[5];
        int i;
        for (i = 0; i < 5; i++)
            l_206[i] = 0x4F48L;
        g_14 ^= g_32;
        for (g_75 = 0; (g_75 <= 0); g_75 += 1)
        { 
            int i;
            return g_56[g_75];
        }
        g_171 = (safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s(g_32, (g_199 |= g_79))), ((safe_rshift_func_int16_t_s_u((safe_add_func_int64_t_s_s(((4294967287UL ^ ((safe_div_func_int8_t_s_s(((0xA6L > 0L) || 0xDBE89911L), l_34.f1)) , l_206[2])) ^ g_192), g_96.f2)), 11)) ^ g_77)));
    }
    else
    { 
        int16_t l_217 = 0L;
        union U1 l_219[2][3][2] = {{{{0x666EL},{0x666EL}},{{0x666EL},{0x666EL}},{{0x666EL},{0x666EL}}},{{{0x666EL},{0x666EL}},{{0x666EL},{0x666EL}},{{0x666EL},{0x666EL}}}};
        int32_t l_228 = 0x4B7CAA22L;
        uint32_t l_239 = 0xFF05A5C6L;
        int32_t l_245 = 0x9CF794CBL;
        int32_t l_249 = 0xFDCFAA0CL;
        struct S0 l_316[4] = {{1921,73,4746,2337,30048},{1921,73,4746,2337,30048},{1921,73,4746,2337,30048},{1921,73,4746,2337,30048}};
        int i, j, k;
        if (((((((safe_mod_func_uint32_t_u_u((((safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(l_29, (8L == 0UL))), (safe_rshift_func_uint16_t_u_u((l_218[0] = ((safe_mod_func_uint8_t_u_u(((g_56[0].f0 ^ 0L) || l_34.f2), l_217)) != 1UL)), 15)))) == l_217) | g_199), 0xD7E1829CL)) > g_171) , 0x3EL) | 1UL) != l_169) , 0xBFF38EDEL))
        { 
            int8_t l_238[1];
            int i;
            for (i = 0; i < 1; i++)
                l_238[i] = 1L;
            l_169 = (l_33 = (l_219[1][0][1] , (g_76 < (((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((l_116 = ((g_230 &= (safe_mul_func_uint8_t_u_u(g_76, (((((safe_add_func_int16_t_s_s(0x9401L, l_34.f2)) < l_228) >= 0L) , l_229) , g_14)))) , g_96.f1)), l_231)), g_14)) , l_232[0][0][0]) >= l_218[0]))));
            g_171 = (safe_sub_func_int64_t_s_s(0x8037360924E14BB8LL, (((safe_rshift_func_uint16_t_u_u(((7UL | ((g_237 = g_79) & (g_199 , l_238[0]))) , l_239), g_192)) , g_230) , g_96.f0)));
            if (l_231)
                goto lbl_279;
            g_230 |= (-4L);
        }
        else
        { 
            int64_t l_246 = 1L;
            int32_t l_247 = 5L;
            int32_t l_248 = (-1L);
            for (l_34.f0 = (-11); (l_34.f0 >= 50); l_34.f0 = safe_add_func_uint16_t_u_u(l_34.f0, 1))
            { 
                uint8_t l_242 = 6UL;
                int16_t l_259 = 0xB723L;
                --l_242;
                ++g_251;
                if (l_228)
                    goto lbl_261;
                g_171 = (g_260 &= ((g_230 >= (g_14 ^= (((!((((0x7B06L > ((((safe_lshift_func_uint16_t_u_u((g_96.f1 & ((l_247 ^= (l_169 = (l_248 &= (safe_add_func_uint16_t_u_u((((-1L) < l_218[1]) , g_56[0].f0), 1L))))) && 0xBB9B6F4331D11E76LL)), g_199)) , g_171) == l_246) & 0xB3C9B642A048263ALL)) ^ 4294967295UL) < g_32) ^ g_251)) >= l_259) , g_250))) & 1UL));
            }
lbl_261:
            g_171 &= 1L;
            if ((l_247 | ((((((g_199 >= ((safe_div_func_uint64_t_u_u(((g_250 = (-3L)) | (65535UL >= (-7L))), g_96.f0)) < l_232[1][2][0])) != g_77) >= l_246) ^ g_32) == l_34.f0) & l_248)))
            { 
                int8_t l_266 = 1L;
                int32_t l_273[1][1][1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_273[i][j][k] = 0x1655B2EAL;
                    }
                }
                l_245 = (((safe_rshift_func_int16_t_s_s(l_248, 13)) >= ((g_192 ^= l_246) > (l_249 = l_266))) > 1L);
                l_273[0][0][0] = (safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s(l_29, (g_75 , 0x6C5166A1L))), ((safe_rshift_func_int16_t_s_s(l_266, l_248)) >= l_231)));
                g_230 ^= ((l_219[1][0][1].f0 , (safe_lshift_func_int16_t_s_s(0x0460L, (safe_mul_func_uint16_t_u_u(g_76, 0xE809L))))) <= l_248);
            }
            else
            { 
                return l_229;
            }
        }
lbl_279:
        if (g_171)
            goto lbl_278;
        for (l_29 = 0; (l_29 != 24); l_29 = safe_add_func_int64_t_s_s(l_29, 8))
        { 
            const uint16_t l_284 = 0xE1D1L;
            int32_t l_318 = 1L;
            if ((l_228 != (safe_lshift_func_uint8_t_u_s(l_284, 0))))
            { 
                uint32_t l_285 = 0x6F9420FCL;
                int16_t l_292[5][3][3] = {{{0x1A30L,0xA88DL,0x1A30L},{0x7032L,0xFB1BL,0x9F0FL},{0x4CB5L,0x4CB5L,0x1A30L}},{{0x9F0FL,0xDE0BL,1L},{0x1A30L,0x4CB5L,0xA88DL},{0x9F0FL,9L,0x9F0FL}},{{0xB025L,0x1A30L,0xA88DL},{(-1L),0xFB1BL,1L},{1L,0x1A30L,0x1A30L}},{{1L,9L,(-1L)},{1L,0x4CB5L,1L},{(-1L),0xDE0BL,(-1L)}},{{0xB025L,0xB025L,0x1A30L},{0x9F0FL,0xDE0BL,1L},{0x1A30L,0x4CB5L,0xA88DL}}};
                int i, j, k;
                l_116 ^= 0x18F33F5BL;
                l_292[1][0][2] &= (l_285 , (safe_sub_func_uint16_t_u_u(g_96.f2, (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((g_56[0].f0 >= g_199) == l_231), g_199)), 7UL)))));
            }
            else
            { 
                uint16_t l_302[4][5][5] = {{{0x748AL,0x3610L,3UL,0x3610L,0x748AL},{0x1276L,0UL,0xA395L,0xB633L,0xA395L},{65535UL,0x39B1L,3UL,2UL,1UL},{0UL,0x1276L,0x1276L,0UL,0xA395L},{1UL,2UL,4UL,0x5119L,0x748AL}},{{0xA395L,0x1276L,65526UL,0x382EL,0x382EL},{1UL,0x39B1L,1UL,0x5119L,3UL},{0xB633L,0UL,0x382EL,0UL,0xB633L},{1UL,0x3610L,65535UL,2UL,65535UL},{0xA395L,0xA395L,0x382EL,0xB633L,1UL}},{{1UL,0xDF25L,1UL,0x3610L,65535UL},{0UL,0xB633L,65526UL,65526UL,0xB633L},{65535UL,0xDF25L,4UL,1UL,3UL},{0x1276L,0xA395L,0x1276L,65526UL,0x382EL},{0x748AL,0x3610L,3UL,0x3610L,0x748AL}},{{0x1276L,0UL,0xA395L,0xB633L,0xA395L},{65535UL,0x39B1L,3UL,2UL,1UL},{0UL,0x1276L,0x1276L,0UL,0xA395L},{1UL,2UL,4UL,0x5119L,0x748AL},{0xA395L,0x1276L,65526UL,0x382EL,0x382EL}}};
                int32_t l_303 = 1L;
                int i, j, k;
                l_303 &= ((((g_192 |= l_228) || ((safe_sub_func_uint64_t_u_u((((++g_295) != ((((((safe_lshift_func_uint8_t_u_u(g_237, 5)) ^ g_260) > (((safe_div_func_uint64_t_u_u((l_302[1][2][3] || 0xC69A44A26B199A5BLL), g_96.f0)) >= l_302[0][2][2]) == l_217)) > g_96.f1) >= 255UL) >= g_250)) && l_116), l_219[1][0][1].f0)) , l_284)) | 1UL) > g_230);
            }
            if (((safe_mul_func_int8_t_s_s((g_96.f1 & (((((safe_div_func_uint8_t_u_u(((((safe_mul_func_uint8_t_u_u(l_284, ((g_237 & (((((0xF6L & g_96.f1) != g_32) ^ g_230) == g_230) , g_75)) <= l_217))) || g_96.f0) != g_32) | l_228), l_284)) == g_76) < l_239) & 0xF7A0L) , g_96.f0)), 0xEEL)) | g_96.f1))
            { 
                uint32_t l_310 = 0x61AEE968L;
                l_310 &= (-3L);
                if (g_96.f1)
                    continue;
            }
            else
            { 
                union U2 l_317[5][5] = {{{1UL},{0x4855E6FC1642C3FELL},{1UL},{0x4855E6FC1642C3FELL},{1UL}},{{0xCC31C5965C827826LL},{0xCC31C5965C827826LL},{0xCC31C5965C827826LL},{0xCC31C5965C827826LL},{0xCC31C5965C827826LL}},{{1UL},{0x4855E6FC1642C3FELL},{1UL},{0x4855E6FC1642C3FELL},{1UL}},{{0xCC31C5965C827826LL},{0xCC31C5965C827826LL},{0xCC31C5965C827826LL},{0xCC31C5965C827826LL},{0xCC31C5965C827826LL}},{{1UL},{0x4855E6FC1642C3FELL},{1UL},{0x4855E6FC1642C3FELL},{1UL}}};
                int i, j;
                g_230 = ((safe_lshift_func_int8_t_s_s(g_76, 7)) , 0xB7600657L);
                l_318 = ((l_313 , (((safe_rshift_func_uint16_t_u_s(g_250, 10)) > (l_316[2] , ((l_317[1][1] , l_232[0][4][0]) <= g_295))) , g_171)) != 0xA92DL);
                l_169 = l_318;
            }
        }
    }
    return g_56[0];
}



static int8_t  func_4(int32_t  p_5, uint32_t  p_6, int64_t  p_7, uint8_t  p_8)
{ 
    return p_6;
}



static int32_t  func_9(const uint32_t  p_10, int16_t  p_11, int8_t  p_12, union U1  p_13)
{ 
    uint32_t l_89[5];
    int32_t l_95[4][1][3];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_89[i] = 0x09E5C5CBL;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
                l_95[i][j][k] = 0xCCF6B01AL;
        }
    }
    if (g_32)
    { 
        return g_56[0].f0;
    }
    else
    { 
        for (p_12 = (-13); (p_12 != (-13)); p_12 = safe_add_func_int64_t_s_s(p_12, 4))
        { 
            int32_t l_88 = 8L;
            g_14 = ((safe_div_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((p_10 > (((((l_88 == ((4294967295UL | 0x1499195FL) || 1UL)) > l_88) == g_75) <= p_13.f0) > g_77)), g_56[0].f0)), 252UL)) | g_76);
        }
    }
    if (l_89[1])
    { 
        int32_t l_99 = 1L;
        g_14 = (safe_mod_func_uint16_t_u_u((!(safe_mul_func_uint8_t_u_u((p_11 | ((l_95[1][0][2] &= g_75) >= ((g_96 , ((safe_add_func_int8_t_s_s(((g_56[0] , 0xB549FED5CAB5B233LL) && l_99), g_56[0].f0)) >= p_10)) > 4UL))), l_99))), 0xE119L));
        g_14 = g_79;
    }
    else
    { 
        uint64_t l_104 = 0xE7E01DFB5DA3FE18LL;
        int32_t l_108 = 0x8DEE43C4L;
        for (p_13.f0 = 0; (p_13.f0 <= 0); p_13.f0 += 1)
        { 
            if ((p_11 , 0x2E1657FBL))
            { 
                uint64_t l_113 = 0x15BDED785604A185LL;
                l_108 = (((safe_div_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(p_13.f0, l_104)) != (safe_add_func_int32_t_s_s(((p_12 &= (!g_96.f2)) == g_79), g_32))), 0x6BL)) && g_32) == 0x791C840D7AA6B01FLL);
                l_113 |= (0xCD66DA80F5DD30C4LL != ((p_11 | (safe_mod_func_int64_t_s_s((-5L), (((safe_div_func_uint8_t_u_u(l_108, 0x51L)) && 1L) || p_11)))) >= p_10));
                if (l_108)
                    continue;
            }
            else
            { 
                g_14 = (safe_div_func_uint8_t_u_u(p_10, 0xABL));
            }
            g_14 = (-6L);
        }
        return g_96.f2;
    }
    return g_76;
}



static int16_t  func_15(int32_t  p_16, union U2  p_17, int16_t  p_18, int64_t  p_19, uint16_t  p_20)
{ 
    union U1 l_37 = {0xFD99L};
    int32_t l_39 = 0x8D535DD2L;
    int32_t l_40 = 1L;
    int32_t l_70 = 5L;
lbl_47:
    if (((p_19 & 0x051DD2E91C84132DLL) && (l_40 &= ((safe_rshift_func_uint16_t_u_s(((l_39 = ((p_18 ^= (l_37 , (((safe_unary_minus_func_int8_t_s(p_17.f1)) < 0L) | 255UL))) & g_32)) && g_32), l_37.f0)) , 0x0A3418EB0BADCAB3LL))))
    { 
        l_40 = (-1L);
    }
    else
    { 
        return p_17.f1;
    }
    for (l_40 = 0; (l_40 <= (-13)); l_40 = safe_sub_func_int64_t_s_s(l_40, 7))
    { 
        int32_t l_43[5][2][4] = {{{0xDB6377F0L,0xBA10F40BL,0xF6679856L,(-1L)},{(-1L),0x245597EEL,0x245597EEL,(-1L)}},{{(-1L),0x061FA46BL,0xF6679856L,0x42EA6AE2L},{0xDB6377F0L,(-1L),0x8FF05C8AL,0x0C1731D4L}},{{(-1L),0xDBB9A2F7L,(-1L),0x0C1731D4L},{0x8FF05C8AL,(-1L),0xDB6377F0L,0x42EA6AE2L}},{{0xF6679856L,0x061FA46BL,(-1L),(-1L)},{0x245597EEL,0x0C1731D4L,0x245597EEL,0x061FA46BL}},{{(-1L),0x8FF05C8AL,0xDBB9A2F7L,(-1L)},{0xF6679856L,0xDBB9A2F7L,0x061FA46BL,0xDBB9A2F7L}}};
        int8_t l_74 = 1L;
        int i, j, k;
        l_43[4][0][0] &= (((-3L) == 0x9038991F32AFCB06LL) <= p_17.f2);
        for (p_19 = 0; (p_19 <= 1); p_19 += 1)
        { 
            uint32_t l_44 = 4294967293UL;
            if (p_18)
                break;
            l_39 = 1L;
            ++l_44;
            for (l_37.f0 = 0; (l_37.f0 <= 1); l_37.f0 += 1)
            { 
                uint8_t l_57 = 0UL;
                int32_t l_58 = 0xC425F8E1L;
                int32_t l_71[5] = {0xBAB22BEBL,0xBAB22BEBL,0xBAB22BEBL,0xBAB22BEBL,0xBAB22BEBL};
                int i, j, k;
                if (g_32)
                    goto lbl_47;
                l_43[(l_37.f0 + 3)][l_37.f0][(l_37.f0 + 1)] = (safe_div_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u(g_32, (l_39 = (l_58 = (safe_mod_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(((g_56[0] , l_43[3][0][2]) & l_43[4][0][0]), 0L)) & p_16), l_57)))))) > 0x9CC5L), 0x9B5F814D19633EF2LL));
                l_71[1] |= (l_70 = (l_43[(l_37.f0 + 1)][p_19][p_19] = ((l_39 = p_19) | ((l_58 = ((safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((safe_sub_func_int64_t_s_s((-1L), (((safe_unary_minus_func_int64_t_s((safe_div_func_int16_t_s_s((8UL && (g_14 == 0UL)), p_17.f1)))) ^ p_20) & (-1L)))) | 1L), l_40)), g_56[0].f0)) != p_17.f2)) < g_56[0].f0))));
            }
        }
        for (p_17.f0 = 0; (p_17.f0 != 59); p_17.f0++)
        { 
            int32_t l_78 = 0xC2001377L;
            g_76 ^= (((l_70 >= ((g_75 = (((g_56[0].f0 && ((p_17.f2 >= l_74) != l_40)) , 0x91F928D85E26160DLL) , g_14)) , g_32)) || g_14) ^ p_17.f0);
            if (p_17.f2)
                break;
            --g_79;
        }
    }
    return g_14;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_56[i].f0, "g_56[i].f0", print_hash_value);

    }
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_96.f0, "g_96.f0", print_hash_value);
    transparent_crc(g_96.f1, "g_96.f1", print_hash_value);
    transparent_crc(g_96.f2, "g_96.f2", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
