// SPDX-License-Identifier: MIT
// cctest_csmith_7c161fe5.c --- cctest case csmith_7c161fe5 (csmith seed 2081824741)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb7a19826 */

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

// Options:   -s 2081824741 -o /tmp/csmith_gen_fl0zfn63/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int64_t  f0;
   const uint64_t  f1;
};

union U1 {
   uint8_t  f0;
   struct S0  f1;
   int16_t  f2;
};


static int32_t g_7 = 0x3D9B9503L;
static uint32_t g_24[2][1][1] = {{{18446744073709551613UL}},{{18446744073709551613UL}}};
static int32_t g_27 = 0x0254F8D3L;
static uint32_t g_57 = 18446744073709551615UL;
static struct S0 g_60[3][3] = {{{0x04811E3584F79AABLL,0x6635492233FFCD55LL},{0x04811E3584F79AABLL,0x6635492233FFCD55LL},{0x04811E3584F79AABLL,0x6635492233FFCD55LL}},{{6L,18446744073709551615UL},{0x7F359A1248F7C4FBLL,5UL},{6L,18446744073709551615UL}},{{0x04811E3584F79AABLL,0x6635492233FFCD55LL},{0x04811E3584F79AABLL,0x6635492233FFCD55LL},{0x04811E3584F79AABLL,0x6635492233FFCD55LL}}};
static int16_t g_62 = (-1L);
static int32_t g_64 = 1L;
static uint8_t g_68 = 0x2DL;
static int32_t g_86 = 0x20850DA4L;
static int16_t g_88 = 0xE63FL;
static uint64_t g_128 = 3UL;
static int64_t g_129 = 0x406C9851B6DC0836LL;
static uint32_t g_130 = 1UL;
static int32_t g_160[3] = {0xE286AF2FL,0xE286AF2FL,0xE286AF2FL};
static uint8_t g_161[1][3] = {{0xF7L,0xF7L,0xF7L}};
static int32_t g_167 = 2L;
static int64_t g_169 = (-5L);
static int16_t g_170[4] = {1L,1L,1L,1L};
static uint32_t g_171 = 18446744073709551615UL;
static int32_t g_176 = 0x0C8DDAE6L;
static union U1 g_188[3] = {{0x47L},{0x47L},{0x47L}};
static int32_t g_227[3] = {0x55F038DDL,0x55F038DDL,0x55F038DDL};



static struct S0  func_1(void);
static const int16_t  func_5(uint32_t  p_6);
static int32_t  func_16(uint32_t  p_17);
static int32_t  func_30(int32_t  p_31, int8_t  p_32, int32_t  p_33, uint32_t  p_34);




static struct S0  func_1(void)
{ 
    int16_t l_2 = 0xCAD2L;
    int32_t l_223 = 0xF7EC8282L;
    int32_t l_225[1];
    int16_t l_230 = 0x02F6L;
    int32_t l_257[3][1][1];
    int32_t l_258 = 1L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_225[i] = 1L;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_257[i][j][k] = 8L;
        }
    }
    if (((((l_223 = ((l_2 & (g_176 = (safe_lshift_func_int16_t_s_s(func_5(g_7), 10)))) != ((((safe_add_func_int8_t_s_s(0x8CL, l_2)) | g_60[2][1].f0) && g_170[2]) , 0x2396L))) >= l_2) , 18446744073709551611UL) != g_60[2][1].f0))
    { 
        int32_t l_224 = 0x721655C0L;
        int32_t l_226 = 0x115645DEL;
        int32_t l_228 = (-1L);
        int32_t l_229[2];
        uint32_t l_231[2];
        int i;
        for (i = 0; i < 2; i++)
            l_229[i] = (-5L);
        for (i = 0; i < 2; i++)
            l_231[i] = 4UL;
        l_231[1]++;
        g_7 = l_228;
    }
    else
    { 
        uint32_t l_241 = 2UL;
        int32_t l_242[5][1][3] = {{{0xADE801ABL,0xB4B204B1L,0xADE801ABL}},{{0x297967E3L,0x297967E3L,0x297967E3L}},{{0xADE801ABL,0xB4B204B1L,0xADE801ABL}},{{0x297967E3L,0x297967E3L,0x297967E3L}},{{0xADE801ABL,0xB4B204B1L,0xADE801ABL}}};
        int8_t l_243 = 0xA0L;
        int i, j, k;
        for (l_2 = 0; (l_2 <= 0); l_2 += 1)
        { 
            for (g_68 = 0; (g_68 <= 0); g_68 += 1)
            { 
                uint64_t l_240 = 2UL;
                int i;
                if (l_225[l_2])
                    break;
                l_242[1][0][0] = ((safe_sub_func_int8_t_s_s(((((g_169 = (safe_rshift_func_uint16_t_u_s(g_176, 8))) , (safe_rshift_func_int8_t_s_u((l_240 &= 0x3EL), 5))) && 0x0EL) >= (((g_27 <= 1UL) < 255UL) | 0L)), l_241)) <= 0x4FL);
                g_167 = g_161[0][2];
            }
            for (l_241 = 0; (l_241 <= 0); l_241 += 1)
            { 
                g_27 = ((g_130 |= l_223) && l_243);
                if (l_223)
                    goto lbl_259;
            }
        }
        for (g_86 = 0; (g_86 < (-20)); g_86 = safe_sub_func_uint64_t_u_u(g_86, 2))
        { 
            int16_t l_246 = (-1L);
            l_246 |= g_24[0][0][0];
        }
    }
lbl_259:
    g_227[1] &= (l_258 ^= (safe_div_func_int8_t_s_s(((l_257[2][0][0] &= ((g_60[1][0] , (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(l_223, 5)) > (safe_mod_func_uint16_t_u_u(l_225[0], (safe_rshift_func_int16_t_s_u(l_230, g_170[0]))))), g_27))) < (-1L))) & (-1L)), g_169)));
    g_227[0] &= (g_62 ^ l_225[0]);
    return g_60[0][0];
}



static const int16_t  func_5(uint32_t  p_6)
{ 
    int32_t l_11 = (-1L);
    int32_t l_197[1][2][2] = {{{(-8L),(-8L)},{(-8L),(-8L)}}};
    uint16_t l_220 = 1UL;
    int i, j, k;
    if (p_6)
    { 
        uint8_t l_8 = 0x5CL;
        --l_8;
        g_7 = ((((0xB3BFL | 8L) & p_6) && p_6) == l_8);
    }
    else
    { 
        int32_t l_196 = 0x7990D590L;
        int32_t l_202 = 0L;
        g_7 = (l_11 = p_6);
        l_11 = g_7;
        for (g_7 = 0; (g_7 > (-16)); g_7--)
        { 
            uint32_t l_189 = 0x4898B4B1L;
            int32_t l_201 = 0L;
            int32_t l_203 = 0x1964D514L;
            int32_t l_204 = (-10L);
            uint8_t l_205 = 0xDAL;
            l_189 ^= ((safe_rshift_func_int16_t_s_u(((-7L) > p_6), 8)) , func_16(g_7));
            l_197[0][0][0] = (g_62 ^ ((safe_add_func_uint8_t_u_u((((((safe_rshift_func_int16_t_s_u((g_188[0] , (l_11 = ((g_128 = (p_6 == (safe_rshift_func_uint8_t_u_u(g_129, 5)))) != l_11))), l_189)) >= p_6) , g_60[2][1].f1) && 1UL) != p_6), l_196)) <= 0x21D4F9B3L));
            for (l_196 = 27; (l_196 < (-14)); --l_196)
            { 
                int8_t l_200 = 0xCDL;
                l_205--;
                l_202 ^= p_6;
            }
        }
    }
    g_167 = (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((((g_60[2][1].f1 != (safe_sub_func_int64_t_s_s(l_11, (safe_div_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((l_197[0][0][0] = (l_220 || (l_197[0][0][0] < g_68))), (-7L))), p_6))))) < p_6) < p_6), p_6)) >= 0x0A3BB4AA2B9E0A36LL), p_6)), p_6));
    return g_160[0];
}



static int32_t  func_16(uint32_t  p_17)
{ 
    uint32_t l_21[3][2][1];
    int32_t l_37[4][5][4] = {{{0x5DC32C75L,0x5DC32C75L,(-1L),0x5DC32C75L},{0x5DC32C75L,0x89D693CEL,0x89D693CEL,0x5DC32C75L},{0x89D693CEL,0x5DC32C75L,0x89D693CEL,0x89D693CEL},{0x5DC32C75L,0x5DC32C75L,(-1L),0x5DC32C75L},{0x5DC32C75L,0x89D693CEL,0x89D693CEL,0x5DC32C75L}},{{0x89D693CEL,0x5DC32C75L,0x89D693CEL,0x89D693CEL},{0x5DC32C75L,0x5DC32C75L,(-1L),0x5DC32C75L},{0x5DC32C75L,0x89D693CEL,0x89D693CEL,0x5DC32C75L},{0x89D693CEL,0x5DC32C75L,0x89D693CEL,0x89D693CEL},{0x5DC32C75L,0x5DC32C75L,(-1L),0x5DC32C75L}},{{0x5DC32C75L,0x89D693CEL,0x89D693CEL,0x5DC32C75L},{0x89D693CEL,0x5DC32C75L,0x89D693CEL,0x89D693CEL},{0x5DC32C75L,0x5DC32C75L,(-1L),0x5DC32C75L},{0x5DC32C75L,0x89D693CEL,0x89D693CEL,0x5DC32C75L},{0x89D693CEL,0x5DC32C75L,0x89D693CEL,0x89D693CEL}},{{0x5DC32C75L,0x5DC32C75L,(-1L),0x5DC32C75L},{0x5DC32C75L,0x89D693CEL,0x89D693CEL,0x5DC32C75L},{0x89D693CEL,0x5DC32C75L,0x89D693CEL,0x89D693CEL},{0x5DC32C75L,0x5DC32C75L,(-1L),0x5DC32C75L},{0x5DC32C75L,0x89D693CEL,0x89D693CEL,0x5DC32C75L}}};
    struct S0 l_183[1][5][1] = {{{{0x4F0E318C2080768ELL,18446744073709551615UL}},{{0x4F0E318C2080768ELL,18446744073709551615UL}},{{0x4F0E318C2080768ELL,18446744073709551615UL}},{{0x4F0E318C2080768ELL,18446744073709551615UL}},{{0x4F0E318C2080768ELL,18446744073709551615UL}}}};
    int32_t l_187 = 0x6318FC34L;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_21[i][j][k] = 0x5604491DL;
        }
    }
    for (p_17 = 0; (p_17 <= 50); p_17 = safe_add_func_uint8_t_u_u(p_17, 4))
    { 
        const int8_t l_22 = (-3L);
        int32_t l_23 = (-1L);
        int32_t l_162 = (-9L);
        g_24[0][0][0] &= ((l_23 &= ((g_7 != (+((l_21[2][1][0] |= ((p_17 && p_17) , 0L)) | g_7))) < l_22)) & g_7);
        for (l_23 = 0; (l_23 < (-17)); l_23 = safe_sub_func_int8_t_s_s(l_23, 1))
        { 
            for (g_27 = (-15); (g_27 == (-3)); g_27 = safe_add_func_int8_t_s_s(g_27, 2))
            { 
                g_161[0][2] = func_30((l_37[2][2][0] = (((safe_rshift_func_int8_t_s_s((g_24[0][0][0] & (g_27 | (g_27 < g_24[1][0][0]))), 5)) , 0x64F2CA12L) | l_22)), g_24[0][0][0], l_21[2][1][0], p_17);
                return p_17;
            }
            l_162 = l_23;
        }
        for (g_57 = 0; (g_57 <= 3); g_57 += 1)
        { 
            uint32_t l_163 = 1UL;
            int32_t l_168[3][5] = {{(-1L),1L,1L,(-1L),1L},{0L,0L,0x8246A680L,0L,0L},{1L,(-1L),1L,1L,(-1L)}};
            int i, j;
            if (l_163)
            { 
                uint32_t l_166[4][5] = {{0UL,0x63ED81A4L,0x63ED81A4L,0UL,0x63ED81A4L},{0UL,0UL,18446744073709551610UL,0UL,0UL},{0x63ED81A4L,0UL,0x63ED81A4L,0x63ED81A4L,0UL},{0UL,0x63ED81A4L,0x63ED81A4L,0UL,0x63ED81A4L}};
                int i, j;
                g_27 = (safe_sub_func_int16_t_s_s(0xA001L, 0x0824L));
                return l_166[1][0];
            }
            else
            { 
                g_171++;
                g_167 ^= ((((safe_mul_func_int16_t_s_s(0L, 1UL)) > g_7) == (0xF4511BC6CB3F44D4LL || 1UL)) != g_176);
            }
            l_37[2][2][0] = (safe_add_func_int8_t_s_s(0xE7L, (safe_sub_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((l_22 , 0xEAEF97A493877009LL), (l_183[0][0][0] , l_21[2][1][0]))), 0xEEL))));
            for (g_68 = 0; (g_68 <= 3); g_68 += 1)
            { 
                uint32_t l_184 = 4294967295UL;
                int i, j, k;
                l_184++;
                l_187 &= l_37[g_57][g_57][g_57];
                l_168[0][4] = (g_188[0] , l_37[g_68][g_57][g_68]);
            }
        }
    }
    return g_188[0].f0;
}



static int32_t  func_30(int32_t  p_31, int8_t  p_32, int32_t  p_33, uint32_t  p_34)
{ 
    int32_t l_40 = 0xC0F4FD1AL;
    int32_t l_89 = 0x280D01B1L;
    uint64_t l_159 = 0xDF16FFCA76E874D0LL;
    for (p_33 = (-18); (p_33 > (-28)); p_33--)
    { 
        l_40 = l_40;
        return p_32;
    }
    for (p_32 = 20; (p_32 < 13); p_32 = safe_sub_func_int32_t_s_s(p_32, 2))
    { 
        int32_t l_61[4][5] = {{2L,2L,0xE7339AA8L,0xD1BBA4BAL,0xD1BBA4BAL},{0L,2L,0L,0L,2L},{0xD1BBA4BAL,0L,0L,0xD1BBA4BAL,0L},{0xD1BBA4BAL,0xD1BBA4BAL,0xE7339AA8L,2L,2L}};
        int32_t l_63 = 0x5676063AL;
        int32_t l_157 = 0x87015693L;
        int i, j;
        if ((safe_div_func_uint64_t_u_u((p_34 >= ((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((((g_24[1][0][0] > (p_34 < 0x1DL)) ^ g_7) == 5L) & p_33), p_32)), p_33)) , p_31)), l_40)))
        { 
            uint32_t l_75 = 4294967294UL;
            const int32_t l_78 = 0x510C19EDL;
            uint32_t l_85 = 0x279EA335L;
            if (p_33)
                break;
            if (p_31)
            { 
                int64_t l_65 = 9L;
                int32_t l_66 = (-1L);
                int32_t l_67 = 0x7A6BAE6AL;
                l_65 = (safe_mul_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s((g_64 = (l_63 = (safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((p_31 > (g_57 = g_24[1][0][0])), (g_62 = ((p_33 ^ ((g_60[2][1] , l_61[1][2]) > p_31)) , 0x0536L)))), g_27)))), 2)) , 0xF411L) != 65535UL), l_61[1][2]));
                g_68--;
                if (g_68)
                    continue;
            }
            else
            { 
                uint32_t l_87[5] = {0x4CBEB01BL,0x4CBEB01BL,0x4CBEB01BL,0x4CBEB01BL,0x4CBEB01BL};
                int i;
                l_63 = ((+1UL) ^ (safe_add_func_uint16_t_u_u((l_61[2][0] == (l_75 |= (g_62 = (+l_61[1][2])))), (safe_mod_func_int16_t_s_s((g_24[0][0][0] > l_78), p_32)))));
                l_89 = (l_40 ^= ((g_60[2][1].f1 , (safe_div_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((((p_33 || (l_85 >= (g_68 < g_86))) ^ 1L) , g_68), l_87[0])), p_34))) == g_88));
            }
        }
        else
        { 
            uint8_t l_114 = 0xBBL;
            l_40 = ((safe_unary_minus_func_int64_t_s((safe_rshift_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((0x1C45DBD19AA3B2A5LL & (safe_add_func_uint32_t_u_u((0x875F205D52AEB3C2LL == (safe_add_func_int8_t_s_s((safe_div_func_uint64_t_u_u(((safe_add_func_int8_t_s_s((+p_31), (safe_div_func_uint64_t_u_u((safe_mod_func_int32_t_s_s(((safe_add_func_int16_t_s_s(l_61[1][2], g_24[1][0][0])) >= l_114), g_60[2][1].f0)), p_33)))) != 0xDAE1B46CB947F03FLL), l_61[2][0])), g_57))), g_27))), 2)), p_32)), l_61[3][4])) , 0xB9E3L), g_60[2][1].f1)))) == 7L);
            if (((g_24[0][0][0] & (((l_40 = (0x2DCFL | (p_31 <= ((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((l_63 = ((((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(g_62, l_61[1][2])), l_89)) >= l_63) && 1L) || g_60[2][1].f1)) != 1L), 2)), 0UL)) || g_88)))) || g_7) <= 0x9C2BC1C087C3A5C4LL)) , l_40))
            { 
                g_129 = (!((safe_mod_func_uint64_t_u_u(0xFD083AED21B86E86LL, p_34)) <= (g_128 = ((safe_mod_func_uint16_t_u_u(((0UL == (l_114 > p_33)) || p_34), 3L)) >= 253UL))));
                if (p_31)
                    continue;
            }
            else
            { 
                g_130--;
                l_63 = (0x9788L ^ (safe_mod_func_int64_t_s_s(((p_34 <= l_61[1][3]) || ((safe_lshift_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s(0x1199L, p_34)) ^ l_40) < p_32), g_88)) > p_33)), g_64)));
            }
            for (g_64 = 0; (g_64 > (-18)); --g_64)
            { 
                uint32_t l_156 = 0x1DEC27F6L;
                int32_t l_158 = (-4L);
                l_63 = p_34;
                g_160[2] = ((g_68 = (safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u((+(safe_sub_func_int16_t_s_s(((((((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((l_157 = (safe_mul_func_uint8_t_u_u(0UL, (safe_div_func_int64_t_s_s(g_129, l_156))))), 5)), g_60[2][1].f0)) != l_61[0][1]) == 0x54225D93L) ^ p_31) > (-1L)) ^ l_158), p_34))), l_114)), p_34))) >= l_159);
            }
        }
    }
    return g_88;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_24[i][j][k], "g_24[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_60[i][j].f0, "g_60[i][j].f0", print_hash_value);
            transparent_crc(g_60[i][j].f1, "g_60[i][j].f1", print_hash_value);

        }
    }
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_160[i], "g_160[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_161[i][j], "g_161[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_170[i], "g_170[i]", print_hash_value);

    }
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_188[i].f0, "g_188[i].f0", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_227[i], "g_227[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
