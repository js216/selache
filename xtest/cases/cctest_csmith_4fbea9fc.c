// SPDX-License-Identifier: MIT
// cctest_csmith_4fbea9fc.c --- cctest case csmith_4fbea9fc (csmith seed 1337895420)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5e064293 */

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

// Options:   -s 1337895420 -o /tmp/csmith_gen_cf4fu0i7/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint8_t  f0;
   int16_t  f1;
   int32_t  f2;
};
#pragma pack(pop)

union U1 {
   int8_t  f0;
};


static struct S0 g_11 = {0xAFL,0x9B64L,8L};
static int64_t g_16 = 1L;
static int16_t g_17 = 0L;
static int32_t g_18 = 0xE19F23E5L;
static int8_t g_21 = (-10L);
static uint16_t g_23 = 65535UL;
static struct S0 g_35 = {5UL,0x1943L,1L};
static uint16_t g_87 = 0x57A5L;
static uint32_t g_118 = 3UL;
static union U1 g_134[2] = {{0L},{0L}};
static union U1 g_135 = {0xDFL};
static union U1 g_136 = {0xE5L};
static int32_t g_218 = 0x2A4E10F4L;
static int32_t g_246[5][1][2] = {{{(-1L),(-1L)}},{{(-1L),(-1L)}},{{(-1L),(-1L)}},{{(-1L),(-1L)}},{{(-1L),(-1L)}}};
static int8_t g_299 = 0x1CL;



static int64_t  func_1(void);
static int16_t  func_2(struct S0  p_3, uint32_t  p_4, uint8_t  p_5, uint32_t  p_6);
static struct S0  func_7(int64_t  p_8, int32_t  p_9);
static int64_t  func_12(int64_t  p_13);




static int64_t  func_1(void)
{ 
    struct S0 l_10 = {0xB9L,0x7642L,-10L};
    uint8_t l_140 = 8UL;
    uint16_t l_266 = 2UL;
    uint32_t l_290 = 18446744073709551615UL;
    struct S0 l_300 = {250UL,-1L,-8L};
    uint32_t l_315 = 6UL;
    if (((func_2(func_7(((g_11 = l_10) , func_12(g_11.f2)), g_17), l_10.f1, l_10.f2, l_140) | g_246[3][0][0]) > l_10.f2))
    { 
        const uint64_t l_278 = 0UL;
        int32_t l_280 = (-1L);
        for (l_10.f0 = 0; (l_10.f0 > 39); ++l_10.f0)
        { 
            uint64_t l_279 = 0x2B61524D6D5E7484LL;
            struct S0 l_291 = {0xEBL,0xF975L,0L};
            if ((safe_add_func_uint16_t_u_u(g_118, (safe_rshift_func_uint16_t_u_s(l_266, ((safe_lshift_func_int8_t_s_s(((!(safe_mul_func_uint16_t_u_u((!(safe_unary_minus_func_uint8_t_u((g_35.f0++)))), (safe_lshift_func_int16_t_s_s(((l_278 == ((18446744073709551614UL && l_279) ^ 0x4767L)) ^ g_118), l_278))))) > l_279), g_246[3][0][0])) > l_279))))))
            { 
                uint8_t l_281 = 250UL;
                l_281++;
            }
            else
            { 
                const int8_t l_284[3][4][4] = {{{0x7DL,0x24L,0x24L,0x7DL},{5L,0x24L,(-2L),0x24L},{0x24L,0x23L,(-2L),(-2L)},{5L,5L,0x24L,(-2L)}},{{0x7DL,0x23L,0x7DL,0x24L},{0x7DL,0x24L,0x24L,0x7DL},{5L,0x24L,(-2L),0x24L},{0x24L,0x23L,(-2L),(-2L)}},{{5L,5L,0x7DL,0x23L},{(-2L),5L,(-2L),0x7DL},{(-2L),0x7DL,0x7DL,(-2L)},{0x24L,0x7DL,0x23L,0x7DL}}};
                int i, j, k;
                l_291 = ((l_284[2][3][0] >= (9L != (l_10.f2 = ((safe_add_func_uint64_t_u_u((l_280 = (((safe_rshift_func_int8_t_s_u((+4294967295UL), 5)) , l_290) && g_136.f0)), 4L)) < g_136.f0)))) , g_11);
            }
            for (g_11.f0 = 0; (g_11.f0 > 21); ++g_11.f0)
            { 
                int32_t l_298 = 0x3D39C3C4L;
                struct S0 l_301[4] = {{0xEAL,0xD77DL,0x40B17604L},{0xEAL,0xD77DL,0x40B17604L},{0xEAL,0xD77DL,0x40B17604L},{0xEAL,0xD77DL,0x40B17604L}};
                int i;
                l_301[0] = (g_35 = (((safe_add_func_int32_t_s_s(((((safe_sub_func_int32_t_s_s((l_298 , (g_299 && (g_246[3][0][0] >= g_134[0].f0))), 0xD103FD7DL)) || l_278) , 4294967295UL) == l_10.f1), 0x1C5E05B4L)) , g_35) , l_300));
            }
        }
    }
    else
    { 
        int32_t l_304 = 0x0C6E62EBL;
        g_246[0][0][1] = (safe_div_func_uint8_t_u_u(0xDFL, (l_304 , (safe_mul_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u((0x63L < (safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((l_300 , g_16), l_140)), g_18))), g_18)) != g_118), l_300.f0)))));
    }
    l_315 |= ((l_10.f2 = g_87) >= (safe_rshift_func_uint8_t_u_s(l_300.f0, (g_35.f1 , 0x9BL))));
    return l_300.f0;
}



static int16_t  func_2(struct S0  p_3, uint32_t  p_4, uint8_t  p_5, uint32_t  p_6)
{ 
    const uint32_t l_155 = 4294967288UL;
    int32_t l_163 = 0L;
    int32_t l_173 = 0xA2DC1931L;
    uint16_t l_221 = 0xF3BFL;
    int16_t l_235 = (-1L);
    struct S0 l_241 = {249UL,-1L,0xE251C85CL};
    int32_t l_243[3][4][1] = {{{1L},{1L},{0x84355638L},{1L}},{{1L},{0x84355638L},{1L},{1L}},{{0x84355638L},{1L},{1L},{0x84355638L}}};
    uint8_t l_251 = 255UL;
    int i, j, k;
    if ((g_18 = ((safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(0x9A84L, 5)), (safe_div_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s(l_155, (safe_mod_func_int8_t_s_s((0x52D37032A699B7D3LL >= (safe_rshift_func_int16_t_s_u((g_21 && l_155), 5))), l_155)))), p_4)), l_155)), p_3.f1)), 0x7DL)))) > p_3.f0)))
    { 
        uint32_t l_164 = 0xFB79008CL;
        int32_t l_180 = 1L;
        uint32_t l_210 = 3UL;
lbl_190:
        l_180 = (((l_164 &= (l_163 = (safe_lshift_func_int16_t_s_u((!1UL), 6)))) & (safe_lshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(p_3.f1, 1)), (safe_rshift_func_uint8_t_u_s((l_173 = g_17), (((((((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s((((safe_mul_func_int8_t_s_s(((((18446744073709551615UL > l_180) <= l_155) , g_136.f0) | p_4), 8UL)) <= l_180) && p_4), p_3.f0)), p_3.f1)) <= g_21) <= (-1L)) & 0xAF2DL) != (-1L)) && 1L) <= 0x05488EF9L))))) ^ 0xAAL) <= 0x8DC4A0E6F0F138F8LL), 4))) && p_3.f0);
        if ((safe_sub_func_uint32_t_u_u(l_155, l_180)))
        { 
            int32_t l_189[4];
            int8_t l_211 = 0x9EL;
            int64_t l_224 = 1L;
            int i;
            for (i = 0; i < 4; i++)
                l_189[i] = 5L;
            for (p_6 = 0; (p_6 >= 11); ++p_6)
            { 
                p_3 = func_7((0xA149L || l_164), (safe_rshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(l_155, p_3.f1)), l_189[0])));
                if (g_35.f1)
                    goto lbl_190;
            }
            if (((safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((!1L) != (((safe_add_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(((l_173 != g_16) ^ ((safe_add_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u((g_11.f0 = (safe_div_func_int16_t_s_s((p_3.f1 = ((1L && 0x5DDDL) < l_210)), l_189[0]))), g_87)) != g_35.f0), p_5)) == l_155)), p_4)) == l_155), 0UL)) || g_16) != l_189[0])), 0xF9L)), l_211)), 4294967289UL)) <= p_6))
            { 
                return l_189[0];
            }
            else
            { 
                uint16_t l_220 = 5UL;
                p_3.f2 ^= (safe_sub_func_int32_t_s_s((safe_div_func_uint16_t_u_u((safe_add_func_int64_t_s_s((l_189[1] | (g_218 = p_4)), ((g_35.f1 , ((((+g_18) & 255UL) >= l_220) , 0x38CDC079L)) >= 0xF89C97DBL))), p_3.f0)), l_221));
                g_11.f2 ^= ((p_5 && (g_16 &= 1L)) != (p_5 ^ 3UL));
            }
            for (g_118 = 7; (g_118 >= 24); ++g_118)
            { 
                uint32_t l_225 = 8UL;
                l_225--;
                if (l_164)
                    break;
                if (g_11.f0)
                    break;
            }
        }
        else
        { 
            for (g_136.f0 = 11; (g_136.f0 <= 7); g_136.f0--)
            { 
                int32_t l_234[5] = {0L,0L,0L,0L,0L};
                int i;
                g_218 = (safe_div_func_int16_t_s_s((g_218 <= (safe_mod_func_uint8_t_u_u(((g_35.f0 & (p_3.f1 != (0xDEL < (-2L)))) > l_180), p_3.f0))), l_234[0]));
                if (p_5)
                    break;
            }
        }
    }
    else
    { 
        int8_t l_238 = (-1L);
        int32_t l_242 = 0x237C0BC5L;
        int32_t l_244 = (-1L);
        int32_t l_245[2][2][1] = {{{1L},{0x922D4D56L}},{{1L},{0x922D4D56L}}};
        int64_t l_247[4] = {4L,4L,4L,4L};
        uint32_t l_248 = 7UL;
        int i, j, k;
        g_218 = (l_235 | l_155);
        for (g_35.f2 = 0; (g_35.f2 != (-27)); --g_35.f2)
        { 
            l_241 = func_7((g_16 |= (l_238 = 4L)), (safe_rshift_func_uint8_t_u_s(g_35.f1, 6)));
        }
        l_248++;
    }
    --l_251;
    p_3.f2 = (((safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((l_241 , (((safe_rshift_func_int16_t_s_s(((l_243[0][3][0] > 0x5EF97BF6L) == (g_135.f0 <= p_6)), 12)) , 0UL) < g_35.f0)), 0x9AL)), l_163)) <= 0xF1EA78D2L) || 1L);
    return p_5;
}



static struct S0  func_7(int64_t  p_8, int32_t  p_9)
{ 
    uint32_t l_42 = 0xF7D59448L;
    uint16_t l_43 = 0xAB6AL;
    int32_t l_49[1];
    int32_t l_52[5][1] = {{0x9A81FFDEL},{0x99DB2213L},{0x9A81FFDEL},{0x99DB2213L},{0x9A81FFDEL}};
    int16_t l_55 = 0x13A3L;
    int8_t l_73 = 1L;
    int32_t l_95 = 0x91522484L;
    struct S0 l_139 = {255UL,-5L,0x170A64D1L};
    int i, j;
    for (i = 0; i < 1; i++)
        l_49[i] = 0xDF2FFA36L;
    if (((safe_lshift_func_uint16_t_u_u(p_9, (safe_sub_func_int64_t_s_s((+(l_42 | p_9)), g_35.f1)))) & l_43))
    { 
        int8_t l_46 = 0x32L;
        int32_t l_56 = 0xB817BB5CL;
        struct S0 l_57[4][4][1] = {{{{0x68L,0xDE33L,0xB8FBA323L}},{{8UL,4L,0xDCC21D2CL}},{{0x68L,0xDE33L,0xB8FBA323L}},{{8UL,4L,0xDCC21D2CL}}},{{{0x68L,0xDE33L,0xB8FBA323L}},{{8UL,4L,0xDCC21D2CL}},{{0x68L,0xDE33L,0xB8FBA323L}},{{8UL,4L,0xDCC21D2CL}}},{{{0x68L,0xDE33L,0xB8FBA323L}},{{8UL,4L,0xDCC21D2CL}},{{0x68L,0xDE33L,0xB8FBA323L}},{{8UL,4L,0xDCC21D2CL}}},{{{0x68L,0xDE33L,0xB8FBA323L}},{{8UL,4L,0xDCC21D2CL}},{{0x68L,0xDE33L,0xB8FBA323L}},{{8UL,4L,0xDCC21D2CL}}}};
        int i, j, k;
        l_56 ^= (safe_add_func_uint16_t_u_u(l_46, ((safe_div_func_int64_t_s_s(((l_49[0] |= l_43) != (((safe_lshift_func_uint8_t_u_u((l_52[1][0] &= 0xAEL), 6)) > ((safe_rshift_func_uint8_t_u_u(p_8, 3)) < p_9)) || (-1L))), l_46)) && l_55)));
lbl_62:
        l_57[3][0][0] = l_57[3][1][0];
        for (l_55 = 0; (l_55 != (-29)); --l_55)
        { 
            uint16_t l_67[2][2][3] = {{{2UL,2UL,2UL},{0UL,4UL,0UL}},{{2UL,2UL,2UL},{0UL,4UL,0UL}}};
            int i, j, k;
            for (g_11.f2 = 12; (g_11.f2 > 1); g_11.f2--)
            { 
                g_18 = g_23;
                if (g_11.f2)
                    break;
                if (l_42)
                    goto lbl_62;
            }
            p_9 = (safe_div_func_uint8_t_u_u(((g_11.f0 ^ 3UL) , (safe_mod_func_int16_t_s_s(((l_49[0] = ((l_67[0][0][2] || (l_49[0] > l_43)) >= (-1L))) != p_9), g_16))), 0x94L));
            g_11.f2 &= (((0xE9FC65F3L < (((safe_rshift_func_int16_t_s_u(l_56, (((l_57[3][1][0].f2 = (g_18 = 1L)) > p_8) <= 0x7C6C5FB330CFEF66LL))) , p_9) , 0xC87C03C7L)) || p_9) < l_67[0][0][2]);
        }
    }
    else
    { 
        uint32_t l_86 = 18446744073709551614UL;
        int32_t l_90 = (-8L);
        struct S0 l_98 = {0UL,-10L,-1L};
        uint32_t l_137[3][3][4] = {{{0x5391AC48L,0x431493BBL,0x431493BBL,0x5391AC48L},{4294967295UL,4294967286UL,4294967295UL,0x431493BBL},{4294967286UL,0UL,0x671509B2L,4294967290UL}},{{0x6C9A4CFDL,4294967295UL,0x431493BBL,4294967290UL},{0x0E358E79L,0UL,0x0E358E79L,0x431493BBL},{0x5391AC48L,4294967286UL,4294967292UL,0x5391AC48L}},{{0x6C9A4CFDL,0x431493BBL,4294967295UL,4294967286UL},{0x431493BBL,0UL,4294967295UL,4294967295UL},{0x6C9A4CFDL,0x6C9A4CFDL,4294967292UL,4294967290UL}}};
        int i, j, k;
        if (g_11.f0)
        { 
            int64_t l_71 = 1L;
            union U1 l_91[1] = {{-2L}};
            int32_t l_117 = (-1L);
            int i;
            if ((p_9 = (((~l_71) & (l_73 |= ((~p_8) < g_16))) != (safe_mod_func_uint64_t_u_u((safe_mod_func_int8_t_s_s((g_21 |= (((safe_sub_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(l_86, g_35.f1)) || g_35.f1), p_8)), l_49[0])) == l_86) < p_8), g_87)) , 0xBDA14E7EL) >= p_9)), 0x75L)), (-1L))))))
            { 
                int64_t l_94 = (-9L);
                l_90 = (safe_mod_func_int32_t_s_s(l_42, p_9));
                p_9 = ((0x37F8686667EE9F72LL != ((l_91[0] , (((safe_add_func_uint8_t_u_u((g_11.f1 | p_9), l_94)) <= p_9) | 1UL)) , g_18)) ^ l_95);
            }
            else
            { 
                uint32_t l_115 = 0x04081ECFL;
                int32_t l_116 = 0x96589387L;
                g_11.f2 ^= ((p_9 > (safe_mul_func_uint8_t_u_u(0UL, ((l_98 , 0xD6DB513C549E5CE9LL) || 0x88704077E1F98D32LL)))) >= g_11.f1);
                l_52[1][0] ^= (safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s((p_8 ^ (((((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(g_11.f0, (safe_mod_func_uint16_t_u_u((l_117 = (0L > ((safe_add_func_int8_t_s_s((l_116 &= (((safe_lshift_func_int16_t_s_u(l_115, 7)) < g_23) ^ g_87)), (-4L))) && g_35.f2))), g_11.f1)))), l_71)) <= l_115) < (-1L)) & p_8) != l_115)), 11)) >= p_8) != 1UL), p_8)), p_8));
            }
            g_118--;
        }
        else
        { 
            uint16_t l_121 = 0x51ADL;
            p_9 = ((l_121 || ((g_17 && (safe_add_func_uint32_t_u_u(4294967295UL, g_35.f2))) ^ g_16)) ^ g_87);
            p_9 = (((~1L) != ((((((!3L) || (g_17 = ((safe_div_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((-1L) && (safe_div_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((((((g_136 = (g_135 = (g_134[1] = g_134[0]))) , l_49[0]) > 0xBFF7L) != p_8) == 0x2198L), l_137[0][1][0])), p_8))), p_9)), l_121)) || l_55))) > 0xC1D071B3L) && (-1L)) & 0x5FCB09B1B028D9ABLL) != 0x40L)) != 248UL);
        }
        for (l_95 = 0; (l_95 <= 0); l_95 += 1)
        { 
            for (g_35.f1 = 0; (g_35.f1 >= 0); g_35.f1 -= 1)
            { 
                struct S0 l_138 = {0UL,-2L,0x95FD5604L};
                int i, j;
                if (l_52[(l_95 + 1)][l_95])
                    break;
                if (l_52[(l_95 + 1)][l_95])
                    continue;
                l_98 = l_138;
            }
        }
    }
    return l_139;
}



static int64_t  func_12(int64_t  p_13)
{ 
    int64_t l_19 = 0xB35D56974EDF0EBFLL;
    for (g_11.f2 = (-1); (g_11.f2 <= (-8)); --g_11.f2)
    { 
        int64_t l_20 = 0xAF8716B5B3847D22LL;
        int64_t l_22 = 0x058EFA97F51EF995LL;
        struct S0 l_26 = {3UL,0x169FL,0x4CAA5D73L};
        int32_t l_36 = (-1L);
        ++g_23;
        l_36 ^= (l_26 , (safe_mul_func_int16_t_s_s((l_26.f2 < (safe_div_func_uint8_t_u_u(l_19, (safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(((g_35 = g_11) , p_13), p_13)), 2))))), 2UL)));
    }
    return g_11.f2;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
    transparent_crc(g_11.f1, "g_11.f1", print_hash_value);
    transparent_crc(g_11.f2, "g_11.f2", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_35.f0, "g_35.f0", print_hash_value);
    transparent_crc(g_35.f1, "g_35.f1", print_hash_value);
    transparent_crc(g_35.f2, "g_35.f2", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_134[i].f0, "g_134[i].f0", print_hash_value);

    }
    transparent_crc(g_135.f0, "g_135.f0", print_hash_value);
    transparent_crc(g_136.f0, "g_136.f0", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_246[i][j][k], "g_246[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_299, "g_299", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
