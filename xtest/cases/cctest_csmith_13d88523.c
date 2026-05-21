// SPDX-License-Identifier: MIT
// cctest_csmith_13d88523.c --- cctest case csmith_13d88523 (csmith seed 332956963)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4f6db170 */

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

// Options:   -s 332956963 -o /tmp/csmith_gen_26dibxlw/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint64_t  f0;
   uint32_t  f1;
   const uint64_t  f2;
};
#pragma pack(pop)

union U3 {
   struct S0  f0;
   const uint8_t  f1;
};

union U4 {
   int64_t  f0;
};

union U5 {
   struct S0  f0;
   uint32_t  f1;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   const uint8_t  f0;
};
#pragma pack(pop)

union U6 {
   int8_t  f0;
   struct S2  f1;
   uint16_t  f2;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint16_t  f0;
   uint32_t  f1;
   const struct S0  f2;
   int16_t  f3;
   int16_t  f4;
   uint32_t  f5;
};
#pragma pack(pop)

union U7 {
   uint64_t  f0;
   const int8_t  f1;
   uint32_t  f2;
   struct S1  f3;
};


static int32_t g_3[5][5][4] = {{{0L,0x89D221E9L,8L,0L},{1L,0x89D221E9L,6L,1L},{1L,8L,8L,1L},{0L,0x89D221E9L,8L,0L},{1L,0x89D221E9L,6L,1L}},{{1L,8L,8L,1L},{0L,0x89D221E9L,8L,0L},{1L,0x89D221E9L,6L,1L},{1L,8L,8L,1L},{0L,0x89D221E9L,8L,0L}},{{1L,0x89D221E9L,6L,1L},{1L,8L,6L,0L},{0x6EE4E912L,8L,6L,0x6EE4E912L},{0L,8L,0x89D221E9L,0L},{0L,6L,6L,0L}},{{0x6EE4E912L,8L,6L,0x6EE4E912L},{0L,8L,0x89D221E9L,0L},{0L,6L,6L,0L},{0x6EE4E912L,8L,6L,0x6EE4E912L},{0L,8L,0x89D221E9L,0L}},{{0L,6L,6L,0L},{0x6EE4E912L,8L,6L,0x6EE4E912L},{0L,8L,0x89D221E9L,0L},{0L,6L,6L,0L},{0x6EE4E912L,8L,6L,0x6EE4E912L}}};
static union U6 g_14 = {1L};
static const union U7 g_20 = {0x857497F3C88FED6CLL};
static int16_t g_27 = 0x5140L;
static uint64_t g_29 = 0UL;
static union U4 g_32 = {0x46D23205E60D1F28LL};
static uint16_t g_53[2] = {0x8004L,0x8004L};
static uint16_t g_54 = 4UL;
static int64_t g_76 = 1L;
static uint32_t g_77 = 0xDC86549EL;
static uint32_t g_84 = 0x5C3E0E7AL;
static int16_t g_86 = 0xF2C1L;
static uint32_t g_100 = 0xE3EEF21DL;
static uint8_t g_101 = 254UL;
static uint32_t g_102[4][4][1] = {{{0xED30483FL},{0x1624665FL},{4294967295UL},{0x1624665FL}},{{0xED30483FL},{7UL},{7UL},{0xED30483FL}},{{0x1624665FL},{4294967295UL},{0x1624665FL},{0xED30483FL}},{{7UL},{7UL},{0xED30483FL},{0x1624665FL}}};
static uint8_t g_103 = 0x73L;
static int8_t g_148[1][5][4] = {{{(-3L),(-3L),3L,(-3L)},{(-3L),7L,7L,(-3L)},{7L,(-3L),7L,7L},{(-3L),(-3L),3L,(-3L)},{(-3L),7L,7L,(-3L)}}};



static uint32_t  func_1(void);
static int32_t  func_9(union U6  p_10, const int32_t  p_11, int8_t  p_12, uint32_t  p_13);
static int32_t  func_15(const union U7  p_16, uint8_t  p_17, union U4  p_18, uint32_t  p_19);
static uint8_t  func_21(const uint32_t  p_22);




static uint32_t  func_1(void)
{ 
    const uint64_t l_2 = 18446744073709551614UL;
    int32_t l_117[2];
    struct S0 l_130 = {8UL,0xA85E5DDDL,0xB7D8DEE130BC2C7DLL};
    int32_t l_147 = 0x68B7F09DL;
    int i;
    for (i = 0; i < 2; i++)
        l_117[i] = 0xFD65E783L;
    if (l_2)
    { 
        uint8_t l_23 = 0xBFL;
        int32_t l_115 = 3L;
        int32_t l_116[5] = {0x80AB10EDL,0x80AB10EDL,0x80AB10EDL,0x80AB10EDL,0x80AB10EDL};
        int i;
lbl_106:
        for (g_3[4][0][1] = 0; (g_3[4][0][1] == 23); g_3[4][0][1]++)
        { 
            uint16_t l_104 = 65535UL;
            int32_t l_105 = 0x853DC631L;
            l_105 ^= (~(safe_div_func_uint32_t_u_u((((func_9(g_14, ((g_101 = func_15(g_20, func_21((l_23 = g_14.f1.f0)), g_32, g_20.f1)) != 0L), g_14.f1.f0, g_20.f2) || l_23) > l_104) == g_3[2][1][0]), g_3[4][0][1])));
            if (g_84)
                goto lbl_106;
        }
        g_3[4][2][1] = ((safe_mul_func_int8_t_s_s(0xDFL, 9L)) && (safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((g_103 = ((safe_rshift_func_int16_t_s_s((255UL < ((g_86 > 6L) & g_20.f1)), l_2)) == g_14.f0)) == 0x30L), l_23)), 0x22L)));
        l_117[0] = (l_116[2] = (l_115 |= ((g_76 = l_23) <= l_23)));
    }
    else
    { 
        int16_t l_135 = 0xFF7FL;
        int32_t l_149 = 0L;
        uint32_t l_150 = 0UL;
        uint32_t l_155 = 9UL;
        for (g_27 = (-21); (g_27 < 16); g_27 = safe_add_func_uint64_t_u_u(g_27, 1))
        { 
            uint64_t l_133 = 0xF176801D493DC333LL;
            uint64_t l_134 = 18446744073709551607UL;
            for (g_101 = 0; (g_101 <= 15); ++g_101)
            { 
                g_3[4][1][0] = ((g_14 , ((((g_54 & 0xF384L) ^ (g_102[1][0][0] < g_102[3][1][0])) >= g_86) && (-4L))) >= (-6L));
            }
            for (g_76 = 0; (g_76 <= (-21)); g_76--)
            { 
                g_3[4][0][1] |= ((safe_mul_func_uint16_t_u_u((0x50L >= (safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((g_20.f0 == (l_130 , (safe_rshift_func_int8_t_s_u((l_133 = g_84), 7)))) == l_134), l_135)), g_102[3][2][0]))), g_27)) < g_103);
            }
            if (l_135)
                continue;
        }
        for (l_130.f1 = 0; (l_130.f1 <= 1); l_130.f1 += 1)
        { 
            union U3 l_139 = {{0UL,0x99DB0DCCL,0x2B5F30761BA64496LL}};
            int i;
            if ((safe_add_func_int16_t_s_s(0x712EL, ((safe_unary_minus_func_int32_t_s((l_117[l_130.f1] = (((l_117[l_130.f1] , l_139) , l_130.f0) | l_139.f1)))) < g_102[1][2][0]))))
            { 
                int32_t l_145 = 0xB9D5F192L;
                int32_t l_146 = 0x42E9F280L;
                int i;
                g_148[0][4][1] ^= (((((-7L) != (g_3[0][2][0] |= (safe_unary_minus_func_uint8_t_u((((l_147 &= ((l_146 = ((l_117[l_130.f1] < (safe_sub_func_int64_t_s_s((safe_sub_func_int64_t_s_s(g_76, (g_77 == l_145))), g_101))) != g_20.f0)) <= 65533UL)) <= (-1L)) , 8UL))))) == 0xA8E6L) > 0x854AL) < g_101);
            }
            else
            { 
                if (g_27)
                    break;
                l_150++;
            }
            g_3[3][0][2] = (safe_mod_func_int16_t_s_s(0x16E1L, (0x437AC722L | (l_155 = g_103))));
            return l_139.f1;
        }
    }
    return g_14.f0;
}



static int32_t  func_9(union U6  p_10, const int32_t  p_11, int8_t  p_12, uint32_t  p_13)
{ 
    g_103 = (g_102[1][0][0] = g_76);
    return p_13;
}



static int32_t  func_15(const union U7  p_16, uint8_t  p_17, union U4  p_18, uint32_t  p_19)
{ 
    union U3 l_39 = {{6UL,3UL,0xC8B697689278A491LL}};
    uint32_t l_40 = 0x52129E5EL;
    const union U5 l_41 = {{18446744073709551606UL,9UL,1UL}};
    int32_t l_52 = 0x1C9C8A03L;
    int16_t l_87 = 5L;
    uint32_t l_88 = 0x9EC88C48L;
    if (((((0x7AL ^ ((safe_mul_func_int16_t_s_s((p_18.f0 <= ((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((l_39 , p_16.f0) == p_16.f1), g_3[4][0][1])), 1)) ^ p_18.f0)), g_29)) != l_40)) , l_41) , 5UL) && g_32.f0))
    { 
        int16_t l_50 = 0x219EL;
        int32_t l_51 = (-10L);
        l_52 = ((g_14.f1.f0 == (safe_mod_func_uint64_t_u_u(((p_16.f0 & 0UL) != ((safe_sub_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s((l_50 = g_14.f0), 0x58EFE572DBE4212CLL)), 7)), l_51)) < 0x2F09L)), l_39.f0.f0))) ^ p_18.f0);
        for (l_39.f0.f1 = 0; (l_39.f0.f1 <= 1); l_39.f0.f1 += 1)
        { 
            --g_54;
        }
    }
    else
    { 
        const int16_t l_61 = 9L;
        int32_t l_78 = 0xDC6E2FE0L;
        int32_t l_85 = (-3L);
        for (g_54 = 0; (g_54 <= 1); g_54 += 1)
        { 
            const int32_t l_83[3][3] = {{0x37C488B1L,0x37C488B1L,0x37C488B1L},{1L,1L,1L},{0x37C488B1L,0x37C488B1L,0x37C488B1L}};
            int i, j;
            l_78 = ((((safe_lshift_func_uint16_t_u_u((g_53[g_54]--), l_61)) && ((safe_mod_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_s(0x8444L, 8)) | ((g_77 = ((safe_lshift_func_int16_t_s_s(0L, 3)) && (safe_unary_minus_func_int8_t_s((safe_rshift_func_int8_t_s_s(((((safe_unary_minus_func_int32_t_s(((safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s(p_17, g_76)), 9UL)) & g_14.f0))) >= g_76) != p_16.f1) > p_16.f1), 0)))))) <= 0x8DL)) != l_41.f0.f2), g_53[1])) & 0xC16D211A92B6F801LL)) != l_61) | g_27);
            l_88 = (safe_mod_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u(((l_83[1][2] == (g_84 &= 0x8FL)) < (((p_19 <= (((l_85 = ((-1L) ^ g_53[g_54])) , g_86) < g_29)) >= l_83[2][0]) < g_53[1])), 0x1605789552485C70LL)), l_87));
        }
    }
    for (g_32.f0 = (-27); (g_32.f0 > 23); g_32.f0 = safe_add_func_uint64_t_u_u(g_32.f0, 1))
    { 
        l_52 |= (safe_mod_func_uint32_t_u_u((p_18.f0 < (-3L)), ((l_39.f0 , (safe_sub_func_uint8_t_u_u(6UL, p_16.f1))) && (-1L))));
        for (p_19 = 0; (p_19 == 12); p_19 = safe_add_func_uint8_t_u_u(p_19, 1))
        { 
            int64_t l_99 = 0xA619A7386F5C60D0LL;
            g_100 &= (safe_add_func_int64_t_s_s((l_99 = g_20.f0), 0x0CE4C8D1EA510009LL));
            l_52 = 0xC84519A6L;
        }
    }
    return g_100;
}



static uint8_t  func_21(const uint32_t  p_22)
{ 
    int8_t l_24 = 1L;
    int32_t l_25 = 0xB99BF0BBL;
    int32_t l_26 = 1L;
    int32_t l_28[5][5][3] = {{{0x6DAAFD55L,1L,1L},{0x6DAAFD55L,1L,1L},{0x6DAAFD55L,1L,1L},{0x6DAAFD55L,1L,1L},{0x6DAAFD55L,1L,1L}},{{0x6DAAFD55L,1L,1L},{0x6DAAFD55L,1L,1L},{0x6DAAFD55L,1L,1L},{0x6DAAFD55L,1L,1L},{0x6DAAFD55L,1L,1L}},{{0x6DAAFD55L,1L,1L},{0x6DAAFD55L,1L,1L},{0x6DAAFD55L,1L,1L},{0x6DAAFD55L,1L,1L},{0x6DAAFD55L,1L,1L}},{{0x6DAAFD55L,1L,1L},{0x6DAAFD55L,1L,1L},{0x6DAAFD55L,1L,1L},{0x6DAAFD55L,1L,1L},{0x6DAAFD55L,1L,1L}},{{0x6DAAFD55L,1L,1L},{0x6DAAFD55L,1L,1L},{0x6DAAFD55L,1L,1L},{0x6DAAFD55L,1L,1L},{0x6DAAFD55L,1L,1L}}};
    int i, j, k;
    g_29++;
    return g_14.f0;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_3[i][j][k], "g_3[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
    transparent_crc(g_14.f1.f0, "g_14.f1.f0", print_hash_value);
    transparent_crc(g_20.f0, "g_20.f0", print_hash_value);
    transparent_crc(g_20.f1, "g_20.f1", print_hash_value);
    transparent_crc(g_20.f2, "g_20.f2", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_53[i], "g_53[i]", print_hash_value);

    }
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_102[i][j][k], "g_102[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_103, "g_103", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_148[i][j][k], "g_148[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
