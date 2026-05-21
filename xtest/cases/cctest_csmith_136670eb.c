// SPDX-License-Identifier: MIT
// cctest_csmith_136670eb.c --- cctest case csmith_136670eb (csmith seed 325480683)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xeb04ecb0 */

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

// Options:   -s 325480683 -o /tmp/csmith_gen_ehpdf7cj/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
};
#pragma pack(pop)

struct S1 {
   int16_t  f0;
};

struct S2 {
   int64_t  f0;
   int16_t  f1;
   int32_t  f2;
   int32_t  f3;
};

union U3 {
   const struct S2  f0;
   const int32_t  f1;
   int32_t  f2;
   uint16_t  f3;
};

union U4 {
   int64_t  f0;
   int32_t  f1;
};


static int32_t g_2[2] = {(-4L),(-4L)};
static const struct S2 g_12 = {6L,-1L,0x534DE6F8L,0x5EA6EDADL};
static int32_t g_42 = 0xE719BA7CL;
static int32_t g_43[4] = {1L,1L,1L,1L};
static uint32_t g_53 = 2UL;
static uint32_t g_69 = 0x6AA6F69AL;
static int8_t g_101[1] = {(-10L)};
static const uint16_t g_108 = 6UL;
static struct S1 g_120 = {0x7E4AL};
static int32_t g_164 = 0x636BB8EAL;
static uint16_t g_179 = 6UL;
static int32_t g_184 = (-10L);
static uint64_t g_193 = 1UL;
static int16_t g_218 = 0x1DBAL;
static uint8_t g_219 = 4UL;
static uint64_t g_227 = 0xBF9C39E361AB7B01LL;



static uint32_t  func_1(void);
static uint32_t  func_9(int8_t  p_10);
static int8_t  func_18(union U3  p_19, union U3  p_20, union U3  p_21);
static union U3  func_22(struct S0  p_23, uint64_t  p_24);




static uint32_t  func_1(void)
{ 
    int64_t l_183[1];
    uint32_t l_194[3];
    const int16_t l_217 = 0xADB5L;
    int8_t l_240 = 0L;
    int32_t l_241 = (-4L);
    int i;
    for (i = 0; i < 1; i++)
        l_183[i] = 0xF2F3EF5613898893LL;
    for (i = 0; i < 3; i++)
        l_194[i] = 0x98896650L;
    for (g_2[0] = (-16); (g_2[0] > (-3)); g_2[0] = safe_add_func_uint16_t_u_u(g_2[0], 6))
    { 
        uint16_t l_11 = 0x5DA2L;
        int32_t l_182 = (-2L);
        g_184 &= (((l_182 = (safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(g_2[1], (func_9(l_11) , (l_183[0] ^= ((l_182 <= 0x2BL) < l_182))))), 2UL))) > g_2[0]) != l_11);
        g_43[3] = (((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s(g_12.f2, (l_183[0] && (l_194[0] ^= ((safe_rshift_func_uint16_t_u_u(((g_42 <= (g_193 &= (safe_rshift_func_int8_t_s_s((g_179 == 0x5C58L), 3)))) < l_11), l_11)) == g_53))))), l_183[0])) || 0x2E94L) | l_183[0]);
        g_42 = 0x8F92758EL;
    }
    for (g_179 = 0; (g_179 <= 3); g_179 += 1)
    { 
        uint64_t l_210 = 0xC975FD88C43ECF06LL;
        int32_t l_220[5] = {1L,1L,1L,1L,1L};
        int32_t l_230 = 0xEB5C9B73L;
        struct S2 l_239 = {0xA1A75236C3EA1431LL,9L,1L,0x407F3023L};
        int i;
        if ((((((g_219 = ((!(safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((((safe_mod_func_int8_t_s_s((((((safe_rshift_func_uint16_t_u_s(((safe_div_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(g_12.f2, ((l_210 >= l_183[0]) , (safe_sub_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint16_t_u_u(l_183[0], g_43[3])) && 0L), l_217)) & g_12.f1), l_183[0]))))) < g_12.f0), 65530UL)) <= 65535UL), g_120.f0)) >= l_210) & (-1L)) , 0L) >= g_218), g_108)) || 0UL) < 0L), 7)), g_2[0])), l_194[1]))) | g_101[0])) || l_220[1]) != g_2[0]) <= g_120.f0) == g_184))
        { 
            int32_t l_231[5];
            int i;
            for (i = 0; i < 5; i++)
                l_231[i] = 0xE7C1DA21L;
            g_2[0] = (safe_mod_func_int16_t_s_s(((l_230 = (g_43[g_179] ^= (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(0x54L, (g_164 < (g_227 = g_179)))), ((safe_mul_func_uint16_t_u_u(g_179, g_108)) , g_12.f1))))) | l_194[0]), l_231[3]));
        }
        else
        { 
            union U4 l_234 = {0x9799441F9110C655LL};
            g_184 &= (safe_mod_func_uint8_t_u_u((l_234 , (g_43[3] , (g_101[0] , ((g_101[0] ^= (safe_mod_func_uint64_t_u_u((((((safe_lshift_func_int16_t_s_u(((l_241 = ((((l_239 = g_12) , g_120.f0) > l_183[0]) != l_240)) || g_193), g_227)) & g_120.f0) > l_220[0]) , 0UL) & 1UL), g_2[0]))) <= 0x2CL)))), g_164));
            for (l_239.f0 = 0; (l_239.f0 != 7); ++l_239.f0)
            { 
                int16_t l_244 = 0x7E7FL;
                int32_t l_245 = (-4L);
                struct S1 l_246 = {-2L};
                l_245 |= l_244;
                l_246 = g_120;
            }
        }
        if (g_69)
            continue;
    }
    return g_12.f2;
}



static uint32_t  func_9(int8_t  p_10)
{ 
    struct S2 l_13 = {0L,9L,-6L,0xD73DF2EFL};
    struct S0 l_25 = {-10L};
    uint16_t l_29 = 1UL;
    union U3 l_79 = {{0L,0xB004L,0xF203DA97L,0x9B40DC36L}};
    int32_t l_174 = 0x0A5E1540L;
    int32_t l_175[1][3];
    int32_t l_176 = 0x33F7C1FEL;
    int16_t l_177 = 0x945BL;
    int16_t l_178 = 0x5E8CL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_175[i][j] = 0x5FC756C3L;
    }
    l_13 = g_12;
    l_176 = (l_175[0][0] = ((safe_div_func_int32_t_s_s((l_174 ^= (0xF79FL & (safe_rshift_func_int8_t_s_u(func_18(func_22(l_25, (safe_div_func_uint16_t_u_u((~l_29), (((+((l_13.f3 = (safe_lshift_func_int8_t_s_u((safe_add_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(0UL, l_13.f0)), p_10)), g_2[0]))) , 0UL)) ^ g_12.f1) || 0x4BE18A1676492A41LL)))), l_79, l_79), g_2[0])))), 0xC0569548L)) != (-1L)));
    g_179--;
    return l_13.f0;
}



static int8_t  func_18(union U3  p_19, union U3  p_20, union U3  p_21)
{ 
    int16_t l_94 = 0xCBA3L;
    int32_t l_109 = (-1L);
    struct S1 l_122[4][5] = {{{0L},{0xA4B6L},{0L},{0L},{0xA4B6L}},{{1L},{0x26A3L},{0x26A3L},{1L},{0x26A3L}},{{0xA4B6L},{0xA4B6L},{0x77E5L},{0xA4B6L},{0xA4B6L}},{{0x26A3L},{1L},{0x26A3L},{0x26A3L},{1L}}};
    int32_t l_124 = 0L;
    int32_t l_125 = (-1L);
    int32_t l_126[2];
    int64_t l_137 = 0x07E6BEB08D429411LL;
    int32_t l_138 = 0x6BED5E3EL;
    uint32_t l_171 = 0xE1CA6CF4L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_126[i] = 3L;
    if ((safe_div_func_uint16_t_u_u((((g_101[0] = ((0x57343453L & ((safe_mul_func_uint8_t_u_u((0x20L & ((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s((safe_mod_func_int64_t_s_s(l_94, (safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u(g_12.f1, l_94)), l_94)), 1L)))), l_94)), p_21.f0.f3)), g_43[3])), 1UL)) && g_12.f3)), l_94)) == p_19.f0.f0)) == l_94)) >= (-7L)) && g_42), l_94)))
    { 
        struct S0 l_104 = {0x06A0B719L};
        int32_t l_107 = 1L;
        struct S1 l_121 = {0xC7F3L};
        int32_t l_129 = 1L;
        int64_t l_132[5] = {1L,1L,1L,1L,1L};
        int32_t l_133 = (-7L);
        int32_t l_134 = 0L;
        int32_t l_135 = 9L;
        int32_t l_136[3];
        struct S0 l_144 = {0x88B0772CL};
        int i;
        for (i = 0; i < 3; i++)
            l_136[i] = (-2L);
        l_109 |= ((safe_mul_func_int16_t_s_s(((p_20.f0.f1 != ((l_104 , (safe_add_func_uint16_t_u_u((l_107 == p_20.f0.f3), g_53))) & g_69)) , 0x5FF0L), g_108)) >= 0x2AL);
        if ((((l_107 = (safe_rshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s((safe_mod_func_int8_t_s_s((0x5CL || (2UL <= ((safe_sub_func_uint16_t_u_u((l_104.f0 & ((g_42 &= ((safe_lshift_func_int8_t_s_s(g_69, 5)) != p_20.f0.f1)) == 6L)), 65534UL)) ^ l_107))), l_94)), l_104.f0)), 3))) | 4294967295UL) & l_94))
        { 
            int64_t l_123 = (-4L);
            int32_t l_127 = (-10L);
            int32_t l_128 = (-9L);
            int32_t l_130 = 1L;
            int32_t l_131[3][2][1] = {{{0x33D78BCCL},{0x9E426141L}},{{0x33D78BCCL},{0x9E426141L}},{{0x33D78BCCL},{0x9E426141L}}};
            int8_t l_139 = 0xEBL;
            int16_t l_140 = 0xB199L;
            uint16_t l_141 = 0x1672L;
            int i, j, k;
            l_122[2][1] = (l_121 = g_120);
            --l_141;
        }
        else
        { 
lbl_161:
            l_144 = l_144;
        }
        for (g_42 = (-21); (g_42 > (-30)); g_42 = safe_sub_func_uint32_t_u_u(g_42, 1))
        { 
            int32_t l_150 = 2L;
            int32_t l_153 = 0x4F713FB6L;
            int32_t l_155 = 3L;
            int32_t l_156 = 0x677AA029L;
            int32_t l_157[3];
            uint32_t l_158 = 0x6C1FB7A5L;
            int i;
            for (i = 0; i < 3; i++)
                l_157[i] = 7L;
            for (g_120.f0 = 0; (g_120.f0 <= (-2)); g_120.f0 = safe_sub_func_uint8_t_u_u(g_120.f0, 5))
            { 
                int16_t l_149 = 0x1836L;
                int32_t l_151 = 0x202970E7L;
                int32_t l_152 = 0x9EAD4AB4L;
                int32_t l_154[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_154[i] = 6L;
                l_158++;
                l_124 &= (p_19.f0.f1 <= (g_101[0] = 0x47L));
            }
            if (g_43[3])
                break;
            if (g_108)
                goto lbl_161;
        }
    }
    else
    { 
        int64_t l_166[1][1];
        int32_t l_167 = 0x22E48340L;
        int32_t l_168 = 0x206272B9L;
        int32_t l_169 = 6L;
        int32_t l_170[3];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_166[i][j] = 0L;
        }
        for (i = 0; i < 3; i++)
            l_170[i] = 0x0F7EA906L;
        l_122[2][1] = l_122[3][1];
        for (l_125 = 18; (l_125 == 16); l_125 = safe_sub_func_int64_t_s_s(l_125, 6))
        { 
            if ((g_164 = g_12.f2))
            { 
                int32_t l_165 = 0L;
                return l_165;
            }
            else
            { 
                return p_21.f0.f1;
            }
        }
        ++l_171;
    }
    return p_20.f0.f2;
}



static union U3  func_22(struct S0  p_23, uint64_t  p_24)
{ 
    struct S0 l_41[4][3] = {{{4L},{0xE576DBD8L},{4L}},{{0x663439FCL},{4L},{0xE576DBD8L}},{{0x663439FCL},{0x663439FCL},{4L}},{{1L},{4L},{4L}}};
    int32_t l_56 = 0xC9E433C5L;
    int32_t l_66[3][3][1];
    union U3 l_78 = {{-1L,1L,7L,-10L}};
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
                l_66[i][j][k] = 0x3DF54D98L;
        }
    }
    for (p_24 = (-23); (p_24 >= 29); p_24 = safe_add_func_int32_t_s_s(p_24, 8))
    { 
        uint64_t l_44 = 0xACD6BCE8D550032DLL;
        int32_t l_57 = 0L;
        for (p_23.f0 = (-17); (p_23.f0 != 7); ++p_23.f0)
        { 
            for (g_42 = 0; g_42 < 4; g_42 += 1)
            {
                for (g_43[3] = 0; g_43[3] < 3; g_43[3] += 1)
                {
                    struct S0 tmp = {0x09FF4C90L};
                    l_41[g_42][g_43[3]] = tmp;
                }
            }
            --l_44;
        }
        l_57 = (((((!((safe_lshift_func_int16_t_s_u(((safe_mul_func_uint8_t_u_u(l_44, ((((g_12.f3 < g_43[3]) > (~(--g_53))) , g_12.f0) ^ l_44))) < p_23.f0), l_56)) && 1UL)) < p_23.f0) != (-5L)) | l_56) == g_12.f1);
    }
    for (g_42 = 0; (g_42 >= (-7)); g_42 = safe_sub_func_int16_t_s_s(g_42, 2))
    { 
        union U3 l_67 = {{0x6CF859E2267C8CEALL,0xF2C4L,0L,0L}};
        int32_t l_68[2][1];
        uint32_t l_70 = 0x792F697CL;
        uint8_t l_71 = 0x89L;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_68[i][j] = (-1L);
        }
        g_43[2] = ((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u((l_56 & (safe_rshift_func_uint8_t_u_s(((((l_66[2][1][0] = p_24) >= ((g_69 = ((l_68[0][0] = (l_67 , 0x0BL)) == (-7L))) , p_23.f0)) || p_24) > l_70), 2))), 7)), 4)) != l_56);
        l_71++;
        l_66[1][0][0] &= ((p_23.f0 > (((safe_sub_func_uint32_t_u_u((l_70 || l_70), (l_68[0][0] = (p_23 , p_23.f0)))) && g_2[1]) != 1L)) || g_2[0]);
    }
    return l_78;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_12.f0, "g_12.f0", print_hash_value);
    transparent_crc(g_12.f1, "g_12.f1", print_hash_value);
    transparent_crc(g_12.f2, "g_12.f2", print_hash_value);
    transparent_crc(g_12.f3, "g_12.f3", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_43[i], "g_43[i]", print_hash_value);

    }
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_101[i], "g_101[i]", print_hash_value);

    }
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_120.f0, "g_120.f0", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
