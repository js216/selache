// SPDX-License-Identifier: MIT
// cctest_csmith_0e87b53b.c --- cctest case csmith_0e87b53b (csmith seed 243774779)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd1762712 */

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

// Options:   -s 243774779 -o /tmp/csmith_gen__9acoip1/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   uint32_t  f1;
   uint16_t  f2;
};
#pragma pack(pop)

union U1 {
   int32_t  f0;
   int32_t  f1;
};


static int32_t g_3[2][4] = {{0xD8987F2FL,0xD8987F2FL,0xD8987F2FL,0xD8987F2FL},{0xD8987F2FL,0xD8987F2FL,0xD8987F2FL,0xD8987F2FL}};
static int32_t g_4 = 0x34D8A94BL;
static struct S0 g_6 = {0xA3DBC56EL,0x00D62E65L,3UL};
static uint16_t g_61 = 1UL;
static uint32_t g_69 = 3UL;
static int32_t g_78[4][4][4] = {{{0xC767D996L,0xC767D996L,0xC767D996L,0xC767D996L},{0xC767D996L,0xC767D996L,0xC767D996L,0xC767D996L},{0xC767D996L,0xC767D996L,0xC767D996L,0xC767D996L},{0xC767D996L,0xC767D996L,0xC767D996L,0xC767D996L}},{{0xC767D996L,0xC767D996L,0xC767D996L,0xC767D996L},{0xC767D996L,0xC767D996L,0xC767D996L,0xC767D996L},{0xC767D996L,0xC767D996L,0xC767D996L,0xC767D996L},{0xC767D996L,0xC767D996L,0xC767D996L,0xC767D996L}},{{0xC767D996L,0xC767D996L,0xC767D996L,0xC767D996L},{0xC767D996L,0xC767D996L,0xC767D996L,0xC767D996L},{0xC767D996L,0xC767D996L,0xC767D996L,0xC767D996L},{0xC767D996L,0xC767D996L,0xC767D996L,0xC767D996L}},{{0xC767D996L,0xC767D996L,0xC767D996L,0xC767D996L},{0xC767D996L,0xC767D996L,0xC767D996L,0xC767D996L},{0xC767D996L,0xC767D996L,0xC767D996L,0xC767D996L},{0xC767D996L,0xC767D996L,0xC767D996L,0xC767D996L}}};
static int64_t g_114 = 0x2BAAC5CA8165F177LL;
static uint64_t g_134 = 0x11739D61DCCA4C16LL;
static uint32_t g_155 = 0x01F8A613L;
static uint8_t g_164 = 0x93L;
static union U1 g_167 = {0x5DF7E9F5L};
static int16_t g_170[2][1] = {{(-1L)},{(-1L)}};
static uint16_t g_171 = 0x1150L;
static uint16_t g_237[3][2] = {{1UL,0x352BL},{1UL,1UL},{0x352BL,1UL}};
static struct S0 g_341 = {0x090FFD3EL,0UL,1UL};
static int32_t g_364 = (-1L);
static union U1 g_366 = {0L};
static int64_t g_413 = 1L;



static struct S0  func_1(void);
static union U1  func_15(uint16_t  p_16, int32_t  p_17, uint8_t  p_18, uint16_t  p_19);
static uint32_t  func_22(int8_t  p_23, union U1  p_24, uint8_t  p_25);
static uint8_t  func_34(uint64_t  p_35, int32_t  p_36, int64_t  p_37, const int32_t  p_38, uint16_t  p_39);




static struct S0  func_1(void)
{ 
    int32_t l_2[1][1];
    struct S0 l_5 = {0xCE55459EL,0xDA585283L,65535UL};
    int8_t l_365 = 0x6EL;
    union U1 l_435[4] = {{0x132CF817L},{0x132CF817L},{0x132CF817L},{0x132CF817L}};
    uint64_t l_436 = 0x4C4D5AF03DFCC833LL;
    uint16_t l_437 = 65535UL;
    int8_t l_438 = 6L;
    int32_t l_444 = 2L;
    int32_t l_446 = 0xD09516DBL;
    struct S0 l_453[4] = {{0x167DBD56L,0x0410DC6CL,65530UL},{0x167DBD56L,0x0410DC6CL,65530UL},{0x167DBD56L,0x0410DC6CL,65530UL},{0x167DBD56L,0x0410DC6CL,65530UL}};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_2[i][j] = 0x8ADAE8C9L;
    }
    for (g_3[0][0] = 0; (g_3[0][0] <= 0); g_3[0][0] += 1)
    { 
        for (g_4 = 0; (g_4 <= 0); g_4 += 1)
        { 
            return l_5;
        }
        return g_6;
    }
    if ((l_438 = ((safe_mod_func_int16_t_s_s(l_5.f2, (safe_sub_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_u((((((safe_div_func_int8_t_s_s(((l_435[1] = (g_366 = func_15((l_2[0][0] = (safe_add_func_uint32_t_u_u(func_22((((l_5.f0 != ((safe_div_func_int8_t_s_s(((l_2[0][0] = g_6.f1) <= (safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(func_34(((g_6.f0 | g_4) , 0x39032F82966B9117LL), g_6.f1, g_6.f0, g_6.f0, g_3[0][0]), g_364)), g_6.f0)), 0x1BL))), l_5.f1)) , l_365)) || l_365) & 3L), g_366, g_366.f0), g_364))), g_364, g_366.f0, l_365))) , l_5.f2), l_436)) | g_364) > 0x6CL) | l_365) & g_413), 2)) >= 0x83D8C45EL), l_437)))) == 0UL)))
    { 
        uint16_t l_443 = 0x8210L;
        int32_t l_445 = (-1L);
        l_5 = g_6;
        l_2[0][0] = ((l_2[0][0] , (((safe_sub_func_uint32_t_u_u(0UL, (safe_div_func_uint32_t_u_u(((g_170[1][0] = (g_170[1][0] , l_443)) , l_443), l_444)))) & 0x0210FF5BL) ^ g_164)) == g_366.f0);
        if (g_364)
        { 
            uint16_t l_447 = 65533UL;
            l_444 = (-1L);
            l_447++;
        }
        else
        { 
            uint64_t l_452 = 0x32D104460A150229LL;
            for (g_69 = (-12); (g_69 < 55); g_69 = safe_add_func_uint32_t_u_u(g_69, 9))
            { 
                g_78[1][0][2] = ((l_452 , g_167.f1) >= g_364);
                g_6 = l_5;
                return l_453[0];
            }
            l_445 = (safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_s(0x614FL, 11)) && l_452) , (safe_div_func_uint32_t_u_u(((0x14D2F3C7L == (g_237[1][1] || g_4)) || g_366.f0), l_452))), g_134)), g_3[0][2])), 0x5B720071L)), g_78[0][3][0])), 12));
            return g_6;
        }
    }
    else
    { 
        uint64_t l_468 = 0x937C427C198FD9ACLL;
        int8_t l_479 = 0x59L;
        l_453[0] = g_341;
        ++l_468;
        for (l_446 = 0; (l_446 <= (-14)); l_446 = safe_sub_func_uint16_t_u_u(l_446, 9))
        { 
            g_6 = g_6;
            g_4 = (safe_mod_func_uint32_t_u_u(((l_5.f1 <= (g_164 &= (l_2[0][0] = 251UL))) & ((safe_rshift_func_int16_t_s_s(g_341.f1, 14)) | (safe_div_func_uint32_t_u_u(((g_4 == g_167.f1) != l_479), l_479)))), l_435[1].f0));
        }
    }
    return l_453[0];
}



static union U1  func_15(uint16_t  p_16, int32_t  p_17, uint8_t  p_18, uint16_t  p_19)
{ 
    struct S0 l_385 = {0x5A881465L,0x819A3857L,0UL};
    int32_t l_387 = 0xDEBD45DFL;
    int32_t l_388 = 0x2C10CE26L;
    int32_t l_403 = (-2L);
    uint8_t l_426 = 2UL;
    union U1 l_434 = {1L};
    l_388 ^= ((l_385 , ((l_385.f1 >= (~(0x30D84B6859870310LL | l_385.f1))) , l_387)) != l_385.f0);
    for (g_341.f1 = 0; (g_341.f1 >= 49); g_341.f1 = safe_add_func_int8_t_s_s(g_341.f1, 7))
    { 
        int8_t l_408 = 0x5EL;
        g_6 = l_385;
        g_6 = ((((((safe_lshift_func_int8_t_s_u((((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((l_403 , (safe_mul_func_int16_t_s_s(((g_170[0][0] , ((((l_408 && ((g_170[1][0] &= 0x318BL) <= l_408)) , 65535UL) , g_6.f2) == 0x79L)) && 0x0E1903FAL), 0x6741L))), g_341.f2)), g_78[0][3][0])) ^ g_6.f1) || g_237[2][1]), l_408)) && l_408), g_237[2][1])), l_387)) <= l_385.f0) , 0xFEL), p_18)) > 0xED2BC827L) != 0UL) | l_408) , 0x3FF3L) , l_385);
    }
    for (g_341.f0 = (-16); (g_341.f0 <= 1); g_341.f0++)
    { 
        int16_t l_424 = 0L;
        int32_t l_425 = (-10L);
        int32_t l_433 = 0x91B39052L;
        if (((((((safe_rshift_func_int16_t_s_u((g_413 , (safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(p_18, (safe_mod_func_uint32_t_u_u(((safe_sub_func_int64_t_s_s(p_17, (l_425 &= (safe_add_func_uint32_t_u_u(((((l_424 != g_167.f1) , 0x197AA4DF51F3BA3BLL) ^ g_237[1][1]) >= 0x8EL), p_16))))) != 1L), g_341.f2)))), l_426))), 15)) > (-1L)) >= 0L) , g_366.f1) == 0xDC47L) , 0xCB3D1823L))
        { 
            return g_366;
        }
        else
        { 
            g_3[0][0] ^= g_167.f1;
        }
        l_433 |= (safe_sub_func_int32_t_s_s((((safe_mul_func_int16_t_s_s(((g_167 , (0xEB52L != ((0xD5EA7744L > (safe_mul_func_uint16_t_u_u(g_170[1][0], g_413))) , p_19))) , l_426), g_341.f0)) < l_425) | l_385.f1), 0x9AB779B0L));
        return g_366;
    }
    return l_434;
}



static uint32_t  func_22(int8_t  p_23, union U1  p_24, uint8_t  p_25)
{ 
    uint64_t l_382 = 7UL;
    g_3[1][3] = (safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((g_114 = (safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((g_341.f0 >= (safe_lshift_func_int16_t_s_u((p_25 < ((((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint64_t_u((l_382 ^ ((safe_mod_func_uint16_t_u_u(p_24.f0, 1UL)) || g_164)))), 1)) ^ l_382) && 0x2FD4261A66E3F1B5LL) == p_24.f1)), 0))), g_69)), g_6.f1)), l_382))) != g_4), 11)), l_382));
    return l_382;
}



static uint8_t  func_34(uint64_t  p_35, int32_t  p_36, int64_t  p_37, const int32_t  p_38, uint16_t  p_39)
{ 
    int32_t l_44 = 0xCE88636EL;
    int32_t l_60 = 0xD0416CBBL;
    int32_t l_62 = 0x5AEBC5F7L;
    int32_t l_63 = 0x5846CF46L;
    uint8_t l_115 = 0x5CL;
    uint16_t l_116[3][4][2] = {{{65529UL,65529UL},{65529UL,65529UL},{65529UL,65529UL},{65529UL,65529UL}},{{65529UL,65529UL},{65529UL,65529UL},{65529UL,65529UL},{65529UL,65529UL}},{{65529UL,65529UL},{65529UL,65529UL},{65529UL,65529UL},{65529UL,65529UL}}};
    int32_t l_120[4];
    uint64_t l_182 = 3UL;
    struct S0 l_194[2] = {{6L,1UL,0x4239L},{6L,1UL,0x4239L}};
    uint32_t l_207 = 0x81C09BDFL;
    int32_t l_286[5] = {(-6L),(-6L),(-6L),(-6L),(-6L)};
    uint32_t l_328 = 18446744073709551611UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_120[i] = 1L;
lbl_363:
    if (p_37)
    { 
        int16_t l_45 = 2L;
        int32_t l_58 = (-1L);
        int32_t l_59 = 1L;
        int8_t l_86[1][3];
        int32_t l_87 = 0x0EBCE04DL;
        int16_t l_106 = 0x0AA4L;
        int32_t l_118[5][4][4] = {{{0xD5B4F6F7L,0x5C92AD61L,(-1L),0x5C92AD61L},{0x06419DAFL,1L,1L,0xD5B4F6F7L},{0x6ABAFA49L,0xF8B028E1L,0x5C92AD61L,0x17E09DBBL},{1L,0x06419DAFL,0x83926ECFL,0x83926ECFL}},{{1L,1L,0x5C92AD61L,0xC63A23B0L},{0x6ABAFA49L,0x83926ECFL,1L,0xF8B028E1L},{0x06419DAFL,1L,(-1L),1L},{0xD5B4F6F7L,1L,0xD5B4F6F7L,0xF8B028E1L}},{{1L,0x83926ECFL,(-7L),0xC63A23B0L},{0xC63A23B0L,1L,0x06419DAFL,0x83926ECFL},{0x17E09DBBL,0x06419DAFL,0x06419DAFL,0x17E09DBBL},{0xC63A23B0L,0xF8B028E1L,(-7L),0xD5B4F6F7L}},{{1L,1L,0xD5B4F6F7L,0x5C92AD61L},{0xD5B4F6F7L,0x5C92AD61L,(-1L),0x5C92AD61L},{0x06419DAFL,1L,1L,0xD5B4F6F7L},{0x6ABAFA49L,0xF8B028E1L,0x5C92AD61L,0x17E09DBBL}},{{1L,0x06419DAFL,0x83926ECFL,0x83926ECFL},{1L,1L,0x5C92AD61L,0xC63A23B0L},{0x6ABAFA49L,0x83926ECFL,1L,0xF8B028E1L},{0x06419DAFL,1L,(-1L),1L}}};
        const uint32_t l_130 = 0xD494AE63L;
        struct S0 l_157 = {1L,0x05A86EBCL,65532UL};
        struct S0 l_158 = {-2L,4294967295UL,0x3DF7L};
        int32_t l_172 = 0L;
        uint64_t l_173 = 0x760B95517ECD9789LL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_86[i][j] = (-8L);
        }
        if ((safe_div_func_uint32_t_u_u((l_63 = ((safe_lshift_func_uint8_t_u_u((l_62 &= (l_44 > (l_45 , ((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s(((g_61 = (l_60 = ((((18446744073709551615UL | ((l_59 = (safe_add_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((l_58 ^= (((safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((g_6.f1 >= l_44), 7L)), p_37)) > l_45) != p_35)), l_45)), 0xBE90AECF93A29ADDLL))) | p_38)) , 0x1EL) && l_58) , l_58))) >= 0xF2AED5A0A0DE8ED5LL), 18446744073709551615UL)) == p_38), p_37)) < 0xB9L)))), g_4)) && g_4)), p_39)))
        { 
            l_62 = l_45;
        }
        else
        { 
            int8_t l_68 = 0xB2L;
            int32_t l_70 = 0xE02F1192L;
            int32_t l_71 = (-1L);
            for (l_62 = 0; (l_62 <= 1); l_62 += 1)
            { 
                int8_t l_64 = 0x57L;
                l_71 ^= ((l_64 != l_64) == (safe_div_func_uint64_t_u_u(((g_6.f0 | (((g_69 = (safe_unary_minus_func_uint64_t_u((l_68 ^= (((9L & 1UL) ^ l_64) , 1UL))))) <= l_70) ^ 9L)) , p_36), p_36)));
            }
            l_60 = 0L;
            if (p_39)
                goto lbl_156;
            l_62 = (safe_div_func_int32_t_s_s((p_35 > 1UL), p_37));
        }
        if ((~(l_63 , (l_59 != (+(safe_rshift_func_uint8_t_u_u((g_78[0][3][0] = g_6.f1), (safe_div_func_int64_t_s_s((0x65E72B4CL >= g_6.f0), g_6.f2)))))))))
        { 
            int64_t l_85[4][5][4] = {{{(-6L),0xF61DB451224176C3LL,0x171E9D644770C58FLL,1L},{0L,0x4DAAEF5864DC9450LL,0x5D4E0960388C07A8LL,0xB5163BE35A844804LL},{0x3956885487E86750LL,0xDA93609311A0996ALL,(-1L),0x5D4E0960388C07A8LL},{0xF61DB451224176C3LL,6L,0x54A5A8626FBE56F4LL,6L},{(-1L),(-1L),0L,1L}},{{0L,0xF61DB451224176C3LL,0xDA93609311A0996ALL,(-1L)},{0xF07CA432BFDB46CELL,0x511E04183CEC1DFBLL,0x5D4E0960388C07A8LL,0x171E9D644770C58FLL},{0xF07CA432BFDB46CELL,0xB5163BE35A844804LL,0xDA93609311A0996ALL,0x5D4E0960388C07A8LL},{0L,0x171E9D644770C58FLL,0L,(-1L)},{(-1L),0x00C290CEACAB8BF7LL,0x00C290CEACAB8BF7LL,0x00C290CEACAB8BF7LL}},{{(-1L),(-1L),0xF07CA432BFDB46CELL,0x4DAAEF5864DC9450LL},{(-1L),0L,1L,0L},{0x54A5A8626FBE56F4LL,0xF07CA432BFDB46CELL,0x3956885487E86750LL,1L},{0xB5163BE35A844804LL,0xF07CA432BFDB46CELL,4L,0L},{0xF07CA432BFDB46CELL,0L,0x511E04183CEC1DFBLL,0x4DAAEF5864DC9450LL}},{{0xDA93609311A0996ALL,(-1L),0x5D4E0960388C07A8LL,0x00C290CEACAB8BF7LL},{1L,0xF61DB451224176C3LL,1L,0xF07CA432BFDB46CELL},{1L,0x3956885487E86750LL,0L,1L},{0x171E9D644770C58FLL,0L,(-1L),0x3956885487E86750LL},{0xF07CA432BFDB46CELL,(-6L),(-1L),4L}}};
            int32_t l_88 = 1L;
            int8_t l_89[2];
            int32_t l_121 = 0xAF491B13L;
            int32_t l_122 = 0xFC32D762L;
            int32_t l_124 = 0x918F6E36L;
            int32_t l_126[4] = {(-10L),(-10L),(-10L),(-10L)};
            uint32_t l_127 = 0UL;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_89[i] = 0L;
            for (l_59 = 3; (l_59 >= 0); l_59 -= 1)
            { 
                uint32_t l_90 = 0xABDE2A9FL;
                int32_t l_95 = 0x7EED8CCAL;
                int32_t l_96 = 0xB712F41FL;
                l_87 = (((safe_rshift_func_uint8_t_u_u((((l_58 = p_38) | (safe_add_func_int8_t_s_s(p_38, l_85[2][1][1]))) >= (((g_6.f0 == 0xB182L) >= 0xB7L) , g_3[0][0])), 5)) >= l_86[0][1]) > l_86[0][0]);
                l_90++;
                l_96 = (safe_mul_func_uint8_t_u_u(((g_78[0][3][0] , 0xF9L) | g_4), (l_95 = (l_87 | l_58))));
            }
            l_87 ^= (safe_add_func_uint64_t_u_u((l_44 || 0xBA2FL), ((1L || ((safe_sub_func_int8_t_s_s(g_69, l_85[2][2][3])) <= (-1L))) != g_4)));
            for (l_87 = (-2); (l_87 < (-20)); l_87 = safe_sub_func_int64_t_s_s(l_87, 5))
            { 
                int8_t l_117[3];
                int32_t l_119 = 0x49EDB2DAL;
                int32_t l_123 = 7L;
                int32_t l_125[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_117[i] = 0xE9L;
                for (i = 0; i < 3; i++)
                    l_125[i] = 0x7CE365D6L;
                l_116[0][2][0] = (((~(safe_lshift_func_uint8_t_u_s((g_3[0][0] & 0UL), 6))) && ((((l_88 = l_106) & (safe_lshift_func_uint16_t_u_s(((g_114 = (~(safe_rshift_func_int8_t_s_s(((safe_add_func_int32_t_s_s((p_37 < 0x26758D62C3E9071ELL), p_38)) ^ 18446744073709551615UL), p_36)))) > g_3[0][0]), l_115))) >= l_63) , p_35)) & p_37);
                ++l_127;
                g_4 = l_130;
            }
        }
        else
        { 
            if ((l_118[1][0][3] = 0xFF9C7B46L))
            { 
                int32_t l_131 = 0x24896CD4L;
                int32_t l_132 = 0x8B728ABAL;
                int32_t l_133 = 0x0FC97383L;
                g_134++;
            }
            else
            { 
lbl_156:
                l_59 = (safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((g_69 && (0UL == (l_118[3][2][0] = (g_155 = ((((safe_div_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(l_116[0][2][0], ((safe_rshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((p_35 == 0xA0L) >= g_78[1][3][1]), p_38)) > (-1L)), 6)) , 0x1BAFL))) & l_87), p_39)), g_69)) > l_63), g_4)), 0x8EL)) > l_62) > p_39) && 0x5D1E382ABCCD47DFLL))))), 2)) , l_118[3][2][1]), 3));
                l_158 = l_157;
                g_78[0][0][1] = ((l_120[2] = (safe_sub_func_int16_t_s_s(l_158.f2, (safe_sub_func_uint32_t_u_u((((+(g_164 = 0xBE33L)) > (safe_sub_func_int32_t_s_s(((g_167 , (safe_rshift_func_int16_t_s_u((l_60 = ((g_170[1][0] |= 0x1DL) == 0xBAL)), g_78[0][3][0]))) != 0x8EAFA315590E784BLL), 0x4FD87F62L))) & (-8L)), 1L))))) != (-1L));
            }
            if (l_115)
            { 
                return g_170[0][0];
            }
            else
            { 
                g_78[0][3][0] = g_171;
            }
            ++l_173;
        }
    }
    else
    { 
        const uint8_t l_176[2] = {0xE3L,0xE3L};
        uint16_t l_179 = 0xD941L;
        int32_t l_183 = 1L;
        int32_t l_188 = 1L;
        int64_t l_214 = 0xC3985818B2649211LL;
        struct S0 l_243 = {0xC615CB02L,0UL,0x0008L};
        int i;
        if ((l_183 = (l_176[1] && ((safe_lshift_func_int8_t_s_u(((l_179 & ((((g_61 < (safe_mul_func_int16_t_s_s(((g_61 | p_36) == 4294967289UL), p_35))) && l_182) < 0UL) & 1L)) > l_60), p_35)) != 0xD3C5L))))
        { 
            int64_t l_186 = 0L;
            int32_t l_187[1];
            int i;
            for (i = 0; i < 1; i++)
                l_187[i] = 0x931B0DFBL;
            for (l_179 = (-27); (l_179 < 44); l_179 = safe_add_func_int8_t_s_s(l_179, 3))
            { 
                uint8_t l_189[5][1][1] = {{{5UL}},{{255UL}},{{5UL}},{{255UL}},{{5UL}}};
                int i, j, k;
                --l_189[3][0][0];
                l_63 = (((safe_rshift_func_uint16_t_u_s(0x9042L, (l_194[0] , (safe_add_func_int64_t_s_s((((safe_div_func_uint16_t_u_u((l_183 |= (safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((-6L) && (safe_lshift_func_uint8_t_u_s((((0xA1DAL & g_134) ^ 1UL) >= l_176[1]), 2))), p_38)), (-1L)))), l_120[2])) <= g_78[0][3][0]) > (-10L)), 0xE5BB092F33C9A5DCLL))))) <= g_114) && 0xA4L);
            }
            for (g_164 = 0; (g_164 <= 60); g_164 = safe_add_func_uint64_t_u_u(g_164, 1))
            { 
                l_207++;
            }
            g_3[1][1] = (g_78[3][2][2] = ((l_214 = ((safe_lshift_func_int16_t_s_u(l_116[1][2][1], (g_78[0][3][2] == (safe_mod_func_int8_t_s_s((p_35 & (l_186 == 6UL)), l_187[0]))))) <= g_164)) || l_187[0]));
        }
        else
        { 
            uint8_t l_217 = 255UL;
            int32_t l_231 = 0xFAABE31BL;
            for (l_182 = 0; (l_182 >= 48); l_182 = safe_add_func_uint16_t_u_u(l_182, 5))
            { 
                int64_t l_230 = 0xEBC7C749252602BCLL;
                g_167.f1 = l_217;
                l_231 &= ((l_120[2] = (safe_div_func_int64_t_s_s((((++g_171) || (((safe_add_func_uint32_t_u_u((p_35 | ((!(~(p_39 = 0xFB9BL))) , (safe_rshift_func_uint16_t_u_u(g_78[0][3][0], 4)))), (safe_sub_func_uint64_t_u_u((g_78[0][3][0] || g_3[0][0]), p_38)))) == 0x62L) == p_37)) & l_183), l_230))) > g_6.f0);
            }
        }
        for (g_164 = 0; (g_164 != 15); g_164 = safe_add_func_int64_t_s_s(g_164, 3))
        { 
            int16_t l_236 = 0x4C75L;
            struct S0 l_241 = {0xE263D413L,4294967295UL,65535UL};
            int8_t l_244 = 1L;
            int32_t l_261 = 1L;
            int32_t l_263[4];
            int i;
            for (i = 0; i < 4; i++)
                l_263[i] = 0x314BEDBEL;
            if (((safe_mul_func_int16_t_s_s(((0x4AF95812L | (((g_237[1][1] |= l_236) > 0xA5L) <= 1UL)) > p_35), g_170[1][0])) <= l_188))
            { 
                uint64_t l_240[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_240[i] = 0x714B16BE923F389CLL;
                l_183 = (safe_rshift_func_int8_t_s_u(l_240[1], 1));
                if (g_78[0][3][0])
                    break;
            }
            else
            { 
                struct S0 l_242 = {0xAAD8E387L,0xAA0E9867L,0x463EL};
                int32_t l_262 = 0x978A9AF8L;
                l_243 = (l_242 = l_241);
                l_244 |= g_237[2][1];
                l_263[0] = (((safe_lshift_func_uint8_t_u_u(l_242.f1, 4)) != (safe_div_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(0xB9F3FC71L, (((safe_mul_func_int8_t_s_s(((((safe_unary_minus_func_uint16_t_u((safe_mod_func_int32_t_s_s(((l_262 = (safe_add_func_uint32_t_u_u((~g_237[1][1]), (l_261 = (l_183 &= (l_176[1] , p_39)))))) , 0xBDE21B4AL), p_39)))) ^ 0L) , p_38) , (-5L)), 0x73L)) | p_37) | 1UL))) >= l_244), 65535UL)), l_214))) <= l_176[1]);
            }
            l_243 = l_194[1];
        }
    }
    if ((l_120[3] ^= p_35))
    { 
        union U1 l_264 = {0xB66CE235L};
        g_3[1][0] ^= (l_264 , (((p_35 & ((safe_mul_func_uint8_t_u_u(((-9L) | ((safe_mul_func_uint32_t_u_u((g_78[3][3][1] == 0xFCL), 0L)) , g_167.f1)), l_264.f0)) | l_116[2][2][0])) <= 0L) , 0x0052BFA0L));
        if ((safe_unary_minus_func_int16_t_s(l_264.f1)))
        { 
            uint16_t l_284 = 0xA80EL;
            uint32_t l_285 = 0xB8893ACEL;
            for (l_63 = (-28); (l_63 != (-19)); l_63 = safe_add_func_uint64_t_u_u(l_63, 3))
            { 
                int64_t l_287 = (-2L);
                int32_t l_288[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_288[i] = 1L;
                l_60 ^= (g_78[3][3][1] >= 9L);
                l_288[0] = (safe_sub_func_int16_t_s_s((-1L), (((((((((safe_mul_func_int8_t_s_s(((((safe_sub_func_uint8_t_u_u((((l_285 = (safe_sub_func_int32_t_s_s((p_35 == (safe_mod_func_int64_t_s_s(g_3[0][0], (safe_mod_func_int32_t_s_s(((g_170[0][0] && 0xB3F83C38EE966703LL) > l_284), p_39))))), (-5L)))) != 0xC389BE25CF47ACA7LL) , l_286[3]), p_35)) | p_38) == 0x18L) >= p_39), 0xDEL)) || (-1L)) >= 0xEA47AE80A53A8039LL) >= l_264.f0) | l_264.f1) >= 3UL) , l_287) > p_39) ^ 4L)));
                return p_35;
            }
            return g_6.f2;
        }
        else
        { 
            int16_t l_301 = 0x6AFEL;
            l_120[2] &= (safe_mul_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((((safe_sub_func_int8_t_s_s((g_155 , l_264.f1), (-9L))) < ((safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(p_38, p_39)) || l_301), (-8L))), p_39)) > (-1L))) ^ g_6.f2), 0x1FL)) , l_264.f0), p_38));
            l_60 = l_194[0].f1;
            l_120[2] = (safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_div_func_uint64_t_u_u((safe_div_func_uint64_t_u_u((safe_add_func_uint64_t_u_u((l_264.f1 >= ((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((p_35 ^ (g_237[0][0] || (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(l_264.f1, p_37)), 15)))) >= g_134), 65535UL)), 0xD8L)) || (-1L))), g_170[0][0])), l_264.f0)), 2L)), 4294967287UL)), 6));
        }
    }
    else
    { 
        uint16_t l_335[4] = {0xEA14L,0xEA14L,0xEA14L,0xEA14L};
        int32_t l_338 = 0x9AFB836CL;
        int i;
        if (((p_35 = (safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((g_171 , ((safe_add_func_uint32_t_u_u(l_328, p_35)) ^ (((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u(0x6B68L, 10)) && 0x9EFDL) >= g_237[1][1]), 0)), l_116[1][2][1])) && g_3[0][0]) >= l_335[0]))) , 0x5FL), g_237[1][1])), l_120[0]))) ^ 18446744073709551610UL))
        { 
            uint16_t l_339 = 2UL;
            l_120[2] = (((safe_div_func_uint64_t_u_u(p_35, l_335[1])) < g_3[0][0]) , (((l_338 = ((((0xAFL != g_237[0][1]) > 0xE2DF67BF6E9D8676LL) == 9UL) > l_335[3])) , 0x1DF5792AL) == p_36));
            l_339 = g_134;
        }
        else
        { 
            struct S0 l_340 = {-1L,0xA6F90522L,5UL};
            g_341 = l_340;
            for (l_340.f0 = 0; (l_340.f0 == (-24)); l_340.f0 = safe_sub_func_uint32_t_u_u(l_340.f0, 6))
            { 
                uint16_t l_346 = 1UL;
                l_120[0] ^= (((safe_sub_func_uint8_t_u_u((((l_346 == 18446744073709551608UL) || g_78[1][2][3]) < (safe_sub_func_uint8_t_u_u(((l_335[3] < g_69) < 1L), p_39))), l_340.f2)) < 0xB2CAB1EF6BA384BALL) , g_114);
                if (g_114)
                    continue;
            }
        }
        for (l_182 = 0; (l_182 <= 3); l_182 += 1)
        { 
            int32_t l_353 = 0x6DBC6972L;
            uint32_t l_362 = 0UL;
            int i;
            l_63 = (((safe_mod_func_int8_t_s_s(0L, l_335[l_182])) & (((g_114 &= (safe_mod_func_int16_t_s_s((((++g_155) != (safe_lshift_func_uint8_t_u_u(((((l_120[0] = g_3[0][0]) | (safe_mod_func_int16_t_s_s((l_335[l_182] == 0xAC48L), g_134))) >= g_6.f0) < l_286[3]), p_37))) > l_286[3]), 0xF3DFL))) <= 0UL) ^ p_36)) , p_38);
            l_353 = (safe_lshift_func_uint16_t_u_u((l_335[l_182] ^= l_362), 8));
        }
        if (g_69)
            goto lbl_363;
    }
    l_194[0] = l_194[1];
    return g_3[0][0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_6.f0, "g_6.f0", print_hash_value);
    transparent_crc(g_6.f1, "g_6.f1", print_hash_value);
    transparent_crc(g_6.f2, "g_6.f2", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_78[i][j][k], "g_78[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_167.f0, "g_167.f0", print_hash_value);
    transparent_crc(g_167.f1, "g_167.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_170[i][j], "g_170[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_171, "g_171", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_237[i][j], "g_237[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_341.f0, "g_341.f0", print_hash_value);
    transparent_crc(g_341.f1, "g_341.f1", print_hash_value);
    transparent_crc(g_341.f2, "g_341.f2", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_366.f0, "g_366.f0", print_hash_value);
    transparent_crc(g_366.f1, "g_366.f1", print_hash_value);
    transparent_crc(g_413, "g_413", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
