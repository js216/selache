// SPDX-License-Identifier: MIT
// cctest_csmith_f9929b87.c --- cctest case csmith_f9929b87 (csmith seed 4187134855)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa439f809 */

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

// Options:   -s 4187134855 -o /tmp/csmith_gen_qs2pfghn/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint8_t  f0;
};

union U1 {
   int32_t  f0;
   int16_t  f1;
   int16_t  f2;
};

union U2 {
   int8_t * const  f0;
   struct S0  f1;
};


static struct S0 g_2 = {252UL};
static int32_t g_5 = 2L;
static uint32_t g_7 = 0x9D982735L;
static int8_t g_21 = 1L;
static int8_t *g_20 = &g_21;
static uint32_t g_38 = 0x91445A15L;
static union U2 g_96 = {0};
static uint32_t g_101 = 4294967295UL;
static int32_t g_103 = 0xB8A71A37L;
static int32_t g_105 = 0L;
static int32_t * const g_104 = &g_105;
static struct S0 *g_107 = &g_2;
static struct S0 **g_106 = &g_107;
static int16_t g_108[6] = {0x306AL,0x306AL,0x306AL,0x306AL,0x306AL,0x306AL};
static int32_t *g_113[1][6] = {{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5}};
static int16_t g_138 = 0x9C98L;
static uint64_t g_140 = 18446744073709551615UL;
static uint64_t g_155 = 0xBB118774359D1E7CLL;
static uint64_t *g_154 = &g_155;
static uint16_t g_170 = 0xA7A8L;
static uint32_t g_179 = 0x9BD31FF7L;
static union U2 *g_181 = &g_96;
static union U2 ** const g_180[4] = {&g_181,&g_181,&g_181,&g_181};
static int64_t g_196 = (-8L);
static int16_t g_213 = 1L;
static union U1 g_253 = {0x1E9F69F1L};
static union U1 *g_252 = &g_253;
static int16_t *g_262 = &g_213;
static int16_t **g_261[5][1] = {{&g_262},{&g_262},{&g_262},{&g_262},{&g_262}};
static int16_t g_303[3] = {0xF327L,0xF327L,0xF327L};
static int32_t *g_315 = (void*)0;
static uint32_t *g_329 = (void*)0;
static uint32_t **g_328[7] = {&g_329,&g_329,&g_329,&g_329,&g_329,&g_329,&g_329};
static int32_t **g_333[3][3] = {{(void*)0,(void*)0,(void*)0},{&g_315,&g_315,&g_315},{(void*)0,(void*)0,(void*)0}};
static int32_t ***g_332 = &g_333[1][0];
static int32_t ****g_331 = &g_332;
static int32_t *****g_330 = &g_331;
static uint32_t ** const *g_360 = &g_328[6];
static uint32_t ** const **g_359 = &g_360;
static int64_t g_396[6][4] = {{0xDE4D5F4E69EC9FC8LL,(-5L),0x78EA64290FCF49B0LL,0x78EA64290FCF49B0LL},{0x39CC4C8BBC05D2A4LL,0x39CC4C8BBC05D2A4LL,(-1L),(-5L)},{0x78EA64290FCF49B0LL,0x39CC4C8BBC05D2A4LL,0x78EA64290FCF49B0LL,(-1L)},{0x78EA64290FCF49B0LL,(-1L),(-1L),0x78EA64290FCF49B0LL},{0xDE4D5F4E69EC9FC8LL,(-1L),(-5L),(-1L)},{(-1L),0x39CC4C8BBC05D2A4LL,(-5L),(-5L)}};
static union U2 *g_433 = &g_96;
static uint32_t g_462 = 0x7E40716CL;
static uint32_t g_501 = 3UL;
static int32_t *g_556 = &g_103;
static uint8_t g_600 = 1UL;
static int8_t g_649 = 0L;
static int8_t g_709 = 0xD8L;
static int32_t *g_729 = &g_5;
static int32_t ** const g_728 = &g_729;
static int32_t ** const *g_727 = &g_728;
static int32_t g_767 = (-1L);
static uint8_t g_815 = 8UL;
static uint32_t g_910 = 0xA7FB2A29L;
static int64_t g_947 = 0x2015AC1BFB8F261ELL;
static uint64_t ***g_985 = (void*)0;
static uint8_t g_1024 = 1UL;
static int32_t *g_1084 = &g_103;



static uint64_t  func_1(void);
static union U1  func_22(int32_t * p_23, uint32_t  p_24);
static int32_t  func_44(struct S0  p_45);
static struct S0  func_46(union U1  p_47, int64_t  p_48, union U2  p_49, int8_t * p_50, int8_t * p_51);
static int32_t * func_58(int32_t * p_59, int32_t  p_60, uint32_t  p_61, struct S0 * p_62);
static int32_t * func_65(int32_t * p_66, struct S0 * p_67, const int32_t * p_68, uint32_t  p_69, int32_t  p_70);
static uint32_t  func_77(int32_t  p_78, int32_t * const  p_79, struct S0 ** p_80);
static uint8_t  func_86(int16_t  p_87);




static uint64_t  func_1(void)
{ 
    struct S0 *l_3 = &g_2;
    int32_t *l_4 = &g_5;
    int32_t *l_6[4][6][2] = {{{&g_5,&g_5},{&g_5,&g_5},{&g_5,&g_5},{&g_5,&g_5},{&g_5,&g_5},{&g_5,&g_5}},{{&g_5,&g_5},{&g_5,&g_5},{&g_5,&g_5},{&g_5,&g_5},{&g_5,&g_5},{&g_5,&g_5}},{{&g_5,&g_5},{&g_5,&g_5},{&g_5,&g_5},{&g_5,&g_5},{&g_5,&g_5},{&g_5,&g_5}},{{&g_5,&g_5},{&g_5,&g_5},{&g_5,&g_5},{&g_5,&g_5},{&g_5,&g_5},{&g_5,&g_5}}};
    uint32_t l_816[4][4] = {{2UL,2UL,4294967295UL,2UL},{2UL,1UL,1UL,2UL},{1UL,2UL,1UL,1UL},{2UL,2UL,4294967295UL,2UL}};
    uint32_t **l_822 = &g_329;
    int8_t **l_856 = &g_20;
    const union U1 l_883 = {3L};
    int8_t l_905 = 0x42L;
    union U2 **l_908 = (void*)0;
    int16_t ***l_909 = &g_261[2][0];
    uint8_t *l_927 = &g_815;
    uint64_t l_948 = 0x71B54ED3593BA469LL;
    uint8_t l_1003 = 0xD2L;
    int32_t *l_1037 = &g_767;
    union U1 *l_1048 = &g_253;
    uint64_t l_1081[7] = {18446744073709551612UL,7UL,7UL,18446744073709551612UL,7UL,7UL,18446744073709551612UL};
    uint32_t l_1082 = 4294967294UL;
    uint32_t l_1083 = 0UL;
    uint16_t l_1092[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1092[i] = 0x8FEDL;
    (*l_3) = g_2;
    --g_7;
    (*l_4) ^= g_2.f0;
    for (g_2.f0 = (-24); (g_2.f0 >= 54); ++g_2.f0)
    { 
        int16_t l_12 = 1L;
        int32_t l_13 = 0x37A30B91L;
        int32_t l_14 = 0xE9D070FEL;
        int32_t l_15 = 1L;
        uint64_t l_16 = 18446744073709551613UL;
        struct S0 l_19[3][3][3] = {{{{0xCBL},{0x2CL},{0xCBL}},{{4UL},{5UL},{4UL}},{{0xCBL},{0x2CL},{0xCBL}}},{{{4UL},{5UL},{4UL}},{{0xCBL},{0x2CL},{0xCBL}},{{4UL},{5UL},{4UL}}},{{{0xCBL},{0x2CL},{0xCBL}},{{4UL},{5UL},{4UL}},{{0xCBL},{0x2CL},{0xCBL}}}};
        uint32_t ***l_812[7][6][2];
        union U2 *l_819 = &g_96;
        uint32_t **l_821 = (void*)0;
        union U2 **l_921 = &g_181;
        union U2 *** const l_920[5] = {&l_921,&l_921,&l_921,&l_921,&l_921};
        union U2 *** const *l_919 = &l_920[4];
        int32_t *l_976 = (void*)0;
        int32_t l_1040 = (-8L);
        int32_t l_1042 = 0xA39B9592L;
        uint8_t l_1051 = 255UL;
        uint64_t l_1060[1][3];
        uint64_t l_1073 = 18446744073709551615UL;
        int64_t *l_1076[3];
        int32_t * const l_1093 = &g_5;
        int32_t **l_1094 = &l_6[0][5][1];
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 6; j++)
            {
                for (k = 0; k < 2; k++)
                    l_812[i][j][k] = &g_328[6];
            }
        }
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_1060[i][j] = 0x0E7D8EAA850E57FDLL;
        }
        for (i = 0; i < 3; i++)
            l_1076[i] = (void*)0;
        --l_16;
        l_19[2][0][1] = g_2;
    }
    return (*l_4);
}



static union U1  func_22(int32_t * p_23, uint32_t  p_24)
{ 
    uint32_t l_31 = 0UL;
    int32_t l_721 = 0x84405851L;
    uint16_t l_723[7] = {0xADBDL,1UL,1UL,0xADBDL,1UL,1UL,0xADBDL};
    int32_t ** const *l_726 = &g_333[0][1];
    int32_t l_751 = (-1L);
    int32_t l_752 = (-1L);
    int16_t l_755 = 0L;
    int32_t l_757 = (-9L);
    int32_t l_764 = 0x3A836A2CL;
    int32_t l_766[7];
    uint32_t l_769[4][6][1];
    int8_t **l_773 = (void*)0;
    int8_t ***l_772 = &l_773;
    union U1 *l_778 = (void*)0;
    union U2 * const *l_801 = &g_433;
    union U2 * const **l_800 = &l_801;
    union U1 l_807 = {0x1508361FL};
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_766[i] = 0xA8BF8FA2L;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
                l_769[i][j][k] = 0x0620D4DEL;
        }
    }
    for (g_7 = 0; (g_7 >= 26); ++g_7)
    { 
        union U1 l_52 = {1L};
        union U2 l_707[1][4][6] = {{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}}};
        int32_t l_717 = 1L;
        uint64_t *l_733 = &g_155;
        int32_t l_753 = 0x80AB8B10L;
        int32_t l_754 = (-6L);
        int32_t l_756 = (-1L);
        int32_t l_758 = 0L;
        int32_t l_760 = 0L;
        int32_t l_761 = (-1L);
        int32_t l_762 = (-1L);
        int32_t l_763 = 0x24C00A9AL;
        int32_t l_765[4][2] = {{(-7L),(-7L)},{(-7L),(-7L)},{(-7L),(-7L)},{(-7L),(-7L)}};
        int i, j, k;
        (*p_23) &= (safe_sub_func_uint16_t_u_u(0x5C66L, ((safe_lshift_func_uint8_t_u_s(0x40L, 7)) ^ (l_31 > p_24))));
        for (l_31 = (-24); (l_31 != 4); l_31 = safe_add_func_uint32_t_u_u(l_31, 7))
        { 
            int32_t l_34 = 0x798870B3L;
            int32_t *l_35 = &g_5;
            int32_t *l_36 = &g_5;
            int32_t *l_37 = (void*)0;
            struct S0 *l_71 = &g_2;
            int8_t *l_708 = &g_709;
            int32_t l_722[1][5];
            uint64_t l_738 = 1UL;
            int32_t l_759 = (-1L);
            union U1 l_805 = {0x8E7B3F80L};
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                    l_722[i][j] = 1L;
            }
            g_38++;
        }
        for (l_753 = 6; (l_753 >= 0); l_753 -= 1)
        { 
            union U1 l_806 = {-10L};
            return l_806;
        }
    }
    return l_807;
}



static int32_t  func_44(struct S0  p_45)
{ 
    int32_t *l_713 = &g_105;
    int32_t **l_714 = &g_315;
    (*l_714) = l_713;
    return p_45.f0;
}



static struct S0  func_46(union U1  p_47, int64_t  p_48, union U2  p_49, int8_t * p_50, int8_t * p_51)
{ 
    struct S0 l_712[5][6] = {{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}}};
    int i, j;
    for (p_47.f0 = 0; (p_47.f0 != (-9)); p_47.f0 = safe_sub_func_uint8_t_u_u(p_47.f0, 9))
    { 
        return l_712[2][5];
    }
    return l_712[2][5];
}



static int32_t * func_58(int32_t * p_59, int32_t  p_60, uint32_t  p_61, struct S0 * p_62)
{ 
    int32_t l_194 = 0xC96881A2L;
    union U2 *l_236[5] = {&g_96,&g_96,&g_96,&g_96,&g_96};
    union U1 *l_255[5][3][4] = {{{&g_253,&g_253,(void*)0,&g_253},{&g_253,&g_253,&g_253,&g_253},{&g_253,&g_253,&g_253,&g_253}},{{&g_253,&g_253,(void*)0,&g_253},{&g_253,&g_253,&g_253,&g_253},{&g_253,&g_253,&g_253,&g_253}},{{&g_253,&g_253,(void*)0,&g_253},{&g_253,&g_253,&g_253,&g_253},{&g_253,&g_253,&g_253,&g_253}},{{&g_253,&g_253,(void*)0,&g_253},{&g_253,&g_253,&g_253,&g_253},{&g_253,&g_253,&g_253,&g_253}},{{&g_253,&g_253,(void*)0,&g_253},{&g_253,&g_253,&g_253,&g_253},{&g_253,&g_253,&g_253,&g_253}}};
    int32_t l_296[6][2][1] = {{{1L},{(-4L)}},{{1L},{(-4L)}},{{1L},{(-4L)}},{{1L},{(-4L)}},{{1L},{(-4L)}},{{1L},{(-4L)}}};
    int32_t l_310[4];
    uint32_t *l_326 = &g_7;
    uint32_t **l_325 = &l_326;
    int32_t *l_357 = &l_310[1];
    int32_t *l_358 = (void*)0;
    struct S0 l_468 = {9UL};
    uint8_t *l_485 = (void*)0;
    const int32_t *l_515 = &g_5;
    int32_t *l_553[6] = {&l_310[1],&l_310[1],&l_310[1],&l_310[1],&l_310[1],&l_310[1]};
    uint16_t l_567[7] = {0x2744L,0x2744L,2UL,0x2744L,0x2744L,2UL,0x2744L};
    int16_t *l_583 = (void*)0;
    uint64_t *l_588 = &g_155;
    int32_t l_624 = (-1L);
    int32_t l_631 = 0xFC9EE7B7L;
    uint16_t l_692 = 65535UL;
    int32_t *l_705 = (void*)0;
    int32_t *l_706 = &g_5;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_310[i] = 0x5512F6BAL;
lbl_504:
    for (g_5 = 19; (g_5 <= 9); g_5--)
    { 
        int16_t l_197 = 1L;
        struct S0 l_248 = {0x1FL};
        struct S0 l_256 = {3UL};
        int32_t l_280[1][5] = {{0x3FD8896DL,0x3FD8896DL,0x3FD8896DL,0x3FD8896DL,0x3FD8896DL}};
        int16_t l_301 = 0x04D9L;
        uint32_t l_304 = 18446744073709551610UL;
        int8_t l_391 = 3L;
        int32_t l_397 = 1L;
        union U1 *l_413 = &g_253;
        union U2 *l_434 = &g_96;
        int i, j;
    }
    for (p_60 = 2; (p_60 == 8); p_60 = safe_add_func_int16_t_s_s(p_60, 8))
    { 
        struct S0 l_443 = {0x9AL};
        uint8_t *l_448[5][3] = {{(void*)0,&g_2.f0,&g_2.f0},{(void*)0,(void*)0,&g_2.f0},{&g_2.f0,&g_2.f0,&g_2.f0},{&g_2.f0,&g_96.f1.f0,&g_2.f0},{&g_2.f0,&g_96.f1.f0,&g_2.f0}};
        int32_t l_453[5];
        union U2 **l_455[3][1];
        union U2 ***l_454[3];
        union U2 **l_456[7];
        union U1 *l_459 = &g_253;
        uint32_t ***l_521[1];
        uint32_t ****l_520 = &l_521[0];
        uint32_t *****l_519 = &l_520;
        int32_t l_523 = 4L;
        int16_t ***l_537[1][4][3] = {{{&g_261[2][0],&g_261[2][0],&g_261[2][0]},{&g_261[4][0],&g_261[4][0],(void*)0},{&g_261[2][0],&g_261[2][0],&g_261[2][0]},{&g_261[4][0],&g_261[4][0],(void*)0}}};
        int32_t *l_604 = (void*)0;
        int32_t *l_607 = &g_5;
        uint8_t l_701 = 0UL;
        int32_t *l_704[4];
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_453[i] = 0xE5806126L;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_455[i][j] = &l_236[3];
        }
        for (i = 0; i < 3; i++)
            l_454[i] = &l_455[0][0];
        for (i = 0; i < 7; i++)
            l_456[i] = &l_236[2];
        for (i = 0; i < 1; i++)
            l_521[i] = (void*)0;
        for (i = 0; i < 4; i++)
            l_704[i] = &l_296[0][0][0];
        if ((((+g_38) , p_60) | (safe_mod_func_uint64_t_u_u((+(safe_rshift_func_int16_t_s_s(((l_443 = l_443) , p_60), 1))), (safe_mul_func_int8_t_s_s(((((((safe_lshift_func_uint8_t_u_s(((*l_357) = (*l_357)), (safe_mod_func_int32_t_s_s(((((safe_sub_func_uint64_t_u_u(((*g_154) = l_453[1]), (((l_456[0] = (void*)0) == &l_236[3]) < 0x8367L))) & p_61) >= l_453[1]) > p_60), (*g_104))))) < (*p_59)) == p_60) != 4294967295UL) < 0xCF57L) != p_60), p_60))))))
        { 
            uint32_t ***l_458 = &g_328[6];
            uint32_t ****l_457 = &l_458;
            union U1 **l_460 = &l_255[2][2][2];
            int32_t l_461 = 8L;
            struct S0 *l_467[6] = {&g_96.f1,&g_96.f1,&g_96.f1,&g_96.f1,&g_96.f1,&g_96.f1};
            int64_t *l_481 = &g_396[3][3];
            int64_t *l_482 = &g_196;
            int64_t l_483 = 1L;
            int16_t *l_484 = &g_138;
            int i;
            (*p_59) &= (l_453[1] && ((*g_20) |= ((&g_360 == l_457) && (((*l_460) = l_459) == &g_253))));
            g_462--;
            (*g_104) ^= (safe_mod_func_uint8_t_u_u((((l_468 = (l_443 , (*p_62))) , (safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(p_60, (((safe_lshift_func_int8_t_s_s(((((((safe_div_func_uint32_t_u_u((safe_add_func_int32_t_s_s((((safe_add_func_int64_t_s_s(((*l_482) ^= (((*l_481) = l_461) < g_140)), ((((((*g_154) = (l_483 ^ ((void*)0 != l_484))) < p_60) | l_453[1]) == l_461) && g_170))) , g_20) == l_485), (*p_59))), (*l_357))) , (*g_20)) & p_61) , (*g_20)) & p_60) || 0x3A0959B999FAA615LL), 0)) && (*g_154)) && l_461))), (*g_20)))) == p_61), g_21));
            (*l_357) |= l_453[3];
        }
        else
        { 
            union U2 l_486 = {0};
            int32_t l_489 = 9L;
            int32_t l_500 = 0xA13F8F3AL;
            uint32_t *l_522[4] = {&g_7,&g_7,&g_7,&g_7};
            uint64_t *l_527 = (void*)0;
            uint32_t l_544 = 0UL;
            const uint8_t l_546 = 0xB7L;
            int32_t l_560 = 0x9CC46762L;
            int32_t l_561 = 0xA588D301L;
            int32_t l_564[1];
            uint8_t l_608 = 247UL;
            union U1 l_617 = {1L};
            int16_t * const *l_629 = &g_262;
            uint16_t *l_690 = (void*)0;
            int32_t *l_695 = &l_453[0];
            int32_t l_699 = 0x997BD732L;
            int i;
            for (i = 0; i < 1; i++)
                l_564[i] = 0xF48704D2L;
            (*p_59) = (l_486 , (safe_sub_func_uint32_t_u_u(p_60, l_489)));
            for (g_196 = 0; (g_196 <= (-18)); g_196 = safe_sub_func_uint64_t_u_u(g_196, 8))
            { 
                int16_t l_498[1];
                int32_t l_499 = 0x3FC8E0ECL;
                struct S0 *l_524 = &l_468;
                int i;
                for (i = 0; i < 1; i++)
                    l_498[i] = 0xE08AL;
                for (g_253.f2 = (-29); (g_253.f2 >= 28); g_253.f2++)
                { 
                    struct S0 *l_494 = &l_443;
                    int32_t *l_495 = &l_296[3][0][0];
                    int32_t *l_496 = &l_296[5][1][0];
                    int32_t *l_497[4][5][5] = {{{&l_310[2],&l_310[1],&g_5,&l_453[3],(void*)0},{&l_310[0],&l_310[0],&l_310[2],&l_310[3],&l_310[3]},{&l_296[0][0][0],&g_103,&l_296[0][0][0],&l_453[2],&l_310[0]},{&g_5,&g_5,&l_296[4][0][0],&l_310[1],&l_310[0]},{&l_453[2],(void*)0,&l_296[0][1][0],&g_103,&g_5}},{{&l_310[1],&l_296[4][0][0],&l_296[4][0][0],&l_310[0],&g_105},{&l_453[2],&g_105,&l_296[0][0][0],&l_453[1],(void*)0},{&l_489,&l_310[3],&l_310[2],&l_310[1],&l_296[4][0][0]},{&l_453[4],&g_103,&g_5,&l_296[4][0][0],&l_453[2]},{&g_103,&g_103,&l_310[1],&g_5,&l_310[1]}},{{&l_296[4][0][0],&l_310[3],&l_296[4][0][0],&l_296[4][0][0],&l_310[3]},{&g_5,&g_105,(void*)0,&l_310[1],&l_453[3]},{&l_310[1],&l_453[2],&l_296[4][0][0],&g_5,&g_103},{&g_103,&g_5,&l_310[1],&l_310[0],&l_296[4][0][0]},{&l_310[1],&l_296[4][0][0],&g_105,&l_310[0],&l_310[1]}},{{&l_296[4][0][0],&l_489,&l_453[3],&l_310[3],&l_453[1]},{&l_296[4][0][0],(void*)0,&g_105,(void*)0,&l_310[2]},{&l_489,&g_105,&g_105,&l_453[4],&l_310[2]},{&l_310[3],&l_453[1],&l_296[4][0][0],(void*)0,&l_453[1]},{&l_310[1],(void*)0,(void*)0,&l_310[1],&l_310[1]}}};
                    int i, j, k;
                    (*l_494) = (*p_62);
                    ++g_501;
                    if (g_155)
                        goto lbl_504;
                    (*l_495) = ((safe_sub_func_int64_t_s_s((p_61 >= p_61), ((safe_sub_func_uint32_t_u_u((safe_div_func_int16_t_s_s(((*g_262) &= ((safe_rshift_func_int8_t_s_s(((((safe_sub_func_uint16_t_u_u((l_498[0] ^ ((g_38 , func_65(&l_499, (*g_106), l_515, p_61, p_60)) != &l_296[2][1][0])), 0L)) | p_61) , g_170) & g_179), p_61)) == 0UL)), g_7)), l_498[0])) || l_498[0]))) != p_61);
                    l_523 &= ((*l_495) = (safe_lshift_func_uint16_t_u_s(1UL, (((**g_360) = func_65(&l_453[1], l_494, &l_453[1], p_61, (p_60 >= (((safe_unary_minus_func_int32_t_s(((l_519 != &l_520) == 9L))) != 0x55L) ^ g_501)))) != l_522[1]))));
                }
                (*l_524) = (**g_106);
            }
            if (((safe_lshift_func_int8_t_s_s(((*g_104) <= ((*p_59) ^= (((void*)0 != l_527) <= p_61))), (p_60 , (p_61 , (*g_20))))) == p_60))
            { 
                uint16_t l_541 = 65533UL;
                int64_t *l_542 = &g_196;
                int64_t *l_543 = &g_396[2][2];
                int32_t l_545 = 0L;
                l_545 = (safe_div_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u((~(safe_mod_func_int8_t_s_s(((void*)0 != l_537[0][0][2]), (l_544 = (safe_add_func_int64_t_s_s((!((*l_543) = ((*l_542) = l_541))), (*g_154))))))), 0x53L)) ^ l_453[1]) , 0UL), g_179)), l_523));
                if (l_546)
                    break;
            }
            else
            { 
                union U1 l_550 = {0x73181E3BL};
                int32_t *l_555 = &l_296[3][1][0];
                int32_t l_558[6][3] = {{0x618A22C6L,1L,1L},{0x7E076A8BL,(-7L),0x7E076A8BL},{0x618A22C6L,0x618A22C6L,1L},{1L,(-7L),1L},{0x618A22C6L,1L,1L},{0x7E076A8BL,(-7L),0x7E076A8BL}};
                uint64_t *l_570 = &g_155;
                uint64_t **l_571 = &l_527;
                union U2 l_581 = {0};
                int16_t *l_582 = &l_550.f1;
                int i, j;
                if ((0L == (~(safe_mul_func_int8_t_s_s(((p_61 , (l_489 = ((-7L) & (l_550 , ((*l_357) >= (*l_357)))))) ^ 0UL), (-1L))))))
                { 
                    int32_t *l_551 = &l_453[1];
                    int32_t *l_552 = &l_489;
                    int32_t *l_554[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_554[i] = &l_453[1];
                    return g_556;
                }
                else
                { 
                    int16_t l_557 = (-1L);
                    int32_t l_559 = (-1L);
                    int32_t l_562 = 1L;
                    int32_t l_563 = 6L;
                    int32_t l_565 = 0L;
                    int32_t l_566 = 0x99F9DD14L;
                    ++l_567[4];
                }
                if (((((((*l_571) = l_570) != ((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint16_t_u_u(p_61, ((((safe_rshift_func_uint8_t_u_u(((l_581 , (l_583 = l_582)) != l_582), (((+(!(*p_59))) && (safe_mul_func_uint16_t_u_u(((g_253.f1 == 65535UL) , 0xCD04L), 0x08F0L))) < (-1L)))) | (*p_59)) , 0xA2A251597FA753CCLL) < 0x25EB47C74CFCB436LL))))), 4)), g_21)) , l_588)) < p_61) , l_588) == &g_155))
                { 
                    uint64_t **l_589 = &l_588;
                    uint64_t ***l_590 = (void*)0;
                    uint64_t ***l_591 = &l_589;
                    uint32_t l_592 = 1UL;
                    int32_t l_593 = 0x047683CBL;
                    int32_t l_594 = 0x6E40E1F2L;
                    int32_t l_595 = (-1L);
                    int32_t l_596 = 1L;
                    int32_t l_597[5][3] = {{6L,6L,6L},{0x9E02123EL,0x9E02123EL,0x9E02123EL},{6L,6L,6L},{0x9E02123EL,0x9E02123EL,0x9E02123EL},{6L,6L,6L}};
                    int8_t l_598 = (-2L);
                    int64_t l_599[3];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_599[i] = 1L;
                    (*l_591) = l_589;
                    (*l_357) |= (((p_60 <= (l_564[0] = ((((l_486 , ((**l_571) = 0xED7FC82B21587911LL)) , 0x68F4L) , (((*l_570) = p_61) <= (((*l_555) &= (*p_59)) & ((*g_330) == (void*)0)))) , l_592))) <= p_60) | 1L);
                    ++g_600;
                }
                else
                { 
                    int32_t *l_603 = &l_558[2][1];
                    return l_604;
                }
                if ((*p_59))
                    break;
                for (l_550.f2 = 0; (l_550.f2 < 5); ++l_550.f2)
                { 
                    return l_607;
                }
                --l_608;
            }
            if ((safe_mod_func_uint64_t_u_u(0UL, (safe_lshift_func_int16_t_s_s(((((safe_mod_func_int64_t_s_s(((l_617 , ((((void*)0 == l_448[1][2]) || (safe_unary_minus_func_uint16_t_u((p_61 & 9L)))) != (safe_mod_func_uint8_t_u_u((((!(safe_lshift_func_uint16_t_u_u(((*g_252) , g_303[1]), g_21))) <= g_38) < p_61), 0x19L)))) , 1L), (*g_154))) , l_489) >= l_624) >= 0xD2A69131L), 12)))))
            { 
                int16_t l_625 = (-1L);
                uint8_t l_626 = 0x0DL;
                int16_t **l_654[3];
                uint8_t l_658 = 1UL;
                int32_t l_670 = 0x5E6731CFL;
                int32_t l_696 = 0x1110F1EBL;
                int32_t l_697 = (-9L);
                int32_t l_698 = 1L;
                int32_t l_700[4];
                int i;
                for (i = 0; i < 3; i++)
                    l_654[i] = (void*)0;
                for (i = 0; i < 4; i++)
                    l_700[i] = (-1L);
                if (((*g_104) = (((*g_20) = (*l_607)) , 0xBC524AC4L)))
                { 
                    int16_t * const **l_630 = &l_629;
                    uint16_t *l_647 = &l_567[6];
                    int8_t *l_648 = &g_649;
                    ++l_626;
                    (*g_556) |= (&g_170 == &g_170);
                    (*l_357) = (&l_583 == ((*l_630) = l_629));
                    (*g_556) = (l_631 >= ((*l_648) ^= ((*g_20) = (((safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((~p_60), (((safe_mod_func_uint32_t_u_u(((p_61 = ((safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((((safe_add_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_s(l_625, (0x1275L >= ((*l_647) = p_61)))) != (6UL >= (0x4FF9L != g_108[1]))), g_7)) <= l_626) && (*g_154)) ^ (*g_20)), g_138)), p_61)) && 0xAB629235F4F89C62LL)) == p_60), p_60)) < (-1L)) && g_396[2][2]))), g_462)) > l_625) >= p_60))));
                    if (l_617.f2)
                        break;
                }
                else
                { 
                    const uint32_t l_657[3][1][2] = {{{0xD8780F8AL,0xD8780F8AL}},{{0xD8780F8AL,0xD8780F8AL}},{{0xD8780F8AL,0xD8780F8AL}}};
                    int i, j, k;
                    (*g_556) |= (0x2321F08B98F8010DLL != (safe_add_func_int32_t_s_s(((((safe_sub_func_uint16_t_u_u(p_61, ((g_261[2][0] = &l_583) == l_654[2]))) <= (*g_104)) , (safe_add_func_int64_t_s_s(((((p_60 || (-4L)) || (*g_20)) >= p_60) , (-9L)), l_657[1][0][1]))) && (*g_20)), 8L)));
                    if ((*p_59))
                        break;
                    (*g_104) &= ((*g_556) = l_657[0][0][1]);
                    ++l_658;
                }
                if ((*g_104))
                    break;
                (*g_104) = (0x949CL && g_253.f1);
                if (((l_658 <= (safe_mul_func_uint16_t_u_u((((void*)0 != &g_154) | (((*g_262) = (safe_sub_func_uint16_t_u_u(((p_60 != (*l_607)) , ((safe_lshift_func_int16_t_s_u(1L, (+(((*g_252) , p_60) , p_61)))) , 0x531CL)), 0x16B7L))) || (*g_262))), 0xD64BL))) != l_626))
                { 
                    uint16_t *l_675 = &l_567[3];
                    uint64_t l_691 = 1UL;
                    (*g_104) &= (safe_mod_func_uint32_t_u_u(((l_670 = (g_600 = p_61)) , (p_61 = (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((*l_675) = 0UL), 8)), ((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((!(((*l_607) = ((*l_357) = 1L)) , (((g_253.f0 = ((safe_rshift_func_int16_t_s_u((((safe_div_func_uint32_t_u_u((+(safe_rshift_func_int8_t_s_u((*l_607), 6))), (((safe_mod_func_int8_t_s_s((l_690 == (g_303[2] , (void*)0)), (*g_20))) , p_60) | (*g_262)))) || g_213) == (*g_262)), l_691)) >= 0x5949A21E4F02EAF1LL)) , 0L) < 0xA12C1E5AL))), 6)), 14)) > p_61))))), l_658));
                    if ((*g_104))
                        continue;
                    if (l_692)
                        continue;
                }
                else
                { 
                    int32_t **l_693 = (void*)0;
                    int32_t **l_694[5][7] = {{&l_604,&l_358,&g_315,&l_604,&l_553[3],&l_604,&g_315},{&l_607,&l_607,&g_556,&l_553[3],&l_358,&l_553[3],&l_607},{&l_607,&g_315,&l_357,&l_358,(void*)0,(void*)0,&l_358},{&l_604,&l_553[3],&l_604,&g_315,&l_358,&l_604,&l_604},{&l_358,&l_553[3],&g_113[0][3],&l_553[3],&l_553[3],&g_556,&l_553[3]}};
                    int i, j;
                    l_695 = &p_60;
                    l_358 = &l_310[1];
                    ++l_701;
                }
            }
            else
            { 
                l_604 = (((*l_607) = g_649) , &p_60);
            }
        }
        return l_705;
    }
    return l_706;
}



static int32_t * func_65(int32_t * p_66, struct S0 * p_67, const int32_t * p_68, uint32_t  p_69, int32_t  p_70)
{ 
    int64_t l_88 = 0x776A221E1226129DLL;
    for (g_38 = 0; (g_38 == 5); g_38 = safe_add_func_int16_t_s_s(g_38, 1))
    { 
        struct S0 **l_74 = (void*)0;
        struct S0 *l_76 = &g_2;
        struct S0 **l_75[6] = {&l_76,&l_76,&l_76,&l_76,&l_76,&l_76};
        int32_t l_85[1];
        uint32_t *l_100 = &g_101;
        int32_t *l_102 = &g_103;
        int i;
        for (i = 0; i < 1; i++)
            l_85[i] = 0xD6BB23DFL;
        p_67 = &g_2;
        (*p_66) = ((func_77(((*l_102) |= ((*p_66) ^= (safe_div_func_int32_t_s_s(g_38, ((*l_100) ^= ((safe_lshift_func_int16_t_s_u((l_85[0] ^= p_70), ((g_7 , 0x2EA1E67EL) , ((func_86(l_88) ^ (p_66 == p_68)) , 0xCEB8L)))) , g_38)))))), g_104, g_106) >= 4294967295UL) , (*p_66));
    }
    return &g_5;
}



static uint32_t  func_77(int32_t  p_78, int32_t * const  p_79, struct S0 ** p_80)
{ 
    int32_t **l_130 = &g_113[0][5];
    int8_t *l_156 = &g_21;
lbl_131:
    for (g_21 = 1; (g_21 <= 5); g_21 += 1)
    { 
        const uint32_t l_120[1] = {0xE735B57BL};
        int32_t *l_122 = &g_103;
        union U2 *l_126 = (void*)0;
        union U2 **l_125 = &l_126;
        union U2 *l_128 = (void*)0;
        union U2 **l_127 = &l_128;
        int32_t **l_129 = &l_122;
        int i;
        for (p_78 = 5; (p_78 >= 0); p_78 -= 1)
        { 
            uint8_t *l_109[6][2][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,&g_2.f0},{&g_2.f0,&g_2.f0,&g_2.f0,&g_96.f1.f0,&g_2.f0}},{{(void*)0,(void*)0,&g_2.f0,(void*)0,(void*)0},{&g_2.f0,&g_96.f1.f0,&g_2.f0,&g_2.f0,&g_2.f0}},{{&g_2.f0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2.f0,&g_2.f0,&g_2.f0,&g_96.f1.f0,&g_2.f0}},{{&g_2.f0,(void*)0,&g_2.f0,(void*)0,(void*)0},{&g_2.f0,&g_2.f0,&g_2.f0,&g_2.f0,&g_2.f0}},{{&g_2.f0,(void*)0,(void*)0,(void*)0,&g_2.f0},{&g_2.f0,&g_2.f0,&g_2.f0,&g_2.f0,&g_2.f0}},{{(void*)0,(void*)0,&g_2.f0,(void*)0,&g_2.f0},{&g_2.f0,&g_96.f1.f0,&g_2.f0,&g_2.f0,&g_2.f0}}};
            struct S0 l_110 = {0UL};
            int32_t *l_112 = &g_105;
            int32_t **l_111 = &l_112;
            int32_t *l_121 = &g_5;
            int i, j, k;
            (*l_121) ^= (((g_96.f1.f0 = g_108[p_78]) , (l_110 , (((*l_111) = &g_103) == (g_113[0][5] = &g_5)))) & (((g_108[4] < ((safe_add_func_int32_t_s_s(((*p_79) = (safe_lshift_func_uint8_t_u_s(0xE0L, ((safe_mul_func_uint16_t_u_u(0UL, 0x1B40L)) && 0x2595B8C608F1A9DBLL)))), l_120[0])) || g_103)) , (void*)0) != g_20));
            (*l_111) = l_122;
            (*l_121) |= (0x9906C818L ^ (((((l_111 = ((g_21 ^ (g_108[p_78] = 0x5E4EL)) , &g_113[0][2])) == (void*)0) || (((safe_mod_func_int8_t_s_s(0L, (0xDEL ^ (*l_122)))) >= g_105) >= 0xEF93L)) && 8L) || g_105));
            (*l_112) |= (*p_79);
        }
        (*l_127) = ((*l_125) = &g_96);
        (*l_129) = l_122;
    }
    (*l_130) = &g_5;
    if (g_103)
        goto lbl_131;
    for (g_5 = (-17); (g_5 <= 22); ++g_5)
    { 
        uint64_t *l_139 = &g_140;
        int32_t **l_157[4] = {&g_113[0][3],&g_113[0][3],&g_113[0][3],&g_113[0][3]};
        int32_t ***l_158 = &l_130;
        uint64_t l_159 = 18446744073709551615UL;
        int16_t *l_160 = &g_138;
        int i;
        (*g_104) = ((safe_rshift_func_int16_t_s_s(((*l_160) = (safe_add_func_uint64_t_u_u((++(*l_139)), (safe_unary_minus_func_uint64_t_u((safe_lshift_func_int16_t_s_s(((((safe_rshift_func_int16_t_s_u((((*l_156) |= (safe_mod_func_uint64_t_u_u(p_78, (safe_lshift_func_int16_t_s_u((((safe_add_func_uint32_t_u_u(((void*)0 == g_154), (l_156 != (((1L ^ (l_157[2] != ((*l_158) = l_157[2]))) >= l_159) , (void*)0)))) , (*p_79)) >= (*g_104)), p_78))))) != 0x09L), p_78)) || p_78) && g_108[4]) < 0xBDCD1592912FC398LL), 0))))))), g_108[0])) || (***l_158));
        (*g_104) ^= 0x128E3505L;
        return p_78;
    }
    (*l_130) = (*l_130);
    return g_108[5];
}



static uint8_t  func_86(int16_t  p_87)
{ 
    int8_t l_89 = 0L;
    int32_t l_99 = 0xE3A6DCE4L;
    l_99 &= (l_89 || (safe_sub_func_uint64_t_u_u(18446744073709551615UL, (((safe_sub_func_uint16_t_u_u(65535UL, ((safe_rshift_func_uint16_t_u_s((g_96 , (p_87 >= (safe_lshift_func_uint8_t_u_u(p_87, ((0L >= g_38) >= l_89))))), 8)) <= l_89))) , 0xE2L) || (*g_20)))));
    l_99 = ((void*)0 == &l_99);
    return p_87;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2.f0, "g_2.f0", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_108[i], "g_108[i]", print_hash_value);

    }
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_253.f0, "g_253.f0", print_hash_value);
    transparent_crc(g_253.f1, "g_253.f1", print_hash_value);
    transparent_crc(g_253.f2, "g_253.f2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_303[i], "g_303[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_396[i][j], "g_396[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_462, "g_462", print_hash_value);
    transparent_crc(g_501, "g_501", print_hash_value);
    transparent_crc(g_600, "g_600", print_hash_value);
    transparent_crc(g_649, "g_649", print_hash_value);
    transparent_crc(g_709, "g_709", print_hash_value);
    transparent_crc(g_767, "g_767", print_hash_value);
    transparent_crc(g_815, "g_815", print_hash_value);
    transparent_crc(g_910, "g_910", print_hash_value);
    transparent_crc(g_947, "g_947", print_hash_value);
    transparent_crc(g_1024, "g_1024", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
